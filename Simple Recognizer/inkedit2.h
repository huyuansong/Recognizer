#pragma once

// 计算机生成了由 Microsoft Visual C++ 创建的 IDispatch 包装器类

// 注意:  不要修改此文件的内容。  如果此类由
//  Microsoft Visual C++ 重新生成，您的修改将被覆盖。

/////////////////////////////////////////////////////////////////////////////
// CInkedit2 包装器类

class CInkedit2 : public CWnd
{
protected:
	DECLARE_DYNCREATE(CInkedit2)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xE5CA59F5, 0x57C4, 0x4DD8, { 0x9B, 0xD6, 0x1D, 0xEE, 0xED, 0xD2, 0x7A, 0xF4 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); 
	}

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, 
				UINT nID, CFile* pPersist = NULL, BOOL bStorage = FALSE,
				BSTR bstrLicKey = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); 
	}

// 特性
public:
enum
{
    NO_BUTTON = 0,
    LEFT_BUTTON = 1,
    RIGHT_BUTTON = 2,
    MIDDLE_BUTTON = 4
}MouseButton;
enum
{
    rtfLeft = 0,
    rtfRight = 1,
    rtfCenter = 2
}SelAlignmentConstants;
enum
{
    DISPID_Text = 0,
    DISPID_TextRTF = 1,
    DISPID_Hwnd = 2,
    DISPID_DisableNoScroll = 3,
    DISPID_Locked = 4,
    DISPID_Enabled = 5,
    DISPID_MaxLength = 6,
    DISPID_MultiLine = 7,
    DISPID_ScrollBars = 8,
    DISPID_RTSelStart = 9,
    DISPID_RTSelLength = 10,
    DISPID_RTSelText = 11,
    DISPID_SelAlignment = 12,
    DISPID_SelBold = 13,
    DISPID_SelCharOffset = 14,
    DISPID_SelColor = 15,
    DISPID_SelFontName = 16,
    DISPID_SelFontSize = 17,
    DISPID_SelItalic = 18,
    DISPID_SelRTF = 19,
    DISPID_SelUnderline = 20,
    DISPID_DragIcon = 21,
    DISPID_Status = 22,
    DISPID_UseMouseForInput = 23,
    DISPID_InkMode = 24,
    DISPID_InkInsertMode = 25,
    DISPID_RecoTimeout = 26,
    DISPID_DrawAttr = 27,
    DISPID_Recognizer = 28,
    DISPID_Factoid = 29,
    DISPID_SelInk = 30,
    DISPID_SelInksDisplayMode = 31,
    DISPID_Recognize = 32,
    DISPID_GetGestStatus = 33,
    DISPID_SetGestStatus = 34,
    DISPID_Refresh = 35
}DISPID_InkEdit;
enum
{
    DISPID_IeeChange = 1,
    DISPID_IeeSelChange = 2,
    DISPID_IeeKeyDown = 3,
    DISPID_IeeKeyUp = 4,
    DISPID_IeeMouseUp = 5,
    DISPID_IeeMouseDown = 6,
    DISPID_IeeKeyPress = 7,
    DISPID_IeeDblClick = 8,
    DISPID_IeeClick = 9,
    DISPID_IeeMouseMove = 10,
    DISPID_IeeCursorDown = 21,
    DISPID_IeeStroke = 22,
    DISPID_IeeGesture = 23,
    DISPID_IeeRecognitionResult = 24
}DISPID_InkEditEvents;
enum
{
    IES_Idle = 0,
    IES_Collecting = 1,
    IES_Recognizing = 2
}InkEditStatus;
enum
{
    IEM_Disabled = 0,
    IEM_Ink = 1,
    IEM_InkAndGesture = 2
}InkMode;
enum
{
    IEM_InsertText = 0,
    IEM_InsertInk = 1
}InkInsertMode;
enum
{
    IRO_Black = 1,
    IRO_NotMergePen = 2,
    IRO_MaskNotPen = 3,
    IRO_NotCopyPen = 4,
    IRO_MaskPenNot = 5,
    IRO_Not = 6,
    IRO_XOrPen = 7,
    IRO_NotMaskPen = 8,
    IRO_MaskPen = 9,
    IRO_NotXOrPen = 10,
    IRO_NoOperation = 11,
    IRO_MergeNotPen = 12,
    IRO_CopyPen = 13,
    IRO_MergePenNot = 14,
    IRO_MergePen = 15,
    IRO_White = 16
}InkRasterOperation;
enum
{
    IPT_Ball = 0,
    IPT_Rectangle = 1
}InkPenTip;
enum
{
    IRC_DontCare = 1,
    IRC_Object = 2,
    IRC_FreeInput = 4,
    IRC_LinedInput = 8,
    IRC_BoxedInput = 16,
    IRC_CharacterAutoCompletionInput = 32,
    IRC_RightAndDown = 64,
    IRC_LeftAndDown = 128,
    IRC_DownAndLeft = 256,
    IRC_DownAndRight = 512,
    IRC_ArbitraryAngle = 1024,
    IRC_Lattice = 2048,
    IRC_AdviseInkChange = 4096,
    IRC_StrokeReorder = 8192,
    IRC_Personalizable = 16384
}InkRecognizerCapabilities;
enum
{
    IBBM_Default = 0,
    IBBM_NoCurveFit = 1,
    IBBM_CurveFit = 2,
    IBBM_PointsOnly = 3,
    IBBM_Union = 4
}InkBoundingBoxMode;
enum
{
    TPMU_Default = 0,
    TPMU_Inches = 1,
    TPMU_Centimeters = 2,
    TPMU_Degrees = 3,
    TPMU_Radians = 4,
    TPMU_Seconds = 5,
    TPMU_Pounds = 6,
    TPMU_Grams = 7
}TabletPropertyMetricUnit;
enum
{
    IEF_CopyFromOriginal = 0,
    IEF_RemoveFromOriginal = 1,
    IEF_Default = 1
}InkExtractFlags;
enum
{
    IPF_InkSerializedFormat = 0,
    IPF_Base64InkSerializedFormat = 1,
    IPF_GIF = 2,
    IPF_Base64GIF = 3
}InkPersistenceFormat;
enum
{
    IPCM_Default = 0,
    IPCM_MaximumCompression = 1,
    IPCM_NoCompression = 2
}InkPersistenceCompressionMode;
enum
{
    ICF_None = 0,
    ICF_InkSerializedFormat = 1,
    ICF_SketchInk = 2,
    ICF_TextInk = 6,
    ICF_EnhancedMetafile = 8,
    ICF_Metafile = 32,
    ICF_Bitmap = 64,
    ICF_PasteMask = 7,
    ICF_CopyMask = 127,
    ICF_Default = 127
}InkClipboardFormats;
enum
{
    ICB_Copy = 0,
    ICB_Cut = 1,
    ICB_ExtractOnly = 48,
    ICB_DelayedCopy = 32,
    ICB_Default = 0
}InkClipboardModes;
enum
{
    IRC_Strong = 0,
    IRC_Intermediate = 1,
    IRC_Poor = 2
}InkRecognitionConfidence;
enum
{
    IRCACM_Full = 0,
    IRCACM_Prefix = 1,
    IRCACM_Random = 2
}InkRecognizerCharacterAutoCompletionMode;
enum
{
    IRM_None = 0,
    IRM_WordModeOnly = 1,
    IRM_Coerce = 2,
    IRM_TopInkBreaksOnly = 4,
    IRM_PrefixOk = 8,
    IRM_LineMode = 16,
    IRM_DisablePersonalization = 32,
    IRM_AutoSpace = 64,
    IRM_Max = 128
}InkRecognitionModes;
enum
{
    IRS_NoError = 0,
    IRS_Interrupted = 1,
    IRS_ProcessFailed = 2,
    IRS_InkAddedFailed = 4,
    IRS_SetAutoCompletionModeFailed = 8,
    IRS_SetStrokesFailed = 16,
    IRS_SetGuideFailed = 32,
    IRS_SetFlagsFailed = 64,
    IRS_SetFactoidFailed = 128,
    IRS_SetPrefixSuffixFailed = 256,
    IRS_SetWordListFailed = 512
}InkRecognitionStatus;
enum
{
    IDM_Ink = 0,
    IDM_Text = 1
}InkDisplayMode;
enum
{
    IAG_AllGestures = 0,
    IAG_NoGesture = 61440,
    IAG_Scratchout = 61441,
    IAG_Triangle = 61442,
    IAG_Square = 61443,
    IAG_Star = 61444,
    IAG_Check = 61445,
    IAG_Curlicue = 61456,
    IAG_DoubleCurlicue = 61457,
    IAG_Circle = 61472,
    IAG_DoubleCircle = 61473,
    IAG_SemiCircleLeft = 61480,
    IAG_SemiCircleRight = 61481,
    IAG_ChevronUp = 61488,
    IAG_ChevronDown = 61489,
    IAG_ChevronLeft = 61490,
    IAG_ChevronRight = 61491,
    IAG_ArrowUp = 61496,
    IAG_ArrowDown = 61497,
    IAG_ArrowLeft = 61498,
    IAG_ArrowRight = 61499,
    IAG_Up = 61528,
    IAG_Down = 61529,
    IAG_Left = 61530,
    IAG_Right = 61531,
    IAG_UpDown = 61536,
    IAG_DownUp = 61537,
    IAG_LeftRight = 61538,
    IAG_RightLeft = 61539,
    IAG_UpLeftLong = 61540,
    IAG_UpRightLong = 61541,
    IAG_DownLeftLong = 61542,
    IAG_DownRightLong = 61543,
    IAG_UpLeft = 61544,
    IAG_UpRight = 61545,
    IAG_DownLeft = 61546,
    IAG_DownRight = 61547,
    IAG_LeftUp = 61548,
    IAG_LeftDown = 61549,
    IAG_RightUp = 61550,
    IAG_RightDown = 61551,
    IAG_Exclamation = 61604,
    IAG_Tap = 61680,
    IAG_DoubleTap = 61681
}InkApplicationGesture;
enum
{
    rtfFlat = 0,
    rtfThreeD = 1
}AppearanceConstants;
enum
{
    rtfNoBorder = 0,
    rtfFixedSingle = 1
}BorderStyleConstants;
enum
{
    IMP_Default = 0,
    IMP_Arrow = 1,
    IMP_Crosshair = 2,
    IMP_Ibeam = 3,
    IMP_SizeNESW = 4,
    IMP_SizeNS = 5,
    IMP_SizeNWSE = 6,
    IMP_SizeWE = 7,
    IMP_UpArrow = 8,
    IMP_Hourglass = 9,
    IMP_NoDrop = 10,
    IMP_ArrowHourglass = 11,
    IMP_ArrowQuestion = 12,
    IMP_SizeAll = 13,
    IMP_Hand = 14,
    IMP_Custom = 99
}InkMousePointer;
enum
{
    rtfNone = 0,
    rtfHorizontal = 1,
    rtfVertical = 2,
    rtfBoth = 3
}ScrollBarsConstants;
enum
{
    THWC_Integrated = 1,
    THWC_CursorMustTouch = 2,
    THWC_HardProximity = 4,
    THWC_CursorsHavePhysicalIds = 8
}TabletHardwareCapabilities;
enum
{
    ICBS_Unavailable = 0,
    ICBS_Up = 1,
    ICBS_Down = 2
}InkCursorButtonState;


