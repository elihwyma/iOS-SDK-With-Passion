/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@class MISSING_TYPE, NSArray, NSData;

typedef void (^CDUnknownBlockType)(void);

struct BoxFilterConfig {
    int _field1;
};

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct CVAPerfEndTimeProfilerSet;

struct CVAPhotoMetalContext {
    id device;
    id commandQueue;
    id library;
    id captureScope;
    struct unique_ptr<CVAPerfEndTimeProfilerSet, std::__1::default_delete<CVAPerfEndTimeProfilerSet>> profiler;
    _Bool _alreadyInCaptureScope;
};

struct CVAQuaternion {
    double w;
    double x;
    double y;
    double z;
};

struct CVAVector {
    double x;
    double y;
    double z;
};

struct CompositeConfig {
    unsigned int frameNumber;
    unsigned int seedGeneratorFactor;
    int noiseBits;
    float noiseBitsFactor;
    float cubeIntensity;
    float noisePercentToAddAtInfinity;
};

struct DisparityAutofocus;

struct DisparityConversion;

struct DisparityStatistics;

struct DynamicMetaParams {
    float mattingCoeffUpdateRate;
    float mattingCoeffUpdateRateFast;
    float mattingCoeffColorStd;
    float mattingCoeffColorStdFast;
};

struct FaceKitStreamedData {
    NSData *verticesPos;
    NSArray *intrinsics;
    NSArray *camR;
    NSArray *camT;
    NSArray *poseR;
    NSArray *poseT;
    NSData *landmarks;
    float confidence;
};

struct FaceVertex;

struct FocusStateMachine;

struct FocusStatsPostprocessing;

struct GeometricTransformation;

struct Preferences {
    _Bool drawFocusMachineState;
    int overlayShiftOnRendering;
    int displayFrameTime;
    int noiseBits;
    int fNumber_tenths;
    _Bool bypassGPUProcessing;
    _Bool bypassCPUProcessing;
};

struct RetainPtr<__CVBuffer *> {
    void *m_ptr;
};

struct SdofStateMachine;

struct SlideUniforms {
    float center_x;
    float center_y;
};

struct StageLightStateMachine;

struct TC_MatrixUniforms {
    struct float4x4 modelViewProjectionMatrix;
};

struct TransitionData {
    _Bool _inTransition;
};

struct VideoMattingDynamicParams {
    float updateRate;
    float sdofDeltaCanonicalDisparity;
    float alphaCoeffFilterColorStd;
    float alphaGammaExponent;
    float focusCanonicalDisparity;
    float backgroundCanonicalDisparity;
    float thresholdHardness;
    struct array<float, 3> gravity;
    float alphaMatteDeltaCanonicalDisparity;
};

struct VideoMattingStaticParams {
    unsigned int colorWidth;
    unsigned int colorHeight;
    unsigned int shiftWidth;
    unsigned int shiftHeight;
    unsigned int alphaWidth;
    unsigned int alphaHeight;
    int guidedFilterWidth;
    int guidedFilterHeight;
    unsigned int kernelSize;
    float referenceShift;
    float guidedFilterUnconfidentWeight;
    float guidedFilterMinDistToDeweight;
    float alphaMaxLaplacian;
    float alphaContrastExponent;
    float shiftFilterColorStd;
    float shiftFilterUpdateRate;
    float minimumConfidenceToKeepDisparity;
    float maximumSimilarityToKeepDisparity;
    float maxShiftFillingInconsistency;
    float maxShiftFillingDistFromFg;
    unsigned int maxDistToPushShiftEdgesFwd;
    unsigned int maxDistToPushShiftEdgesRev;
    int shiftPushingBgToFgShiftDifference;
    float foregroundMaskDilationRadius;
    float infConvolutionDownsampling;
    float laplacianLimitingDownsampling;
    float laplacianLimitingBlurSize;
};

