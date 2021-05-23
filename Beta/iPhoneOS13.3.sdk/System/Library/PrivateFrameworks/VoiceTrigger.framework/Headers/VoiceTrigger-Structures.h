/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

typedef void (^CDUnknownBlockType)(void);

struct AccelCosine {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    _Bool _field4;
    struct N2DArray<float> _field5;
    struct NArray<float> _field6;
};

struct AccelFFT {
    struct vDSP_DFT_SetupStruct *_field1;
    _Bool _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    struct NArray<float> _field6;
};

struct AccelLoga {
    unsigned int _field1;
    _Bool _field2;
    float _field3;
    float _field4;
};

struct AccelMelFilter {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    _Bool _field4;
    struct NArray<unsigned int> _field5;
    struct NArray<unsigned int> _field6;
    struct NArray<NArray<float>> _field7;
    struct NArray<float> _field8;
};

struct AccelPSD {
    unsigned int _field1;
    _Bool _field2;
    unsigned int _field3;
    _Bool _field4;
};

struct AccelStaticMFCC {
    _Bool _field1;
    struct NArray<float> _field2;
    struct NArray<float> _field3;
    struct NArray<short> _field4;
    unsigned int _field5;
    float _field6;
    struct AccelWin2MFCC _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    float _field11;
    int _field12;
    int _field13;
    short *_field14;
    unsigned int _field15;
};

struct AccelWin2MFCC {
    _Bool _field1;
    struct AccelWindow _field2;
    struct AccelFFT _field3;
    struct AccelPSD _field4;
    struct AccelMelFilter _field5;
    struct AccelLoga _field6;
    struct AccelCosine _field7;
    struct DSPSplitComplex _field8;
    struct NArray<float> _field9;
    float _field10;
    unsigned int _field11;
    unsigned int _field12;
    _Bool _field13;
    unsigned int _field14;
    unsigned int _field15;
    _Bool _field16;
    float _field17;
    _Bool _field18;
    _Bool _field19;
    unsigned int _field20;
    unsigned int _field21;
    float _field22;
    float _field23;
    float _field24;
    float _field25;
    unsigned int _field26;
    unsigned int _field27;
};

struct AccelWindow {
    unsigned int _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    struct NArray<float> _field5;
    int _field6;
};

