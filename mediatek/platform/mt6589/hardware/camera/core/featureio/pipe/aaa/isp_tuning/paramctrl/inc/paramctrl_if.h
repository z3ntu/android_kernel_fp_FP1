#ifndef _PARAMCTRL_IF_H_
#define _PARAMCTRL_IF_H_

namespace NSIspTuning
{

class IParamctrl
{
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//  Ctor/Dtor.
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private:
    //  Copy constructor is disallowed.
    IParamctrl(IParamctrl const&);
    //  Copy-assignment operator is disallowed.
    IParamctrl& operator=(IParamctrl const&);

protected:
    IParamctrl(ESensorDev_T const eSensorDev) {}
    virtual ~IParamctrl() {}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Instance
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
public:
    static IParamctrl* createInstance(ESensorDev_T const eSensorDev);
    virtual MVOID destroyInstance() = 0;

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//  Interfaces.
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
public: // Dynamic Tuning
    virtual MVOID       enableDynamicTuning(MBOOL const fgEnable) = 0;
    virtual MBOOL       isDynamicTuning() const = 0;

    virtual MVOID       enableDynamicCCM(MBOOL const fgEnable) = 0;
    virtual MBOOL       isDynamicCCM() const = 0;

	virtual MVOID   	enableDynamicBypass(MBOOL const fgEnable) = 0;
	virtual MBOOL   	isDynamicBypass() const = 0;

    //virtual MVOID       updateShadingNVRAMdata(MBOOL const fgEnable) = 0;
    //virtual MBOOL       isShadingNVRAMdataChange() const  = 0;

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
public:     // Attributes
    virtual MERROR_ENUM  setIspProfile(EIspProfile_T const eIspProfile) = 0;
    virtual MERROR_ENUM  setSceneMode(EIndex_Scene_T const eScene) = 0;
    virtual MERROR_ENUM  setEffect(EIndex_Effect_T const eEffect) = 0;
    virtual ESensorDev_T getSensorDev() const = 0;
    virtual EOperMode_T  getOperMode()   const = 0;
    virtual MERROR_ENUM  setSensorMode(ESensorMode_T const eSensorMode) = 0;
    virtual ESensorMode_T  getSensorMode()   const = 0;
    virtual MERROR_ENUM  setOperMode(EOperMode_T const eOperMode) = 0;
    virtual MERROR_ENUM setZoomRatio(MINT32 const i4ZoomRatio_x100) = 0;
    virtual MERROR_ENUM setAWBInfo(AWB_INFO_T const &rAWBInfo) = 0;
    virtual MERROR_ENUM setAEInfo(AE_INFO_T const &rAEInfo) = 0;
    virtual MERROR_ENUM setAFInfo(AF_INFO_T const &rAFInfo) = 0;
    virtual MERROR_ENUM setFlashInfo(FLASH_INFO_T const &rFlashInfo) = 0;

    //virtual MERROR_ENUM setIso(MUINT32 const u4ISOValue) = 0;
    //virtual MERROR_ENUM setCCT(MINT32 const i4CCT) = 0;
    //virtual MERROR_ENUM setCCTIndex_CCM (
    //            MINT32 const i4CCT,
    //            MINT32 const i4FluorescentIndex
    //        ) = 0;
    //virtual MERROR_ENUM setCCTIndex_Shading(MINT32 const i4CCT) = 0;
    virtual MERROR_ENUM setIndex_Shading(MINT32 const i4IDX) = 0;
    virtual MERROR_ENUM getIndex_Shading(MVOID*const pCmdArg) = 0;
	virtual MERROR_ENUM setPureOBCInfo(const ISP_NVRAM_OBC_T *pOBCInfo) = 0;
	virtual MERROR_ENUM getPureOBCInfo(ISP_NVRAM_OBC_T *pOBCInfo) = 0;

    //
    //virtual MERROR_ENUM setSceneLightValue(MINT32 const i4SceneLV_x10) = 0;

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
public: // ISP End-User-Defined Tuning Index.
    virtual MERROR_ENUM setIspUserIdx_Edge(EIndex_Isp_Edge_T const eIndex) = 0;
    virtual MERROR_ENUM setIspUserIdx_Hue(EIndex_Isp_Hue_T const eIndex) = 0;
    virtual MERROR_ENUM setIspUserIdx_Sat(EIndex_Isp_Saturation_T const eIndex) = 0;
    virtual MERROR_ENUM setIspUserIdx_Bright(EIndex_Isp_Brightness_T const eIndex) = 0;
    virtual MERROR_ENUM setIspUserIdx_Contrast(EIndex_Isp_Contrast_T const eIndex) = 0;

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
public:     ////    ISP Enable/Disable.
    //virtual MERROR_ENUM setEnable_Meta_Gamma(MBOOL const fgForceEnable) = 0;
    //virtual MBOOL       getEnable_Meta_Gamma()  const = 0;

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
public:     ////    Exif.
    virtual MERROR_ENUM getDebugInfo(
        NSIspExifDebug::IspExifDebugInfo_T& rIspExifDebugInfo
    ) const = 0;

public:     ////    Operations.
    //virtual MERROR_ENUM construct() = 0;
    virtual MERROR_ENUM init() = 0;
    virtual MERROR_ENUM uninit() = 0;
    virtual MERROR_ENUM validate(MBOOL const fgForce = MFALSE) = 0;
    virtual MERROR_ENUM validateFrameless() = 0;
    virtual MERROR_ENUM validatePerFrame(MBOOL const fgForce = MFALSE) = 0;

};


};  //  namespace NSIspTuning
#endif // _PARAMCTRL_IF_H_