struct VideoPostprocessingParams {
    _Bool useFaceAsFocus;
    float faceSizeRatioInFocus;
    _Bool fillLargeHolesWithBackground;
    float disparityIntervalInHoleSearch;
    float backgroundFillMarginFromValidDisparity_px;
    _Bool useTemporalRejection;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct a4;

struct a8;

struct aligned_storage<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void>> {
    union dummy_u {
        char data[64];
        struct a8 aligner_;
    } dummy_;
};

struct aligned_storage<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_variance, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void>> {
    union dummy_u {
        char data[72];
        struct a8 aligner_;
    } dummy_;
};

struct aligned_storage<float> {
    union dummy_u {
        char data[4];
        struct a4 aligner_;
    } dummy_;
};

struct aligned_storage<unsigned long> {
    union dummy_u {
        char data[8];
        struct a8 aligner_;
    } dummy_;
};

struct allocator<bool>;

struct array<float, 3> {
    float __elems_[3];
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *_field1;
                    unsigned long long _field2;
                    unsigned long long _field3;
                } _field1;
                struct __short {
                    char _field1[23];
                    struct {
                        unsigned char _field1;
                    } _field2;
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct circular_buffer<bool, std::__1::allocator<bool>> {
    _Bool *m_buff;
    _Bool *m_end;
    _Bool *m_first;
    _Bool *m_last;
    unsigned long long m_size;
    struct allocator<bool> m_alloc;
};

struct float4x4 {
    MISSING_TYPE *columns[4];
};

struct optional<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void>> {
    _Bool m_initialized;
    struct aligned_storage<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void>> m_storage;
};

struct optional<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_variance, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void>> {
    _Bool m_initialized;
    struct aligned_storage<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_variance, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void>> m_storage;
};

struct optional<float> {
    _Bool m_initialized;
    struct aligned_storage<float> m_storage;
};

struct optional<unsigned long> {
    _Bool m_initialized;
    struct aligned_storage<unsigned long> m_storage;
};

struct pair<float, float> {
    float _field1;
    float _field2;
};

struct pair<id<MTLTexture>, id<MTLTexture>> {
    id _field1;
    id _field2;
};

struct unique_ptr<CVAPerfEndTimeProfilerSet, std::__1::default_delete<CVAPerfEndTimeProfilerSet>> {
    struct __compressed_pair<CVAPerfEndTimeProfilerSet *, std::__1::default_delete<CVAPerfEndTimeProfilerSet>> {
        struct CVAPerfEndTimeProfilerSet *__value_;
    } __ptr_;
};

struct unique_ptr<DisparityAutofocus, std::__1::default_delete<DisparityAutofocus>> {
    struct __compressed_pair<DisparityAutofocus *, std::__1::default_delete<DisparityAutofocus>> {
        struct DisparityAutofocus *__value_;
    } __ptr_;
};

struct unique_ptr<DisparityConversion, std::__1::default_delete<DisparityConversion>> {
    struct __compressed_pair<DisparityConversion *, std::__1::default_delete<DisparityConversion>> {
        struct DisparityConversion *__value_;
    } __ptr_;
};

struct unique_ptr<DisparityStatistics, std::__1::default_delete<DisparityStatistics>> {
    struct __compressed_pair<DisparityStatistics *, std::__1::default_delete<DisparityStatistics>> {
        struct DisparityStatistics *__value_;
    } __ptr_;
};

struct unique_ptr<FocusStatsPostprocessing, std::__1::default_delete<FocusStatsPostprocessing>> {
    struct __compressed_pair<FocusStatsPostprocessing *, std::__1::default_delete<FocusStatsPostprocessing>> {
        struct FocusStatsPostprocessing *__value_;
    } __ptr_;
};

struct unique_ptr<GeometricTransformation, std::__1::default_delete<GeometricTransformation>> {
    struct __compressed_pair<GeometricTransformation *, std::__1::default_delete<GeometricTransformation>> {
        struct GeometricTransformation *__value_;
    } __ptr_;
};

struct unique_ptr<SdofStateMachine, std::__1::default_delete<SdofStateMachine>> {
    struct __compressed_pair<SdofStateMachine *, std::__1::default_delete<SdofStateMachine>> {
        struct SdofStateMachine *__value_;
    } __ptr_;
};

struct unique_ptr<StageLightStateMachine, std::__1::default_delete<StageLightStateMachine>> {
    struct __compressed_pair<StageLightStateMachine *, std::__1::default_delete<StageLightStateMachine>> {
        struct StageLightStateMachine *__value_;
    } __ptr_;
};

struct unique_ptr<cva::FocusStateMachine, std::__1::default_delete<cva::FocusStateMachine>> {
    struct __compressed_pair<cva::FocusStateMachine *, std::__1::default_delete<cva::FocusStateMachine>> {
        struct FocusStateMachine *__value_;
    } __ptr_;
};

struct vector<FaceVertex, std::__1::allocator<FaceVertex>> {
    struct FaceVertex *__begin_;
    struct FaceVertex *__end_;
    struct __compressed_pair<FaceVertex *, std::__1::allocator<FaceVertex>> {
        struct FaceVertex *__value_;
    } __end_cap_;
};

struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
};

struct vector<unsigned short, std::__1::allocator<unsigned short>> {
    unsigned short *__begin_;
    unsigned short *__end_;
    struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short>> {
        unsigned short *__value_;
    } __end_cap_;
};

typedef struct {
    unsigned long long width;
    unsigned long long height;
    unsigned long long depth;
} CDStruct_da2e99ad;

// Template types
typedef struct RetainPtr<__CVBuffer *> {
    void *m_ptr;
} RetainPtr_64b82504;

typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *_field1;
                    unsigned long long _field2;
                    unsigned long long _field3;
                } _field1;
                struct __short {
                    char _field1[23];
                    struct {
                        unsigned char _field1;
                    } _field2;
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
} basic_string_7c0a1c0b;

typedef struct optional<float> {
    _Bool m_initialized;
    struct aligned_storage<float> m_storage;
} optional_6c86f56e;

typedef struct pair<float, float> {
    float _field1;
    float _field2;
} pair_879ffb27;

typedef struct pair<id<MTLTexture>, id<MTLTexture>> {
    id _field1;
    id _field2;
} pair_c8ca534a;

typedef struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
} vector_f9ed6fc8;