struct AudioBuffer {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct DSPSplitComplex {
    float *_field1;
    float *_field2;
};

struct IntNovDetect {
    unsigned int _field1;
    int _field2;
    int _field3;
    struct NString _field4;
    _Bool _field5;
    struct TSAcAnal _field6;
    struct NLocalCepNorm _field7;
    struct TSHMMDetector _field8;
    struct TSHMMDetector _field9;
    struct TSSupervectorScorer _field10;
    struct TSSATScorer _field11;
    struct NRingDropBuffer _field12;
    struct NFrame _field13;
    struct NString _field14;
    struct _ndresult _field15;
    struct _ndsupervec _field16;
    struct _ndsupervec _field17;
    struct NArray<float> _field18;
    struct _ndsvscore _field19;
    struct _ndspeakervec {
        float *_field1;
        unsigned int _field2;
    } _field20;
    struct NArray<float> _field21;
    struct _ndsvscore _field22;
    struct NArray<unsigned int> _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned int _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    float _field34;
    float _field35;
    float _field36;
    float _field37;
    float _field38;
    float _field39;
    float _field40;
    _Bool _field41;
    _Bool _field42;
    _Bool _field43;
    _Bool _field44;
    _Bool _field45;
    _Bool _field46;
    _Bool _field47;
    struct NConfigSection _field48;
    struct NFrame *_field49;
    unsigned int _field50;
    unsigned int _field51;
    unsigned int _field52;
    unsigned int _field53;
    struct NArray<short> _field54;
    struct NArray<unsigned int> _field55;
    struct NArray<unsigned int> _field56;
    struct NArray<float> _field57;
    unsigned int _field58;
};

struct N2DArray<bool> {
    CDUnknownFunctionPointerType *_field1;
    struct NArray<bool> *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct N2DArray<float> {
    CDUnknownFunctionPointerType *_field1;
    struct NArray<float> *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct NArray<NArray<float>> {
    CDUnknownFunctionPointerType *_field1;
    struct NArray<float> *_field2;
    unsigned int _field3;
};

struct NArray<NFrame> {
    CDUnknownFunctionPointerType *_field1;
    struct NFrame *_field2;
    unsigned int _field3;
};

struct NArray<NLRHMMModel> {
    CDUnknownFunctionPointerType *_field1;
    struct NLRHMMModel *_field2;
    unsigned int _field3;
};

struct NArray<NLRHMMStateTokens> {
    CDUnknownFunctionPointerType *_field1;
    struct NLRHMMStateTokens *_field2;
    unsigned int _field3;
};

struct NArray<bool> {
    CDUnknownFunctionPointerType *_field1;
    _Bool *_field2;
    unsigned int _field3;
};

struct NArray<float> {
    CDUnknownFunctionPointerType *_field1;
    float *_field2;
    unsigned int _field3;
};

struct NArray<short> {
    CDUnknownFunctionPointerType *_field1;
    short *_field2;
    unsigned int _field3;
};

struct NArray<unsigned int> {
    CDUnknownFunctionPointerType *_field1;
    unsigned int *_field2;
    unsigned int _field3;
};

struct NConfigSection {
    struct NString _field1;
    struct NMap<NString, NString> _field2;
};

struct NDelta {
    _Bool _field1;
    unsigned int _field2;
    unsigned int _field3;
    float _field4;
    _Bool _field5;
    struct NArray<float> _field6;
};

struct NDistribution;

struct NDynamicMFCC {
    struct NArray<float> _field1;
    _Bool _field2;
    _Bool _field3;
    struct NLinkedList<NArray<float>> _field4;
    struct NLinkedList<NArray<float>> _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    struct NDelta _field13;
    struct NDelta _field14;
};

struct NElement;

struct NFrame {
    CDUnknownFunctionPointerType *_field1;
    float *_field2;
    unsigned int _field3;
};

struct NFrameWindow {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    struct NFrame _field12;
    _Bool _field13;
    _Bool _field14;
};

struct NHash<NMap<NString, NString>::HashItem> {
    CDUnknownFunctionPointerType *_field1;
    struct NLinkedList<NMap<NString, NString>::HashItem> *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct NLRHMMModel;

struct NLRHMMStateTokens;

struct NLRHMMTraceback {
    struct N2DArray<bool> _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct NLinkedList<NArray<NResizingQueue<NFrame>::NElement>> {
    CDUnknownFunctionPointerType *_field1;
    struct NElement *_field2;
    struct NElement *_field3;
    unsigned int _field4;
};

struct NLinkedList<NArray<float>> {
    CDUnknownFunctionPointerType *_field1;
    struct NElement *_field2;
    struct NElement *_field3;
    unsigned int _field4;
};

struct NLinkedList<NMap<NString, NString>::HashItem>;

struct NLocalCepNorm {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    struct NArray<NFrame> _field7;
    struct NFrame _field8;
    float _field9;
    _Bool _field10;
};

struct NMap<NString, NString> {
    CDUnknownFunctionPointerType *_field1;
    struct NHash<NMap<NString, NString>::HashItem> _field2;
};

struct NResizingQueue<NFrame> {
    CDUnknownFunctionPointerType *_field1;
    struct NLinkedList<NArray<NResizingQueue<NFrame>::NElement>> _field2;
    struct NElement *_field3;
    struct NElement *_field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    _Bool _field8;
    unsigned int _field9;
    float _field10;
};

struct NRingDropBuffer {
    struct NArray<NFrame> _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct NSATImpostor {
    CDUnknownFunctionPointerType *_field1;
    struct NString _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    float *_field7;
    float *_field8;
    _Bool _field9;
};

struct NSATSpeaker {
    CDUnknownFunctionPointerType *_field1;
    struct NString _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    float *_field8;
    float _field9;
    unsigned int _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    _Bool _field15;
    struct NString _field16;
    struct NString _field17;
};

struct NString {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    char *_field3;
};

struct NWavChunk2HTKFrames {
    struct NArray<float> _field1;
    struct NFrame _field2;
    struct AccelStaticMFCC _field3;
    struct NDynamicMFCC _field4;
    _Bool _field5;
    _Bool _field6;
    struct NString _field7;
    struct NString _field8;
    struct NString _field9;
    struct NString _field10;
    unsigned int _field11;
    float _field12;
    _Bool _field13;
    _Bool _field14;
    float _field15;
    _Bool _field16;
    float _field17;
    _Bool _field18;
    _Bool _field19;
    _Bool _field20;
    unsigned int _field21;
    float _field22;
    float _field23;
    float _field24;
    float _field25;
    unsigned int _field26;
    _Bool _field27;
    unsigned int _field28;
    float _field29;
    float _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    _Bool _field34;
    unsigned int _field35;
    unsigned int _field36;
};

struct TSAcAnal {
    struct NWavChunk2HTKFrames _field1;
    struct NResizingQueue<NFrame> _field2;
    struct NFrame _field3;
    _Bool _field4;
    struct NString _field5;
    unsigned int _field6;
    unsigned int _field7;
    float _field8;
    _Bool _field9;
    _Bool _field10;
};

struct TSHMMDetector {
    CDUnknownFunctionPointerType *_field1;
    struct NDistribution *_field2;
    struct NDistribution *_field3;
    void *_field4;
    struct NFrameWindow _field5;
    struct NLRHMMTraceback _field6;
    struct NArray<NLRHMMModel> _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    int _field11;
    struct NFrame _field12;
    struct NArray<float> _field13;
    struct NArray<float> _field14;
    struct NArray<NLRHMMStateTokens> _field15;
    struct NArray<bool> _field16;
    float _field17;
    unsigned int _field18;
    float _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    _Bool _field26;
    _Bool _field27;
    _Bool _field28;
    _Bool _field29;
    _Bool _field30;
};

struct TSSATScorer {
    CDUnknownFunctionPointerType *_field1;
    struct NDistribution *_field2;
    struct NSATImpostor _field3;
    struct NSATSpeaker _field4;
    struct NFrame _field5;
    struct NArray<float> _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    _Bool _field11;
    float _field12;
    unsigned int _field13;
    _Bool _field14;
    _Bool _field15;
    _Bool _field16;
    _Bool _field17;
    _Bool _field18;
};

struct TSSupervectorScorer {
    CDUnknownFunctionPointerType *_field1;
    struct NDistribution *_field2;
    unsigned int _field3;
    struct NFrame _field4;
    struct NArray<float> _field5;
    _Bool _field6;
};

struct VTAudioCircularBufferImpl<unsigned short>;

struct _ndresult {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    float _field5;
    _Bool _field6;
    _Bool _field7;
};

struct _ndsupervec {
    float *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct _ndsvscore {
    float _field1;
};

struct unique_ptr<voicetrigger::VTAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short>>> {
    struct __compressed_pair<voicetrigger::VTAudioCircularBufferImpl<unsigned short>*, std::__1::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short>>> {
        struct VTAudioCircularBufferImpl<unsigned short> *__value_;
    } __ptr_;
};

struct vDSP_DFT_SetupStruct;