// 操作
public:

// IInkEdit

// Functions
//

	long get_Status()
	{
		long result;
		InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_UseMouseForInput()
	{
		BOOL result;
		InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_UseMouseForInput(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x17, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_InkMode()
	{
		long result;
		InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_InkMode(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x18, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_InkInsertMode()
	{
		long result;
		InvokeHelper(0x19, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_InkInsertMode(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x19, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_DrawingAttributes()
	{
		LPDISPATCH result;
		InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void putref_DrawingAttributes(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x1b, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
	}
	long get_RecognitionTimeout()
	{
		long result;
		InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_RecognitionTimeout(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x1a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Recognizer()
	{
		LPDISPATCH result;
		InvokeHelper(0x1c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void putref_Recognizer(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x1c, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_Factoid()
	{
		CString result;
		InvokeHelper(0x1d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Factoid(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x1d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT get_SelInks()
	{
		VARIANT result;
		InvokeHelper(0x1e, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_SelInks(VARIANT newValue)
	{
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0x1e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	long get_SelInksDisplayMode()
	{
		long result;
		InvokeHelper(0x1f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_SelInksDisplayMode(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x1f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void Recognize()
	{
		InvokeHelper(0x20, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL GetGestureStatus(long Gesture)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x21, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Gesture);
		return result;
	}
	void SetGestureStatus(long Gesture, BOOL Listen)
	{
		static BYTE parms[] = VTS_I4 VTS_BOOL ;
		InvokeHelper(0x22, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Gesture, Listen);
	}
	void put_BackColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_BackColor()
	{
		unsigned long result;
		InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	long get_Appearance()
	{
		long result;
		InvokeHelper(DISPID_APPEARANCE, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Appearance(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(DISPID_APPEARANCE, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_BorderStyle()
	{
		long result;
		InvokeHelper(DISPID_BORDERSTYLE, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_BorderStyle(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(DISPID_BORDERSTYLE, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_Hwnd()
	{
		long result;
		InvokeHelper(DISPID_HWND, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Font()
	{
		LPDISPATCH result;
		InvokeHelper(DISPID_FONT, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void putref_Font(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(DISPID_FONT, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_Text()
	{
		CString result;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Text(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_MouseIcon()
	{
		LPDISPATCH result;
		InvokeHelper(0xfffffdf6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void put_MouseIcon(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0xfffffdf6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void putref_MouseIcon(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0xfffffdf6, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
	}
	long get_MousePointer()
	{
		long result;
		InvokeHelper(0xfffffdf7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_MousePointer(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xfffffdf7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Locked()
	{
		BOOL result;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Locked(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Enabled()
	{
		BOOL result;
		InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Enabled(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_MaxLength()
	{
		long result;
		InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_MaxLength(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_MultiLine()
	{
		BOOL result;
		InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_MultiLine(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_ScrollBars()
	{
		long result;
		InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_ScrollBars(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_DisableNoScroll()
	{
		BOOL result;
		InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisableNoScroll(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT get_SelAlignment()
	{
		VARIANT result;
		InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_SelAlignment(VARIANT newValue)
	{
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_SelBold()
	{
		VARIANT result;
		InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_SelBold(VARIANT newValue)
	{
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0xd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_SelItalic()
	{
		VARIANT result;
		InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_SelItalic(VARIANT newValue)
	{
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0x12, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_SelUnderline()
	{
		VARIANT result;
		InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_SelUnderline(VARIANT newValue)
	{
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0x14, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_SelColor()
	{
		VARIANT result;
		InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_SelColor(VARIANT newValue)
	{
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0xf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_SelFontName()
	{
		VARIANT result;
		InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_SelFontName(VARIANT newValue)
	{
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0x10, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_SelFontSize()
	{
		VARIANT result;
		InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_SelFontSize(VARIANT newValue)
	{
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0x11, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_SelCharOffset()
	{
		VARIANT result;
		InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_SelCharOffset(VARIANT newValue)
	{
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0xe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	CString get_TextRTF()
	{
		CString result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_TextRTF(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_SelStart()
	{
		long result;
		InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_SelStart(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_SelLength()
	{
		long result;
		InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_SelLength(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_SelText()
	{
		CString result;
		InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_SelText(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_SelRTF()
	{
		CString result;
		InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_SelRTF(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x13, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void Refresh()
	{
		InvokeHelper(0x23, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

// Properties
//



};
