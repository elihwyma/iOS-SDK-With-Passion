/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@class MISSING_TYPE, PVInstructionGraphImageSourceNode;

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct ArcCompute {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct AtomicWorkingGamut {
    struct atomic<PCWorkingGamutValue> _field1;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGColorSpace;

struct CGContext;

struct CGDataProvider;

struct CGImage;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CachedImageInfo {
    _Bool cached;
    struct CGSize size;
    _Bool imageExists;
    PVInstructionGraphImageSourceNode *_source;
    struct HGSynchronizable *_lock;
};

struct ColorComponents {
    int _field1;
    double _field2[5];
};

struct ColorHisto {
    struct vector<int, std::__1::allocator<int>> _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct ContextHandle {
    struct shared_ptr<ProGL::Private::ContextImpl> _field1;
};

struct ContextImpl;

struct DepthBufferManager;

struct EdgeFacet {
    struct vector<LiPolygon::PosEdge, std::__1::allocator<LiPolygon::PosEdge>> *_field1;
};

struct Entry;

struct FigTime {
    CDStruct_1b6d18a9 _t;
};

struct FracturedFXPoolItem;

struct FracturedParams {
    _Bool _field1;
    float _field2;
    _Bool _field3;
    int _field4;
    _Bool _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
    float _field9;
    float _field10;
    int _field11;
    float _field12;
    float _field13;
    double _field14[4];
    _Bool _field15;
    double _field16[4];
    float _field17;
    float _field18;
    _Bool _field19;
    float _field20;
    int _field21;
    _Bool _field22;
    float _field23;
    float _field24;
    _Bool _field25;
    float _field26;
    float _field27[2];
    float _field28[2];
};

struct FrameStats {
    unsigned int _field1;
    CDStruct_1b6d18a9 _field2;
    double _field3;
    double _field4;
    double _field5;
    _Bool _field6;
    _Bool _field7;
    unsigned int _field8;
    struct vector<double, std::__1::allocator<double>> _field9;
};

struct FrameStatsDescription;

struct FxBitmapImagePriv {
    id _field1;
    unsigned long long _field2;
    struct CGSize _field3;
    int _field4;
    struct CGColorSpace *_field5;
    struct CGContext *_field6;
    struct CGImage *_field7;
    struct CGDataProvider *_field8;
};

struct FxBitmapPriv {
    void *_field1;
    unsigned long long _field2;
    _Bool _field3;
};

struct FxContextPriv {
    int _field1;
    id _field2;
    union {
        struct {
            struct CGImage *_field1;
        } _field1;
        struct {
            struct CGContext *_field1;
        } _field2;
        struct {
            unsigned long long _field1;
            struct CGSize _field2;
            _Bool _field3;
            struct CGColorSpace *_field4;
        } _field3;
        CDStruct_183fa7cb _field4;
        CDStruct_183fa7cb _field5;
        CDStruct_183fa7cb _field6;
    } _field3;
};

struct FxHeliumImagePriv {
    HGRef_265f9e4c _field1;
};

struct FxHostCapabilitiesPriv {
    id _field1;
    unsigned int _field2;
    id _field3;
    id _field4;
};

struct FxHostPriv {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
};

struct FxImagePriv {
    CDStruct_da8610d8 _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    double _field4;
    double _field5;
    unsigned long long _field6;
    CDUnknownFunctionPointerType _field7;
    void *_field8;
    struct CGRect _field9;
    struct FxRect _field10;
    id _field11;
    struct CGColorSpace *_field12;
    unsigned long long _field13;
    int _field14;
};

struct FxMetaPlugPriv {
    id _field1;
    id _field2;
};

struct FxParameterAnglePriv {
    _Bool _field1;
    double _field2;
    double _field3;
};

struct FxParameterColorPriv {
    _Bool _field1;
};

struct FxParameterGroupPriv {
    id _field1;
};

struct FxParameterListSelectionPriv {
    int _field1;
    id _field2;
};

struct FxParameterPoint2dPriv {
    _Bool _field1;
    _Bool _field2;
};

struct FxParameterPoint3dPriv {
    id _field1;
};

struct FxParameterSliderPriv {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    _Bool _field6;
};

struct FxParameterTextPriv {
    _Bool _field1;
};

struct FxPinPriv {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    int _field7;
    Class _field8;
};

struct FxPlugDescriptorPriv {
    id _field1;
    id _field2;
};

struct FxPlugGroupDescriptorPriv {
    id _field1;
};

struct FxPlugGroupPriv {
    id _field1;
    id _field2;
};

struct FxPlugPriv {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
};

struct FxPoint3D {
    double _field1;
    double _field2;
    double _field3;
};

struct FxRect {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct FxSamplePriv {
    double _field1;
    id _field2;
    id _field3;
    id _field4;
};

struct FxShapePriv {
    struct CGRect _field1;
    _Bool _field2;
};

struct FxStreamPriv {
    id _field1;
};

struct FxTexturePriv {
    unsigned int _field1;
    unsigned int _field2;
    _Bool _field3;
};

struct FxTransformPriv {
    struct CGPoint _field1;
    float _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
};

struct GLRenderer;

struct GraphStats;

struct HFGrabCut;

struct HFGrabCutInterface {
    CDUnknownFunctionPointerType *_field1;
    struct HFGrabCut *_field2;
};

struct HGBitmap {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<unsigned int> _field2;
    int _field3;
    int _field4;
    struct HGRect _field5;
    struct HGRect _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    void *_field11;
    struct HGEdgePolicy _field12;
    struct HGObject *_field13;
};

struct HGBitmapLoader {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<unsigned int> _field2;
    int _field3;
    int _field4;
    void *_field5;
    int _field6;
    int _field7;
    float *_field8;
    int _field9;
    struct HGShaderEntry *_field10;
    struct HGNodeInput **_field11;
    int _field12;
    struct HGBitmap *_field13;
    _Bool _field14;
    _Bool _field15;
    _Bool _field16;
    _Bool _field17;
    _Bool _field18;
    struct set<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *>> _field19;
    int _field20;
    struct HGNode *_field21;
    struct HGRect _field22;
    struct HGRect _field23;
    struct HGRenderer *_field24;
    struct HGBitmap *_field25;
    struct HGNode *_field26;
    int _field27;
    int _field28;
    int _field29;
    struct HGRect _field30;
    int _field31;
    int _field32;
    struct HGBitmap *_field33;
    struct HGShaderBinding _field34;
    struct HGNodeChain *_field35;
    struct HGShaderEntry *_field36;
    int _field37;
    _Bool _field38;
    struct HGBlendingInfo _field39;
    float _field40;
    HGRef_0776e7a8 _field41;
    HGRef_0776e7a8 _field42;
    HGRef_0776e7a8 _field43;
    _Bool _field44;
    _Bool _field45;
    _Bool _field46;
    int _field47;
    struct HGBitmapLoader *_field48;
    struct HGNode *_field49;
    struct HGNode *_field50;
    struct HGNode *_field51;
    struct HGNode *_field52;
    struct HGNode *_field53;
};

struct HGBlendingInfo {
    unsigned long long _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
};

struct HGBufferDumper {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
    int _field4;
    int _field5;
    _Bool _field6;
};

struct HGCVBitmap;

struct HGCVGLTextureFactory {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<unsigned int> _field2;
    HGRef_2925969f _field3;
    struct __CVOpenGLESTextureCache *_field4;
};

struct HGCVPixelBuffer;

struct HGCVPixelBufferPool;

struct HGCache {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    struct HGCacheEntry *_field3;
    struct HGCacheEntry *_field4;
    struct HGCacheEntry *_field5;
    struct _opaque_pthread_mutex_t _field6;
};

struct HGCacheEntry;

struct HGComputeDevice;

struct HGDotGraph {
    struct map<unsigned long, HGDotGraph::Node, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, HGDotGraph::Node>>> _field1;
    struct map<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge, std::__1::less<std::__1::tuple<unsigned long, unsigned long>>, std::__1::allocator<std::__1::pair<const std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge>>> _field2;
    struct __sFILE *_field3;
    _Bool _field4;
    _Bool _field5;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field6;
};

struct HGEdgePolicy {
    int _field1;
    float _field2[4];
};

struct HGEquirectProjectParams {
    float _field1[3];
    float _field2[3];
    float _field3[3];
    float _field4;
    float _field5;
    _Bool _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    int _field13;
    int _field14;
    int _field15;
    int _field16;
    _Bool _field17;
    _Bool _field18;
    float _field19[4];
    float _field20[4];
    float _field21[4];
    float _field22[4];
};

struct HGExecutionData;

struct HGExecutionUnit;

struct HGGLBlend;

struct HGGLContext;

struct HGGLTexture;

struct HGLUTCacheManager;

struct HGLimits;

struct HGLimitsCache;

struct HGMetalTexture;

struct HGNode {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<unsigned int> _field2;
    int _field3;
    int _field4;
    void *_field5;
    int _field6;
    int _field7;
    float *_field8;
    int _field9;
    struct HGShaderEntry *_field10;
    struct HGNodeInput **_field11;
    int _field12;
    struct HGBitmap *_field13;
    _Bool _field14;
    _Bool _field15;
    _Bool _field16;
    _Bool _field17;
    _Bool _field18;
    struct set<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *>> _field19;
    int _field20;
    struct HGNode *_field21;
    struct HGRect _field22;
    struct HGRect _field23;
    struct HGRenderer *_field24;
    struct HGBitmap *_field25;
    struct HGNode *_field26;
    int _field27;
    int _field28;
    int _field29;
    struct HGRect _field30;
    int _field31;
    int _field32;
    struct HGBitmap *_field33;
    struct HGShaderBinding _field34;
    struct HGNodeChain *_field35;
    struct HGShaderEntry *_field36;
    int _field37;
    _Bool _field38;
    struct HGBlendingInfo _field39;
    float _field40;
};

struct HGNodeChain;

struct HGNodeInput;

struct HGObject;

struct HGRect {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct HGRef<HGBitmap> {
    struct HGBitmap *m_Obj;
};

struct HGRef<HGCVBitmap> {
    struct HGCVBitmap *m_Obj;
};

struct HGRef<HGCVPixelBuffer> {
    struct HGCVPixelBuffer *m_Obj;
};

struct HGRef<HGCVPixelBufferPool> {
    struct HGCVPixelBufferPool *m_Obj;
};

struct HGRef<HGGLBlend> {
    struct HGGLBlend *_field1;
};

struct HGRef<HGGLContext> {
    struct HGGLContext *_field1;
};

struct HGRef<HGGLTexture> {
    struct HGGLTexture *m_Obj;
};

struct HGRef<HGMetalTexture> {
    struct HGMetalTexture *_field1;
};

struct HGRef<HGNode> {
    struct HGNode *m_Obj;
};

struct HGRef<HGRenderJob> {
    struct HGRenderJob *m_Obj;
};

struct HGRef<HGRenderQueue> {
    struct HGRenderQueue *m_Obj;
};

struct HGRef<HGRenderer> {
    struct HGRenderer *_field1;
};

struct HGRef<HGXForm> {
    struct HGXForm *_field1;
};

struct HGRef<HStyleTransfer> {
    struct HStyleTransfer *m_Obj;
};

struct HGRef<PVCVPixelBufferPool>;

struct HGRef<PVInstructionGraphContext> {
    struct PVInstructionGraphContext *m_Obj;
};

struct HGRef<PVRenderJob> {
    struct PVRenderJob *_field1;
};

struct HGRef<PVRenderLinkJob> {
    struct PVRenderLinkJob *_field1;
};

struct HGRef<PVRenderManager> {
    struct PVRenderManager *m_Obj;
};

struct HGRenderContext {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<unsigned int> _field2;
    struct shared_ptr<const HGComputeDevice> _field3;
    int _field4;
    int _field5;
    int _field6;
    struct HGRenderQueue *_field7;
    struct HGSynchronizable *_field8;
    struct HGSynchronizer *_field9;
    struct HGRenderer *_field10;
    int _field11;
    int _field12;
    int _field13;
    _Bool _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    struct vector<float, std::__1::allocator<float>> _field17;
};

struct HGRenderJob;

struct HGRenderQueue;

struct HGRenderer {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<unsigned int> _field2;
    struct HGNode *_field3;
    struct HGBitmap *_field4;
    struct HGRendererTextureUnit _field5[8];
    struct vector<DepthBufferManager *, std::__1::allocator<DepthBufferManager *>> _field6;
    struct vector<HGExecutionUnit *, std::__1::allocator<HGExecutionUnit *>> _field7;
    struct HGExecutionData *_field8;
    struct HGSyncData *_field9;
    struct _opaque_pthread_rwlock_t _field10;
    struct _opaque_pthread_mutex_t _field11;
    struct HGLUTCacheManager *_field12;
    struct GraphStats *_field13;
    struct RendererStats *_field14;
    int _field15;
    int _field16;
    int _field17;
    int _field18;
    int _field19;
    int _field20;
    int _field21;
    int _field22;
    int _field23;
    int _field24;
    int _field25;
    int _field26;
    int _field27;
    int _field28;
    int _field29;
    int _field30;
    int _field31;
    int _field32;
    int _field33;
    int _field34;
    int _field35;
    int _field36;
    int _field37;
    int _field38;
    int _field39;
    int _field40;
    int _field41;
    int _field42;
    int _field43;
    int _field44;
    int _field45;
    struct HGCache _field46;
    _Bool _field47;
    _Bool _field48;
    _Bool _field49;
    unsigned int _field50;
    struct HGLimits *_field51[2];
    int _field52;
    struct HGDotGraph _field53;
    struct HGBufferDumper _field54;
    unsigned int _field55;
    int _field56;
    unsigned long long _field57;
    unsigned long long _field58;
    int _field59;
    struct HGLimitsCache *_field60;
    struct HGRenderQueue *_field61;
    void *_field62;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field63;
};

struct HGRendererTextureUnit {
    struct HGBitmap *_field1;
    struct HGTransform *_field2;
    int _field3;
};

struct HGShaderBinding {
    int _field1[1];
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    unsigned int _field7;
    unsigned int _field8;
};

struct HGShaderEntry;

struct HGSyncData;

struct HGSynchronizable {
    CDUnknownFunctionPointerType *_field1;
    struct _opaque_pthread_mutex_t _field2;
    struct _opaque_pthread_t *_field3;
    unsigned long long _field4;
    struct _opaque_pthread_cond_t {
        long long _field1;
        char _field2[40];
    } _field5;
};

struct HGSynchronizer;

struct HGTransform;

struct HGXForm;

struct HStyleTransfer;

struct IPImage {
    struct CGRect fullRect;
    struct CGRect imageRect;
    float xScale;
    float yScale;
    unsigned int textureID;
    unsigned int textureTarget;
    unsigned int textureInternalFormat;
    unsigned int textureFormat;
    unsigned int textureType;
    unsigned int textureUnit;
    unsigned int drawFBO;
};

struct LiAgent {
    struct LiAgent *_field1;
    struct LiImageSource *_field2;
    struct LiImageSource *_field3;
    struct LiImageSource *_field4;
    int _field5;
    int _field6;
    int _field7;
    _Bool _field8;
    struct LiRenderParameters *_field9;
    _Bool _field10;
    PCRect_54d5786f _field11;
    _Bool _field12;
    PCRect_54d5786f _field13;
    struct LiClipSet _field14;
    struct LiClipSet *_field15;
    struct LiClipSet *_field16;
    PCMatrix44Tmpl_93ed1289 *_field17;
    PCMatrix44Tmpl_93ed1289 *_field18;
    PCMatrix44Tmpl_93ed1289 *_field19;
    PCMatrix44Tmpl_93ed1289 *_field20;
    PCMatrix44Tmpl_93ed1289 *_field21;
    PCMatrix44Tmpl_93ed1289 *_field22;
    PCMatrix44Tmpl_93ed1289 *_field23;
    PCMatrix44Tmpl_93ed1289 *_field24;
    PCMatrix44Tmpl_93ed1289 *_field25;
    PCMatrix44Tmpl_93ed1289 *_field26;
    PCMatrix44Tmpl_93ed1289 *_field27;
    _Bool _field28;
    HGRef_265f9e4c _field29;
    struct LiImagePolygon _field30;
    _Bool _field31;
    PCVector2_79a470e1 _field32;
    struct LiAgentData *_field33;
    struct PCColorSpaceHandle _field34;
    struct PCColorSpaceHandle _field35;
};

struct LiAgentData;

struct LiCamera;

struct LiChannelT<PCVector3<double>> {
    struct vector<PCVector3<double>, std::__1::allocator<PCVector3<double>>> _field1;
};

struct LiClipSet {
    struct PCArray<PCVector4<double>, PCArray_Traits<PCVector4<double>>> _field1;
    struct PCArray<int, PCArray_Traits<int>> _field2;
};

struct LiImagePolygon {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    struct PCPlane<double> _field3;
    struct vector<LiPolygon::PosEdge, std::__1::allocator<LiPolygon::PosEdge>> _field4;
    struct PosFacet _field5;
    _Bool _field6;
    struct LiChannelT<PCVector3<double>> _field7;
    struct LiChannelT<PCVector3<double>> _field8;
    struct EdgeFacet _field9;
};

struct LiImageSource;

struct LiLight;

struct LiLightSet {
    struct PCArray<LiLight, PCArray_Traits<LiLight>> _field1;
    _Bool _field2;
};

struct LiRenderParameters;

struct LiRenderingTechnology {
    unsigned int _field1;
    int _field2;
    int _field3;
    int _field4;
    _Bool _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
    _Bool _field9;
    int _field10;
    int _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    int _field15;
    int _field16;
    _Bool _field17;
};

struct METimeRemap {
    struct FigTime _introDuration;
    struct FigTime _outroDuration;
    struct FigTime _scaleableDuration;
    _Bool _isIntroOptional;
    _Bool _isOutroOptional;
    _Bool _isStartTimeAligned;
    _Bool _isEndTimeAligned;
    _Bool _isLoop;
    _Bool _forceDisableLoop;
    _Bool _forceDisableBuildAnimation;
    struct OZChannelBool *_pBuildInEnableChan;
    struct OZChannelBool *_pBuildOutEnableChan;
};

struct Mat4f {
    struct Vec4f _field1[4];
};

struct NSDictionary {
    Class _field1;
};

struct NSMutableDictionary {
    Class _field1;
};

struct OMEdge;

struct OMSamples {
    CDUnknownFunctionPointerType *_field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    int _field6;
    struct vector<OMSamplesElem *, std::__1::allocator<OMSamplesElem *>> *_field7;
    vector_ff5abfb7 _field8;
    vector_ff5abfb7 _field9;
    vector_ff5abfb7 _field10;
    struct vector<std::__1::vector<Vec3f, std::__1::allocator<Vec3f>>, std::__1::allocator<std::__1::vector<Vec3f, std::__1::allocator<Vec3f>>>> _field11;
    struct vector<OMEdge, std::__1::allocator<OMEdge>> _field12;
};

struct OMSamplesElem {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    _Bool _field3;
    int _field4;
    struct vector<Vec2f, std::__1::allocator<Vec2f>> _field5;
    vector_ff5abfb7 _field6;
    _Bool _field7;
};

struct OMSpline {
    struct vector<OMVertex, std::__1::allocator<OMVertex>> _field1;
    int _field2;
    float _field3;
    _Bool _field4;
    _Bool _field5;
};

struct OMUtilErf {
    struct vector<float, std::__1::allocator<float>> _field1;
};

struct OMVertex;

struct OZCanvasState;

struct OZChanElementOrFootageRef {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct OZChannelImpl *_field15;
    struct OZChannelImpl *_field16;
    struct OZChannelInfo *_field17;
    struct OZChannelInfo *_field18;
    struct OZCurve *_field19;
    _Bool _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
};

struct OZChanFootageRef {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct OZChannelImpl *_field15;
    struct OZChannelImpl *_field16;
    struct OZChannelInfo *_field17;
    struct OZChannelInfo *_field18;
    struct OZCurve *_field19;
    _Bool _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    _Bool _field26;
};

struct OZChanRotoshapeRef {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct OZChannelImpl *_field15;
    struct OZChannelImpl *_field16;
    struct OZChannelInfo *_field17;
    struct OZChannelInfo *_field18;
    struct OZCurve *_field19;
    _Bool _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
};

struct OZChannel3D {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
    _Bool _field18;
    struct OZChannelDouble _field19;
    struct OZChannelDouble _field20;
    struct OZChannelDouble _field21;
};

struct OZChannelAngle {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct OZChannelImpl *_field15;
    struct OZChannelImpl *_field16;
    struct OZChannelInfo *_field17;
    struct OZChannelInfo *_field18;
    struct OZCurve *_field19;
};

struct OZChannelAspectRatioFootage {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct OZChannelImpl *_field15;
    struct OZChannelImpl *_field16;
    struct OZChannelInfo *_field17;
    struct OZChannelInfo *_field18;
    struct OZCurve *_field19;
};

struct OZChannelBase {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
};

struct OZChannelBlendMode {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct OZChannelImpl *_field15;
    struct OZChannelImpl *_field16;
    struct OZChannelInfo *_field17;
    struct OZChannelInfo *_field18;
    struct OZCurve *_field19;
    struct __map_iterator<std::__1::__tree_iterator<std::__1::__value_type<PCString, std::__1::vector<PCString, std::__1::allocator<PCString>>>, std::__1::__tree_node<std::__1::__value_type<PCString, std::__1::vector<PCString, std::__1::allocator<PCString>>>, void *>*, long>> _field20;
    struct PCString _field21;
    struct vector<int, std::__1::allocator<int>> _field22;
    unsigned int _field23;
    struct PCString _field24;
    struct vector<PCString, std::__1::allocator<PCString>> _field25;
};

struct OZChannelBlindData;

struct OZChannelBool {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct OZChannelImpl *_field15;
    struct OZChannelImpl *_field16;
    struct OZChannelInfo *_field17;
    struct OZChannelInfo *_field18;
    struct OZCurve *_field19;
};

struct OZChannelButton {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct OZChannelImpl *_field15;
    struct OZChannelImpl *_field16;
    struct OZChannelInfo *_field17;
    struct OZChannelInfo *_field18;
    struct OZCurve *_field19;
    CDUnknownFunctionPointerType _field20;
    struct PCString _field21;
    void *_field22;
    struct PCString _field23;
};

struct OZChannelColor {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
    _Bool _field18;
    struct OZChannelDouble _field19;
    struct OZChannelDouble _field20;
    struct OZChannelDouble _field21;
    struct OZChannelDouble _field22;
    struct OZChannelEnum _field23;
    struct OZChannelDouble _field24;
};

struct OZChannelColorNoAlpha {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
    _Bool _field18;
    struct OZChannelDouble _field19;
    struct OZChannelDouble _field20;
    struct OZChannelDouble _field21;
    struct OZChannelDouble _field22;
    struct OZChannelEnum _field23;
};

struct OZChannelCrop {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
    _Bool _field18;
    struct OZChannelDouble _field19;
    struct OZChannelDouble _field20;
    struct OZChannelDouble _field21;
    struct OZChannelDouble _field22;
};

struct OZChannelDouble {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct OZChannelImpl *_field15;
    struct OZChannelImpl *_field16;
    struct OZChannelInfo *_field17;
    struct OZChannelInfo *_field18;
    struct OZCurve *_field19;
};

struct OZChannelEnum {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct OZChannelImpl *_field15;
    struct OZChannelImpl *_field16;
    struct OZChannelInfo *_field17;
    struct OZChannelInfo *_field18;
    struct OZCurve *_field19;
    struct __map_iterator<std::__1::__tree_iterator<std::__1::__value_type<PCString, std::__1::vector<PCString, std::__1::allocator<PCString>>>, std::__1::__tree_node<std::__1::__value_type<PCString, std::__1::vector<PCString, std::__1::allocator<PCString>>>, void *>*, long>> _field20;
    struct PCString _field21;
    struct vector<int, std::__1::allocator<int>> _field22;
    unsigned int _field23;
    struct PCString _field24;
    struct vector<PCString, std::__1::allocator<PCString>> _field25;
};

struct OZChannelEnumInterpMode {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct OZChannelImpl *_field15;
    struct OZChannelImpl *_field16;
    struct OZChannelInfo *_field17;
    struct OZChannelInfo *_field18;
    struct OZCurve *_field19;
    struct __map_iterator<std::__1::__tree_iterator<std::__1::__value_type<PCString, std::__1::vector<PCString, std::__1::allocator<PCString>>>, std::__1::__tree_node<std::__1::__value_type<PCString, std::__1::vector<PCString, std::__1::allocator<PCString>>>, void *>*, long>> _field20;
    struct PCString _field21;
    struct vector<int, std::__1::allocator<int>> _field22;
    unsigned int _field23;
    struct PCString _field24;
    struct vector<PCString, std::__1::allocator<PCString>> _field25;
};

struct OZChannelFolder {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
};

struct OZChannelGammaFootage {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct OZChannelImpl *_field15;
    struct OZChannelImpl *_field16;
    struct OZChannelInfo *_field17;
    struct OZChannelInfo *_field18;
    struct OZCurve *_field19;
};

struct OZChannelImpl;

struct OZChannelInfo;

struct OZChannelObjectRoot {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
    struct FigTime _field18;
    struct PCTimeRange _field19;
    _Bool _field20;
    _Bool _field21;
    struct OZObjectManipulator *_field22;
    struct OZTimeMarkerSet *_field23;
    struct list<OZSimulationBehavior *, std::__1::allocator<OZSimulationBehavior *>> _field24;
    struct PCString _field25;
};

struct OZChannelPercent {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct OZChannelImpl *_field15;
    struct OZChannelImpl *_field16;
    struct OZChannelInfo *_field17;
    struct OZChannelInfo *_field18;
    struct OZCurve *_field19;
};

struct OZChannelPosition {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
    _Bool _field18;
    struct OZChannelDouble _field19;
    struct OZChannelDouble _field20;
    _Bool _field21;
    PCMatrix44Tmpl_93ed1289 _field22;
    struct vector<double, std::__1::allocator<double>> _field23;
    struct vector<double, std::__1::allocator<double>> _field24;
    struct vector<double, std::__1::allocator<double>> _field25;
    struct vector<double, std::__1::allocator<double>> _field26;
    struct vector<double, std::__1::allocator<double>> _field27;
    unsigned int _field28;
    struct PCSpinLock _field29;
};

struct OZChannelPosition3D {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
    _Bool _field18;
    struct OZChannelDouble _field19;
    struct OZChannelDouble _field20;
    _Bool _field21;
    PCMatrix44Tmpl_93ed1289 _field22;
    struct vector<double, std::__1::allocator<double>> _field23;
    struct vector<double, std::__1::allocator<double>> _field24;
    struct vector<double, std::__1::allocator<double>> _field25;
    struct vector<double, std::__1::allocator<double>> _field26;
    struct vector<double, std::__1::allocator<double>> _field27;
    unsigned int _field28;
    struct PCSpinLock _field29;
    struct vector<double, std::__1::allocator<double>> _field30;
    _Bool _field31;
    _Bool _field32;
    struct OZChannelDouble _field33;
};

struct OZChannelQuad {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
    _Bool _field18;
    struct OZChannelPosition _field19;
    struct OZChannelPosition _field20;
    struct OZChannelPosition _field21;
    struct OZChannelPosition _field22;
};

struct OZChannelRef;

struct OZChannelRotation3D {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
    _Bool _field18;
    struct OZChannelAngle _field19;
    struct OZChannelAngle _field20;
    struct OZChannelAngle _field21;
    struct OZChannelEnumInterpMode _field22;
    struct PCSpinLock _field23;
};

struct OZChannelScale3D {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
    _Bool _field18;
    struct OZChannelDouble _field19;
    struct OZChannelDouble _field20;
    struct OZChannelDouble _field21;
};

struct OZChannelSceneNode {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
    struct FigTime _field18;
    struct PCTimeRange _field19;
    _Bool _field20;
    _Bool _field21;
    struct OZObjectManipulator *_field22;
    struct OZTimeMarkerSet *_field23;
    struct list<OZSimulationBehavior *, std::__1::allocator<OZSimulationBehavior *>> _field24;
    struct PCString _field25;
    struct OZSceneNode *_field26;
};

struct OZChannelSeed {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct OZChannelImpl *_field15;
    struct OZChannelImpl *_field16;
    struct OZChannelInfo *_field17;
    struct OZChannelInfo *_field18;
    struct OZCurve *_field19;
};

struct OZChannelShear {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
    _Bool _field18;
    struct OZChannelShearAngle _field19;
    struct OZChannelShearAngle _field20;
};

struct OZChannelShearAngle {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct OZChannelImpl *_field15;
    struct OZChannelImpl *_field16;
    struct OZChannelInfo *_field17;
    struct OZChannelInfo *_field18;
    struct OZCurve *_field19;
};

struct OZChannelTimeConverter;

struct OZChannelUint32 {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct OZChannelImpl *_field15;
    struct OZChannelImpl *_field16;
    struct OZChannelInfo *_field17;
    struct OZChannelInfo *_field18;
    struct OZCurve *_field19;
};

struct OZChannelVaryingFolder {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
};

struct OZCurve;

struct OZDocument {
    CDUnknownFunctionPointerType *_field1;
    CDUnknownFunctionPointerType *_field2;
    struct PCSafeHandle *_field3;
    struct OZScene *_field4;
    struct PCString _field5;
    struct list<OZObjectSelections *, std::__1::allocator<OZObjectSelections *>> _field6;
    struct vector<OZChannelRef, std::__1::allocator<OZChannelRef>> _field7;
    struct PCString _field8;
    unsigned int _field9;
    _Bool _field10;
    _Bool _field11;
    unsigned int _field12;
    _Bool _field13;
    int _field14;
    struct PCString _field15;
    struct PCString _field16;
    unsigned int _field17;
    unsigned long long _field18;
    _Bool _field19;
    struct OZNotificationManager *_field20;
    id _field21;
    _Bool _field22;
    struct OZViewerState *_field23[4];
    struct OZCanvasState *_field24;
    struct OZProjectPanelState *_field25;
    struct OZTimelineState *_field26;
    struct OZInspectorState *_field27;
    _Bool _field28;
    unsigned int _field29;
    unsigned int _field30;
    struct PCString _field31;
    _Bool _field32;
    struct OZRigWidget *_field33;
    struct vector<OZChannelRef, std::__1::allocator<OZChannelRef>> _field34;
    int _field35;
    _Bool _field36;
};

struct OZElement;

struct OZExportSettings {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    _Bool _field8;
    int _field9;
    int _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
};

struct OZFactory;

struct OZFolderElementShadows {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
    struct OZChannelBool _field18;
    struct OZChannelBool _field19;
    struct OZChannelBool _field20;
};

struct OZFolderMaterialProperties {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
    struct OZChannelDouble _field18;
};

struct OZFootage {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    struct PCSafeHandle *_field4;
    struct PCHash128 _field5;
    CDUnknownFunctionPointerType *_field6;
    struct OZChannelSceneNode _field7;
    struct OZChannelFolder _field8;
    struct OZChannelFolder _field9;
    struct OZChannelFolder _field10;
    struct OZChannelFolder _field11;
    struct OZChannelFolder _field12;
    struct OZSceneNode *_field13;
    struct OZScene *_field14;
    struct list<OZEffect *, std::__1::allocator<OZEffect *>> _field15;
    struct list<OZBehavior *, std::__1::allocator<OZBehavior *>> _field16;
    unsigned int _field17;
    double _field18;
    struct PCHash128 _field19;
    vector_f672cb0f _field20;
    struct __list_iterator<OZSceneNode *, void *> _field21;
    unsigned int _field22;
    CDUnknownFunctionPointerType *_field23;
    struct PCHash128 _field24;
    struct OZChannelFolder _field25;
    struct OZChannelEnum _field26;
    struct OZChannelColorNoAlpha _field27;
    struct OZChannelBool _field28;
    struct OZChannelAspectRatioFootage _field29;
    struct OZChannelEnum _field30;
    struct OZChannelEnum _field31;
    struct OZChannelDouble _field32;
    struct OZChannelEnum _field33;
    struct OZChannelBool _field34;
    struct OZChannelBool _field35;
    struct OZChannelUint32 _field36;
    struct OZChannelUint32 _field37;
    struct OZChannelBool _field38;
    struct OZChannelColorNoAlpha _field39;
    struct OZChannelCrop _field40;
    struct OZChannelFolder _field41;
    struct OZChannelFolder _field42;
    struct OZChannelButton _field43;
    struct OZChannelFolder _field44;
    struct OZChannelDouble _field45;
    struct OZChannelDouble _field46;
    struct OZChannelDouble _field47;
    struct OZChannelDouble _field48;
    struct OZChannelDouble _field49;
    struct OZChannelGammaFootage _field50;
    struct OZChannelBool _field51;
    struct PMClip *_field52;
    unsigned int _field53;
    struct PCSharedMutex _field54;
    struct PCMutex _field55;
    struct OZSimpleCacheArray _field56;
    struct FigTime _field57;
    _Bool _field58;
    struct PCString _field59;
    _Bool _field60;
    _Bool _field61;
    struct PCURL *_field62;
    struct PCURL *_field63;
    _Bool _field64;
    _Bool _field65;
    struct PCString _field66;
    int _field67;
    int _field68;
    double _field69;
    _Bool _field70;
    _Bool _field71;
    _Bool _field72;
    _Bool _field73;
    shared_ptr_1a5c5a10 _field74;
    double _field75;
    double _field76;
    _Bool _field77;
    struct shared_ptr<PGTexture> _field78;
    double _field79;
    shared_ptr_1a5c5a10 _field80;
    _Bool _field81;
    int _field82;
    _Bool _field83;
    _Bool _field84;
    _Bool _field85;
    int _field86;
    _Bool _field87;
    unsigned int _field88;
    unsigned int _field89;
    PCRect_3a266109 _field90;
};

struct OZFxPlugRenderContextManager {
    CDUnknownFunctionPointerType *_vptr$OZFxPlugRenderContextManager;
    struct PCColorSpaceHandle _workingColorSpace;
    float _blendingGamma;
    struct map<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *>>>, std::__1::less<_opaque_pthread_t *>, std::__1::allocator<std::__1::pair<_opaque_pthread_t *const, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *>>>>>> _contexts;
    struct PCSpinLock _contextLock;
};

struct OZFxPlugSharedBase {
    CDUnknownFunctionPointerType *_field1;
    void *_field2;
    id _field3;
    id _field4;
    void *_field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    id _field13;
    id _field14;
    id _field15;
    id _field16;
    id _field17;
    id _field18;
    id _field19;
    struct PCString _field20;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    _Bool _field26;
    _Bool _field27;
    int _field28;
    _Bool _field29;
    _Bool _field30;
    _Bool _field31;
    _Bool _field32;
    _Bool _field33;
    struct OZChannelBase *_field34;
    _Bool _field35;
    id _field36;
    _Bool _field37;
    _Bool _field38;
    unsigned long long _field39;
    _Bool _field40;
    struct PCMutex _field41;
    unsigned int _field42;
};

struct OZGroup;

struct OZGuideSet {
    CDUnknownFunctionPointerType *_field1;
    struct __tree<OZGuide, std::__1::less<OZGuide>, std::__1::allocator<OZGuide>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<OZGuide, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::less<OZGuide>> {
            unsigned long long _field1;
        } _field3;
    } _field2;
};

struct OZInspectorState;

struct OZLightingFolder {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
    struct OZChannelEnum _field18;
    struct OZChannelBool _field19;
    struct OZChannelDouble _field20;
    struct OZFolderMaterialProperties _field21;
};

struct OZLockingGroup;

struct OZNodeMap {
    struct PCSpinLock _field1;
    struct unordered_map<unsigned int, OZObjectManipulator *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, OZObjectManipulator *>>> _field2;
    unsigned int _field3;
    struct OZObjectManipulator *_field4;
};

struct OZNotificationManager;

struct OZObjectManipulator;

struct OZPlaybackEngine {
    int _field1;
    int _field2;
};

struct OZProcessControl {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<bool> _field2;
    struct PCSemaphore *_field3;
    struct PCMutex *_field4;
    long long _field5;
    CDUnknownFunctionPointerType _field6;
    struct HGRenderer *_field7;
};

struct OZProjectPanelState;

struct OZPublishSettings {
    CDUnknownFunctionPointerType *_field1;
    struct vector<OZPublishSettings::Entry *, std::__1::allocator<OZPublishSettings::Entry *>> _field2;
    struct OZChannelVaryingFolder _field3;
    struct OZScene *_field4;
    _Bool _field5;
    _Bool _field6;
    struct map<unsigned int, double, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, double>>> _field7;
};

struct OZRenderManager;

struct OZRenderNode;

struct OZRenderParams {
    struct OZRenderState _field1;
    _Bool _field2;
    struct OZProcessControl *_field3;
    struct GLRenderer *_field4;
    struct shared_ptr<const HGComputeDevice> _field5;
    struct shared_ptr<const HGComputeDevice> _field6;
    struct PCImageAttributes _field7;
    struct PCHash128 _field8;
    struct PCHash128 _field9;
    _Bool _field10;
    PCVector2_5d498db0 _field11;
    PCVector2_5d498db0 _field12;
    int _field13;
    int _field14;
    int _field15;
    int _field16;
    _Bool _field17;
    _Bool _field18;
    _Bool _field19;
    _Bool _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    int _field26;
    _Bool _field27;
    unsigned int _field28;
    double _field29;
    _Bool _field30;
    _Bool _field31;
    _Bool _field32;
    _Bool _field33;
    _Bool _field34;
    _Bool _field35;
    struct PCColor _field36;
    int _field37;
    _Bool _field38;
    PCRect_3a266109 _field39;
    PCRect_3a266109 _field40;
    PCRect_54d5786f _field41;
    PCRect_3a266109 _field42;
    _Bool _field43;
    int _field44;
    struct CGColorSpace *_field45;
    float _field46;
    struct PCColorSpaceHandle _field47;
    int _field48;
    struct PCColorSpaceHandle _field49;
    PCMatrix44Tmpl_93ed1289 _field50;
    _Bool _field51;
    struct OZPlaybackEngine _field52;
    id _field53;
    id _field54;
    struct FigTime _field55;
    map_184f33b3 *_field56;
    struct map<unsigned int, PCRect<double>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PCRect<double>>>> _field57;
    struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> _field58;
    struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> _field59;
    double _field60;
    id _field61;
    struct FigTime _field62;
    struct FigTime _field63;
    struct FigTime _field64;
    struct FigTime _field65;
    struct FigTime _field66;
    _Bool _field67;
    _Bool _field68;
    _Bool _field69;
    _Bool _field70;
    struct shared_ptr<PCImage> _field71;
    _Bool _field72;
    _Bool _field73;
    struct PCPtr<OZRenderParams::SharedInfo> _field74;
    double _field75;
    double _field76;
    _Bool _field77;
    struct PCPtr<LiCamera> _field78;
    struct PCPtr<LiCamera> _field79;
    _Bool _field80;
    _Bool _field81;
    struct LiRenderingTechnology _field82;
    struct LiLightSet _field83;
    _Bool _field84;
    struct HGRef<HGCVBitmap> _field85;
    _Bool _field86;
    _Bool _field87;
    _Bool _field88;
};

struct OZRenderState {
    struct FigTime _field1;
    double _field2;
    double _field3;
    double _field4;
    unsigned int _field5;
    struct OZTransformNode *_field6;
    _Bool _field7;
    PCMatrix44Tmpl_93ed1289 _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    struct OZRenderNode *_field15;
    int _field16;
    _Bool _field17;
    struct OZElement *_field18;
    _Bool _field19;
    _Bool _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    _Bool _field26;
    _Bool _field27;
    _Bool _field28;
    _Bool _field29;
    int _field30;
    struct TransformSet _field31;
    struct set<OZElement *, std::__1::less<OZElement *>, std::__1::allocator<OZElement *>> *_field32;
};

struct OZRig {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    struct PCSafeHandle *_field4;
    struct PCHash128 _field5;
    CDUnknownFunctionPointerType *_field6;
    struct OZChannelSceneNode _field7;
    struct OZChannelFolder _field8;
    struct OZChannelFolder _field9;
    struct OZChannelFolder _field10;
    struct OZChannelFolder _field11;
    struct OZChannelFolder _field12;
    struct OZSceneNode *_field13;
    struct OZScene *_field14;
    struct list<OZEffect *, std::__1::allocator<OZEffect *>> _field15;
    struct list<OZBehavior *, std::__1::allocator<OZBehavior *>> _field16;
    unsigned int _field17;
    double _field18;
    struct PCHash128 _field19;
    vector_f672cb0f _field20;
    struct __list_iterator<OZSceneNode *, void *> _field21;
    unsigned int _field22;
    struct OZChannelFolder _field23;
    struct list<OZSceneNode *, std::__1::allocator<OZSceneNode *>> _field24;
    unsigned int _field25;
    _Bool _field26;
    _Bool _field27;
    unsigned int _field28;
};

struct OZRigWidget;

struct OZScene {
    CDUnknownFunctionPointerType *_field1;
    CDUnknownFunctionPointerType *_field2;
    struct PCHash128 _field3;
    int _field4;
    struct PCSharedMutex _field5;
    struct OZSceneSettings _field6;
    struct OZExportSettings _field7;
    struct OZPublishSettings _field8;
    struct OZChannelObjectRoot _field9;
    struct FigTime _field10;
    struct list<OZSceneNode *, std::__1::allocator<OZSceneNode *>> _field11;
    struct OZSceneNode *_field12;
    struct OZGroup *_field13;
    struct set<OZElement *, std::__1::less<OZElement *>, std::__1::allocator<OZElement *>> _field14;
    struct map<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int>>*, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int>>*>>> _field15;
    struct OZNodeMap _field16;
    struct PCTimeRange _field17;
    struct PCTimeRange _field18;
    struct PCTimeRange _field19;
    unsigned int _field20;
    _Bool _field21;
    struct OZRenderManager *_field22;
    struct OZGuideSet _field23;
    unsigned int _field24;
    unsigned int _field25;
    struct vector<OZObjectManipulator *, std::__1::allocator<OZObjectManipulator *>> _field26;
    _Bool _field27;
    _Bool _field28;
    _Bool _field29;
    _Bool _field30;
    struct OZDocument *_field31;
    unsigned int _field32;
    struct PCHash128 _field33;
    struct PCMutex _field34;
    struct map<PCHash128, PCMutexRef, std::__1::less<PCHash128>, std::__1::allocator<std::__1::pair<const PCHash128, PCMutexRef>>> _field35;
    struct PCSpinLock _field36;
    struct list<OZCPPObserver *, std::__1::allocator<OZCPPObserver *>> _field37;
    struct set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int>> _field38;
    _Bool _field39;
    int _field40;
    _Bool _field41;
    struct atomic<bool> _field42;
    int _field43;
    struct vector<OZLockingGroup *, std::__1::allocator<OZLockingGroup *>> _field44;
    struct atomic<bool> _field45;
    _Bool _field46;
    struct PCRenderModel _field47;
    _Bool _field48;
    _Bool _field49;
};

struct OZSceneNode {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    struct PCSafeHandle *_field4;
    struct PCHash128 _field5;
    CDUnknownFunctionPointerType *_field6;
    struct OZChannelSceneNode _field7;
    struct OZChannelFolder _field8;
    struct OZChannelFolder _field9;
    struct OZChannelFolder _field10;
    struct OZChannelFolder _field11;
    struct OZChannelFolder _field12;
    struct OZSceneNode *_field13;
    struct OZScene *_field14;
    struct list<OZEffect *, std::__1::allocator<OZEffect *>> _field15;
    struct list<OZBehavior *, std::__1::allocator<OZBehavior *>> _field16;
    unsigned int _field17;
    double _field18;
    struct PCHash128 _field19;
    vector_f672cb0f _field20;
    struct __list_iterator<OZSceneNode *, void *> _field21;
    unsigned int _field22;
};

struct OZSceneSettings {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    unsigned int _field4;
    _Bool _field5;
    unsigned int _field6;
    double _field7;
    _Bool _field8;
    double _field9;
    struct AtomicWorkingGamut _field10;
    int _field11;
    int _field12;
    struct PCColor _field13;
    int _field14;
    _Bool _field15;
    unsigned int _field16;
    unsigned int _field17;
    double _field18;
    _Bool _field19;
    _Bool _field20;
    double _field21;
    int _field22;
    struct PCString _field23;
    unsigned int _field24;
    unsigned int _field25;
    double _field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned int _field29;
    _Bool _field30;
    float _field31;
    int _field32;
    _Bool _field33;
    int _field34;
    _Bool _field35;
    int _field36;
    int _field37;
    _Bool _field38;
    int _field39;
    struct FigTime _field40;
    _Bool _field41;
};

struct OZSimpleCacheArray {
    struct vector<OZSimpleImageCache, std::__1::allocator<OZSimpleImageCache>> _field1;
    struct PCMutex _field2;
};

struct OZSimpleImageCache;

struct OZTimeMarkerSet;

struct OZTimelineState;

struct OZTransformNode;

struct OZViewerState;

struct OnceStats {
    double _field1;
    double _field2;
};

struct PAEColorWheelData {
    double r;
    double t;
    double sat;
    double e;
};

struct PAEKeyerOMKeyer2D {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    float _field3;
    struct pair<Vec2f, Vec2f> _field4;
    struct pair<Vec2f, Vec2f> _field5;
    float _field6;
    float _field7;
    struct Vec2f _field8;
    float *_field9;
    struct vector<float, std::__1::allocator<float>> _field10;
    struct OMUtilErf _field11;
    struct OMUtilErf _field12;
    struct Mat4f _field13;
    vector_ff5abfb7 _field14;
    int _field15;
    id _field16;
    id _field17;
    float _field18;
    float _field19;
    float _field20;
    float _field21;
};

struct PAEKeyerPie {
    CDUnknownFunctionPointerType *_field1;
    struct ArcCompute _field2;
    struct ArcCompute _field3;
    int _field4;
    struct vector<Vec2f, std::__1::allocator<Vec2f>> _field5;
};

struct PCArray<LiLight, PCArray_Traits<LiLight>> {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct LiLight *_field4;
};

struct PCArray<PCVector4<double>, PCArray_Traits<PCVector4<double>>> {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct PCVector4<double> *_field4;
};

struct PCArray<int, PCArray_Traits<int>> {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    int *_field4;
};

struct PCBitmap;

struct PCColor {
    struct ColorComponents _field1;
    struct PCColorSpaceHandle _field2;
};

struct PCColorSpaceHandle {
    struct CGColorSpace *_cgColorSpace;
};

struct PCHash128 {
    unsigned int _field1[4];
};

struct PCImage;

struct PCImageAttributes {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    int _field6;
    struct PCColorSpaceHandle _field7;
    unsigned int _field8;
    int _field9;
    _Bool _field10;
    void *_field11;
    unsigned long long _field12;
    void *_field13;
};

struct PCMatrix44Tmpl<double> {
    double _field1[4][4];
};

struct PCMatrix44Tmpl<float> {
    float _field1[4][4];
};

struct PCMutex {
    CDUnknownFunctionPointerType *_vptr$PCMutex;
    struct _opaque_pthread_mutex_t _Mutex;
};

struct PCPlane<double> {
    struct PCVector3<double> _field1;
    struct PCVector3<double> _field2;
};

struct PCPtr<LiCamera> {
    struct LiCamera *_field1;
    struct PCSharedCount _field2;
};

struct PCPtr<LiImageSource> {
    struct LiImageSource *_field1;
    struct PCSharedCount _field2;
};

struct PCPtr<OZRenderParams::SharedInfo> {
    struct SharedInfo *_field1;
    struct PCSharedCount _field2;
};

struct PCRect<double> {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct PCRect<float> {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct PCRect<int> {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct PCRecursiveMutex {
    CDUnknownFunctionPointerType *_vptr$PCMutex;
    struct _opaque_pthread_mutex_t _Mutex;
};

struct PCRenderModel {
    int _field1;
    struct PCColorSpaceHandle _field2;
    float _field3;
    struct PCColorSpaceHandle _field4;
};

struct PCSafeHandle;

struct PCSemaphore;

struct PCSharedCount {
    struct PC_Sp_counted_base *_field1;
};

struct PCSharedMutex {
    struct mutex _field1;
    struct atomic<std::__1::__thread_id> _field2;
    unsigned int _field3;
    struct vector<PCSharedMutex::ReaderInfo, std::__1::allocator<PCSharedMutex::ReaderInfo>> _field4;
};

struct PCSpinLock {
    struct os_unfair_lock_s _lock;
};

struct PCString {
    struct __CFString *_field1;
};

struct PCTimeRange {
    struct FigTime _field1;
    struct FigTime _field2;
};

struct PCURL;

struct PCVector2<double> {
    double _field1;
    double _field2;
};

struct PCVector2<float> {
    float _field1;
    float _field2;
};

struct PCVector3<double> {
    double _field1;
    double _field2;
    double _field3;
};

struct PCVector4<double>;

struct PC_Sp_counted_base;

struct PGContext {
    struct weak_ptr<PGContext> _field1;
    struct ContextHandle _field2;
};

struct PGTexture;

struct PMClip;

struct PSEmitter {
    CDUnknownFunctionPointerType *_field1;
    struct PCSharedMutex _field2;
    struct OZLockingGroup *_field3;
    _Bool _field4;
    struct PCRecursiveMutex _field5;
    CDUnknownFunctionPointerType *_field6;
    struct OZFactory *_field7;
    CDUnknownFunctionPointerType *_field8;
    struct PCSafeHandle *_field9;
    struct PCHash128 _field10;
    CDUnknownFunctionPointerType *_field11;
    struct OZChannelSceneNode _field12;
    struct OZChannelFolder _field13;
    struct OZChannelFolder _field14;
    struct OZChannelFolder _field15;
    struct OZChannelFolder _field16;
    struct OZChannelFolder _field17;
    struct OZSceneNode *_field18;
    struct OZScene *_field19;
    struct list<OZEffect *, std::__1::allocator<OZEffect *>> _field20;
    struct list<OZBehavior *, std::__1::allocator<OZBehavior *>> _field21;
    unsigned int _field22;
    double _field23;
    struct PCHash128 _field24;
    vector_f672cb0f _field25;
    struct __list_iterator<OZSceneNode *, void *> _field26;
    unsigned int _field27;
    struct OZChannelFolder _field28;
    struct OZChannelPosition3D _field29;
    struct OZChannelRotation3D _field30;
    struct OZChannelPosition3D _field31;
    struct OZChannel3D _field32;
    struct OZChannelScale3D _field33;
    struct OZChannelShear _field34;
    struct OZChannelPosition3D _field35;
    double _field36;
    unsigned int _field37;
    struct OZChannelAngle _field38;
    CDUnknownFunctionPointerType *_field39;
    struct PCHash128 _field40;
    struct OZChannelFolder _field41;
    struct OZChannelPercent _field42;
    struct OZChannelBlendMode _field43;
    struct OZChannelFolder _field44;
    struct OZChannelDouble _field45;
    struct OZChannelPercent _field46;
    struct OZChannelPercent _field47;
    struct OZChannelEnum _field48;
    struct OZChannelPercent _field49;
    struct OZChannelBool _field50;
    struct OZLightingFolder _field51;
    struct OZFolderElementShadows _field52;
    struct OZChannelFolder _field53;
    struct OZChannelPercent _field54;
    struct OZChannelDouble _field55;
    struct OZChannelFolder _field56;
    struct OZChannelDouble _field57;
    struct OZChannelDouble _field58;
    struct OZChannelDouble _field59;
    struct OZChannelEnum _field60;
    struct OZChannelEnum _field61;
    struct OZChannelFolder _field62;
    struct OZChannelColorNoAlpha _field63;
    struct OZChannelPercent _field64;
    struct OZChannelDouble _field65;
    struct OZChannelDouble _field66;
    struct OZChannelAngle _field67;
    struct OZChannelBool _field68;
    struct OZChannelQuad _field69;
    struct OZChannelCrop _field70;
    struct OZChannelFolder _field71;
    unsigned int _field72;
    unsigned int _field73;
    unsigned int _field74;
    struct list<OZSceneNode *, std::__1::allocator<OZSceneNode *>> _field75;
    struct OZChannelFolder _field76;
    struct OZChanFootageRef _field77;
    struct PCHash128 _field78;
    unsigned int _field79;
    unsigned int _field80;
    _Bool _field81;
    _Bool _field82;
    struct shared_ptr<PGTexture> _field83;
    struct HGRef<HGMetalTexture> _field84;
    struct OZChannelFolder _field85;
    struct OZChannelFolder _field86;
    struct OZChannelEnum _field87;
    struct OZChannelEnum _field88;
    struct OZChannelBool _field89;
    struct OZChannelEnum _field90;
    struct OZChannelUint32 _field91;
    struct OZChannelUint32 _field92;
    struct OZChannelUint32 _field93;
    struct OZChannelUint32 _field94;
    struct OZChannelPercent _field95;
    struct OZChannelPercent _field96;
    struct OZChannelPercent _field97;
    struct OZChannelEnum _field98;
    struct OZChannelEnum _field99;
    struct OZChannelEnum _field100;
    struct OZChannelEnum _field101;
    struct OZChannelEnum _field102;
    struct OZChannelEnum _field103;
    struct OZChannelEnum _field104;
    struct OZChannelBool _field105;
    struct OZChannelPercent _field106;
    struct OZChannelDouble _field107;
    struct OZChannelPosition3D _field108;
    struct OZChannelPosition3D _field109;
    struct OZChannelDouble _field110;
    struct OZChannel3D _field111;
    struct OZChannelUint32 _field112;
    struct OZChannelUint32 _field113;
    struct OZChannelDouble _field114;
    struct OZChannelDouble _field115;
    struct OZChannelDouble _field116;
    struct OZChannelAngle _field117;
    struct OZChannelDouble _field118;
    struct OZChannelBool _field119;
    struct OZChannelPercent _field120;
    struct OZChanRotoshapeRef _field121;
    struct OZChanElementOrFootageRef _field122;
    struct OZChannelAngle _field123;
    struct OZChannelAngle _field124;
    struct OZChannelAngle _field125;
    struct OZChannelFolder _field126;
    struct OZChannelPercent _field127;
    struct OZChannelBool _field128;
    struct OZChannelPercent _field129;
    struct OZChannelPercent _field130;
    struct OZChannelScale3D _field131;
    struct OZChannelPercent _field132;
    struct OZChannelPercent _field133;
    struct OZChannelColor _field134;
    struct OZChannelPercent _field135;
    struct OZChannelEnum _field136;
    struct OZChannelBool _field137;
    struct OZChannelBool _field138;
    struct OZChannelBool _field139;
    struct OZChannelSeed _field140;
    struct OZChannelBool _field141;
    struct OZChannelPosition _field142;
    struct OZChannelBool _field143;
    struct OZChannelEnum _field144;
    struct OZChannelBool _field145;
    struct OZChannelBool _field146;
    _Bool _field147;
    _Bool _field148;
    shared_ptr_1a5c5a10 _field149;
    double _field150;
    double _field151;
    double _field152;
    _Bool _field153[2];
    int _field154[2];
    double _field155[2];
    int _field156;
    struct PCMutex _field157;
    unsigned int *_field158;
    unsigned int _field159;
    unsigned int _field160;
    struct list<OZSceneNode *, std::__1::allocator<OZSceneNode *>> _field161;
    _Bool _field162;
    _Bool _field163;
    unsigned int _field164;
    _Bool _field165;
};

struct PVGCDLock;

struct PVIGHGNodeCacheKey {
    unsigned long long _field1;
    CDStruct_1b6d18a9 _field2;
    id _field3;
};

struct PVImageProperties {
    unsigned int cvPixelFormat;
    int bitsPerPixel;
    unsigned int alphaInfo;
    struct CGColorSpace *cgColorSpaceRef;
};

struct PVInputHGNodeMap<PVInstructionGraphSourceNode *> {
    struct map<PVInstructionGraphSourceNode *, HGRef<HGNode>, std::__1::less<PVInstructionGraphSourceNode *>, std::__1::allocator<std::__1::pair<PVInstructionGraphSourceNode *const, HGRef<HGNode>>>> _field1;
    struct map<PVInstructionGraphSourceNode *, PCRect<double>, std::__1::less<PVInstructionGraphSourceNode *>, std::__1::allocator<std::__1::pair<PVInstructionGraphSourceNode *const, PCRect<double>>>> _field2;
    struct map<PVInstructionGraphSourceNode *, PCMatrix44Tmpl<double>, std::__1::less<PVInstructionGraphSourceNode *>, std::__1::allocator<std::__1::pair<PVInstructionGraphSourceNode *const, PCMatrix44Tmpl<double>>>> _field3;
    struct map<PVInstructionGraphSourceNode *, int, std::__1::less<PVInstructionGraphSourceNode *>, std::__1::allocator<std::__1::pair<PVInstructionGraphSourceNode *const, int>>> _field4;
};

struct PVInputHGNodeMap<unsigned int> {
    map_184f33b3 _field1;
    struct map<unsigned int, PCRect<double>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PCRect<double>>>> _field2;
    struct map<unsigned int, PCMatrix44Tmpl<double>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PCMatrix44Tmpl<double>>>> _field3;
    struct map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int>>> _field4;
};

struct PVInstructionGraphContext;

struct PVLoadedEffectItem;

struct PVPerfStats {
    double _field1;
    int _field2;
    struct OnceStats _field3;
    struct vector<PVPerfStats::FrameStats, std::__1::allocator<PVPerfStats::FrameStats>> _field4;
    _Bool _field5;
    struct FrameStats _field6;
    struct FrameStats _field7;
    struct FrameStats _field8;
    struct FrameStats _field9;
    struct FrameStats _field10;
    struct FrameStats _field11;
    double _field12;
    struct PlaybackRateCalculator _field13;
    id _field14;
    struct FrameStatsDescription *_field15;
};

struct PVRenderJob;

struct PVRenderLinkJob;

struct PVRenderManager;

struct PVTransformAnimationInfo {
    CDStruct_1b6d18a9 time;
    struct CGPoint translation;
    double scale;
    double rotation;
};

struct PVTransformInfo {
    CDStruct_183601bc _field1;
};

struct PerfTimer {
    double _start;
    double _end;
};

struct PlaybackRateCalculator {
    struct vector<PVPerfStats::FrameStats, std::__1::allocator<PVPerfStats::FrameStats>> *_field1;
    long long _field2;
    long long _field3;
    _Bool _field4;
    unsigned int _field5;
};

struct PosEdge;

struct PosFacet {
    struct vector<LiPolygon::PosEdge, std::__1::allocator<LiPolygon::PosEdge>> *_field1;
};

struct RGBA8Pixel;

struct RGBAfPixel {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct ReaderInfo;

struct RendererStats;

struct SharedInfo;

struct TDColor3 {
    float one;
    float two;
    float three;
};

struct TransformSet {
    unsigned long long _field1;
};

struct Vec2f {
    float _field1[2];
};

struct Vec3f {
    float _field1[3];
};

struct Vec4f {
    float _field1[4];
};

struct __CFString;

struct __compressed_pair<cc::point_t<double, false, false>*, std::__1::allocator<cc::point_t<double, false, false>>> {
    struct point_t<double, false, false> *_field1;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *>*> *_field1;
};

struct __list_iterator<OZSceneNode *, void *> {
    struct __list_node_base<OZSceneNode *, void *> *_field1;
};

struct __list_node_base<OZBehavior *, void *> {
    struct __list_node_base<OZBehavior *, void *> *_field1;
    struct __list_node_base<OZBehavior *, void *> *_field2;
};

struct __list_node_base<OZCPPObserver *, void *> {
    struct __list_node_base<OZCPPObserver *, void *> *_field1;
    struct __list_node_base<OZCPPObserver *, void *> *_field2;
};

struct __list_node_base<OZEffect *, void *> {
    struct __list_node_base<OZEffect *, void *> *_field1;
    struct __list_node_base<OZEffect *, void *> *_field2;
};

struct __list_node_base<OZObjectSelections *, void *> {
    struct __list_node_base<OZObjectSelections *, void *> *_field1;
    struct __list_node_base<OZObjectSelections *, void *> *_field2;
};

struct __list_node_base<OZSceneNode *, void *> {
    struct __list_node_base<OZSceneNode *, void *> *_field1;
    struct __list_node_base<OZSceneNode *, void *> *_field2;
};

struct __list_node_base<OZSimulationBehavior *, void *> {
    struct __list_node_base<OZSimulationBehavior *, void *> *_field1;
    struct __list_node_base<OZSimulationBehavior *, void *> *_field2;
};

struct __map_iterator<std::__1::__tree_iterator<std::__1::__value_type<PCString, std::__1::vector<PCString, std::__1::allocator<PCString>>>, std::__1::__tree_node<std::__1::__value_type<PCString, std::__1::vector<PCString, std::__1::allocator<PCString>>>, void *>*, long>> {
    struct __tree_iterator<std::__1::__value_type<PCString, std::__1::vector<PCString, std::__1::allocator<PCString>>>, std::__1::__tree_node<std::__1::__value_type<PCString, std::__1::vector<PCString, std::__1::allocator<PCString>>>, void *>*, long> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
    } _field1;
};

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _opaque_pthread_rwlock_t {
    long long __sig;
    char __opaque[192];
};

struct atomic<DocLoadStatus> {
    _Atomic int __a_;
};

struct atomic<PCWorkingGamutValue> {
    _Atomic int _field1;
};

struct atomic<bool> {
    _Atomic _Bool _field1;
};

struct atomic<std::__1::__thread_id> {
    _Atomic struct __thread_id _field1;
};

struct atomic<unsigned int> {
    _Atomic unsigned int __a_;
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

struct bezier_t<double, false> {
    CDUnknownFunctionPointerType *_field1;
    struct point_t<double, false, false> *_field2;
    struct point_t<double, false, false> *_field3;
    struct __compressed_pair<cc::point_t<double, false, false>*, std::__1::allocator<cc::point_t<double, false, false>>> _field4;
    CDUnknownFunctionPointerType *_field5;
};

struct bezier_t<double, true> {
    CDUnknownFunctionPointerType *_field1;
    struct point_t<double, false, false> *_field2;
    struct point_t<double, false, false> *_field3;
    struct __compressed_pair<cc::point_t<double, false, false>*, std::__1::allocator<cc::point_t<double, false, false>>> _field4;
    CDUnknownFunctionPointerType *_field5;
};

struct color_t<double> {
    CDUnknownFunctionPointerType *_field1;
    struct point_t<double, false, false> *_field2;
    struct point_t<double, false, false> *_field3;
    struct __compressed_pair<cc::point_t<double, false, false>*, std::__1::allocator<cc::point_t<double, false, false>>> _field4;
    CDUnknownFunctionPointerType *_field5;
    double _field6;
    double _field7;
    double _field8;
    struct bezier_t<double, false> _field9;
};

struct deque<OZChannelFolder *, std::__1::allocator<OZChannelFolder *>> {
    struct __split_buffer<OZChannelFolder **, std::__1::allocator<OZChannelFolder **>> {
        struct OZChannelFolder ***_field1;
        struct OZChannelFolder ***_field2;
        struct OZChannelFolder ***_field3;
        struct __compressed_pair<OZChannelFolder ***, std::__1::allocator<OZChannelFolder **>> {
            struct OZChannelFolder ***_field1;
        } _field4;
    } _field1;
    unsigned long long _field2;
    struct __compressed_pair<unsigned long, std::__1::allocator<OZChannelFolder *>> {
        unsigned long long _field1;
    } _field3;
};

struct deque<PVLoadedEffectItem, std::__1::allocator<PVLoadedEffectItem>> {
    struct __split_buffer<PVLoadedEffectItem *, std::__1::allocator<PVLoadedEffectItem *>> {
        struct PVLoadedEffectItem **_field1;
        struct PVLoadedEffectItem **_field2;
        struct PVLoadedEffectItem **_field3;
        struct __compressed_pair<PVLoadedEffectItem **, std::__1::allocator<PVLoadedEffectItem *>> {
            struct PVLoadedEffectItem **_field1;
        } _field4;
    } _field1;
    unsigned long long _field2;
    struct __compressed_pair<unsigned long, std::__1::allocator<PVLoadedEffectItem>> {
        unsigned long long _field1;
    } _field3;
};

struct deque<int, std::__1::allocator<int>> {
    struct __split_buffer<int *, std::__1::allocator<int *>> {
        int **__first_;
        int **__begin_;
        int **__end_;
        struct __compressed_pair<int **, std::__1::allocator<int *>> {
            int **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::__1::allocator<int>> {
        unsigned long long __value_;
    } __size_;
};

struct deque<unsigned long, std::__1::allocator<unsigned long>> {
    struct __split_buffer<unsigned long *, std::__1::allocator<unsigned long *>> {
        unsigned long long **__first_;
        unsigned long long **__begin_;
        unsigned long long **__end_;
        struct __compressed_pair<unsigned long **, std::__1::allocator<unsigned long *>> {
            unsigned long long **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long>> {
        unsigned long long __value_;
    } __size_;
};

struct hue_t<double> {
    CDUnknownFunctionPointerType *_field1;
    struct point_t<double, false, false> *_field2;
    struct point_t<double, false, false> *_field3;
    struct __compressed_pair<cc::point_t<double, false, false>*, std::__1::allocator<cc::point_t<double, false, false>>> _field4;
    CDUnknownFunctionPointerType *_field5;
    double _field6;
    struct bezier_t<double, true> _field7;
};

struct imageProcessingParams {
    long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    long long _field8;
    long long _field9;
};

struct list<OZBehavior *, std::__1::allocator<OZBehavior *>> {
    struct __list_node_base<OZBehavior *, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZBehavior *, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct list<OZCPPObserver *, std::__1::allocator<OZCPPObserver *>> {
    struct __list_node_base<OZCPPObserver *, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZCPPObserver *, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct list<OZEffect *, std::__1::allocator<OZEffect *>> {
    struct __list_node_base<OZEffect *, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZEffect *, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct list<OZObjectSelections *, std::__1::allocator<OZObjectSelections *>> {
    struct __list_node_base<OZObjectSelections *, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZObjectSelections *, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct list<OZSceneNode *, std::__1::allocator<OZSceneNode *>> {
    struct __list_node_base<OZSceneNode *, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZSceneNode *, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct list<OZSimulationBehavior *, std::__1::allocator<OZSimulationBehavior *>> {
    struct __list_node_base<OZSimulationBehavior *, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZSimulationBehavior *, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct map<PCHash128, PCMutexRef, std::__1::less<PCHash128>, std::__1::allocator<std::__1::pair<const PCHash128, PCMutexRef>>> {
    struct __tree<std::__1::__value_type<PCHash128, PCMutexRef>, std::__1::__map_value_compare<PCHash128, std::__1::__value_type<PCHash128, PCMutexRef>, std::__1::less<PCHash128>, true>, std::__1::allocator<std::__1::__value_type<PCHash128, PCMutexRef>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<PCHash128, PCMutexRef>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<PCHash128, std::__1::__value_type<PCHash128, PCMutexRef>, std::__1::less<PCHash128>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<PVInstructionGraphSourceNode *, HGRef<HGNode>, std::__1::less<PVInstructionGraphSourceNode *>, std::__1::allocator<std::__1::pair<PVInstructionGraphSourceNode *const, HGRef<HGNode>>>> {
    struct __tree<std::__1::__value_type<PVInstructionGraphSourceNode *, HGRef<HGNode>>, std::__1::__map_value_compare<PVInstructionGraphSourceNode *, std::__1::__value_type<PVInstructionGraphSourceNode *, HGRef<HGNode>>, std::__1::less<PVInstructionGraphSourceNode *>, true>, std::__1::allocator<std::__1::__value_type<PVInstructionGraphSourceNode *, HGRef<HGNode>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<PVInstructionGraphSourceNode *, HGRef<HGNode>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<PVInstructionGraphSourceNode *, std::__1::__value_type<PVInstructionGraphSourceNode *, HGRef<HGNode>>, std::__1::less<PVInstructionGraphSourceNode *>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<PVInstructionGraphSourceNode *, PCMatrix44Tmpl<double>, std::__1::less<PVInstructionGraphSourceNode *>, std::__1::allocator<std::__1::pair<PVInstructionGraphSourceNode *const, PCMatrix44Tmpl<double>>>> {
    struct __tree<std::__1::__value_type<PVInstructionGraphSourceNode *, PCMatrix44Tmpl<double>>, std::__1::__map_value_compare<PVInstructionGraphSourceNode *, std::__1::__value_type<PVInstructionGraphSourceNode *, PCMatrix44Tmpl<double>>, std::__1::less<PVInstructionGraphSourceNode *>, true>, std::__1::allocator<std::__1::__value_type<PVInstructionGraphSourceNode *, PCMatrix44Tmpl<double>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<PVInstructionGraphSourceNode *, PCMatrix44Tmpl<double>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<PVInstructionGraphSourceNode *, std::__1::__value_type<PVInstructionGraphSourceNode *, PCMatrix44Tmpl<double>>, std::__1::less<PVInstructionGraphSourceNode *>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<PVInstructionGraphSourceNode *, PCRect<double>, std::__1::less<PVInstructionGraphSourceNode *>, std::__1::allocator<std::__1::pair<PVInstructionGraphSourceNode *const, PCRect<double>>>> {
    struct __tree<std::__1::__value_type<PVInstructionGraphSourceNode *, PCRect<double>>, std::__1::__map_value_compare<PVInstructionGraphSourceNode *, std::__1::__value_type<PVInstructionGraphSourceNode *, PCRect<double>>, std::__1::less<PVInstructionGraphSourceNode *>, true>, std::__1::allocator<std::__1::__value_type<PVInstructionGraphSourceNode *, PCRect<double>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<PVInstructionGraphSourceNode *, PCRect<double>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<PVInstructionGraphSourceNode *, std::__1::__value_type<PVInstructionGraphSourceNode *, PCRect<double>>, std::__1::less<PVInstructionGraphSourceNode *>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<PVInstructionGraphSourceNode *, int, std::__1::less<PVInstructionGraphSourceNode *>, std::__1::allocator<std::__1::pair<PVInstructionGraphSourceNode *const, int>>> {
    struct __tree<std::__1::__value_type<PVInstructionGraphSourceNode *, int>, std::__1::__map_value_compare<PVInstructionGraphSourceNode *, std::__1::__value_type<PVInstructionGraphSourceNode *, int>, std::__1::less<PVInstructionGraphSourceNode *>, true>, std::__1::allocator<std::__1::__value_type<PVInstructionGraphSourceNode *, int>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<PVInstructionGraphSourceNode *, int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<PVInstructionGraphSourceNode *, std::__1::__value_type<PVInstructionGraphSourceNode *, int>, std::__1::less<PVInstructionGraphSourceNode *>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *, std::__1::less<PVSPI_OSThermalPressureLevel>, std::__1::allocator<std::__1::pair<const PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>>> {
    struct __tree<std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::__1::__map_value_compare<PVSPI_OSThermalPressureLevel, std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::__1::less<PVSPI_OSThermalPressureLevel>, true>, std::__1::allocator<std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<PVSPI_OSThermalPressureLevel, std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::__1::less<PVSPI_OSThermalPressureLevel>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *>>>, std::__1::less<_opaque_pthread_t *>, std::__1::allocator<std::__1::pair<_opaque_pthread_t *const, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *>>>>>> {
    struct __tree<std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *>>>>, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *>>>>, std::__1::less<_opaque_pthread_t *>, true>, std::__1::allocator<std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *>>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *>>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *>>>>, std::__1::less<_opaque_pthread_t *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<int, __CVBuffer *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, __CVBuffer *>>> {
    struct __tree<std::__1::__value_type<int, __CVBuffer *>, std::__1::__map_value_compare<int, std::__1::__value_type<int, __CVBuffer *>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, __CVBuffer *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, __CVBuffer *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, __CVBuffer *>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge, std::__1::less<std::__1::tuple<unsigned long, unsigned long>>, std::__1::allocator<std::__1::pair<const std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge>>> {
    struct __tree<std::__1::__value_type<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge>, std::__1::__map_value_compare<std::__1::tuple<unsigned long, unsigned long>, std::__1::__value_type<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge>, std::__1::less<std::__1::tuple<unsigned long, unsigned long>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::tuple<unsigned long, unsigned long>, std::__1::__value_type<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge>, std::__1::less<std::__1::tuple<unsigned long, unsigned long>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<unsigned int, HGRef<HGNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, HGRef<HGNode>>>> {
    struct __tree<std::__1::__value_type<unsigned int, HGRef<HGNode>>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode>>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, HGRef<HGNode>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, HGRef<HGNode>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode>>, std::__1::less<unsigned int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<unsigned int, OZChannelBase *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, OZChannelBase *>>> {
    struct __tree<std::__1::__value_type<unsigned int, OZChannelBase *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, OZChannelBase *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, OZChannelBase *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, OZChannelBase *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, OZChannelBase *>, std::__1::less<unsigned int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<unsigned int, PCMatrix44Tmpl<double>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PCMatrix44Tmpl<double>>>> {
    struct __tree<std::__1::__value_type<unsigned int, PCMatrix44Tmpl<double>>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PCMatrix44Tmpl<double>>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PCMatrix44Tmpl<double>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PCMatrix44Tmpl<double>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PCMatrix44Tmpl<double>>, std::__1::less<unsigned int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<unsigned int, PCRect<double>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PCRect<double>>>> {
    struct __tree<std::__1::__value_type<unsigned int, PCRect<double>>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PCRect<double>>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PCRect<double>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PCRect<double>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PCRect<double>>, std::__1::less<unsigned int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<unsigned int, PVInstructionGraphNode *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PVInstructionGraphNode *>>> {
    struct __tree<std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PVInstructionGraphNode *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, ParameterTransactionHelpers, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, ParameterTransactionHelpers>>> {
    struct __tree<std::__1::__value_type<unsigned int, ParameterTransactionHelpers>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, ParameterTransactionHelpers>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, ParameterTransactionHelpers>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, ParameterTransactionHelpers>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, ParameterTransactionHelpers>, std::__1::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, double, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, double>>> {
    struct __tree<std::__1::__value_type<unsigned int, double>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, double>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, double>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, double>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, double>, std::__1::less<unsigned int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<unsigned int, id<PVLivePlayerSource>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, id<PVLivePlayerSource>>>> {
    struct __tree<std::__1::__value_type<unsigned int, id<PVLivePlayerSource>>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, id<PVLivePlayerSource>>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, id<PVLivePlayerSource>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, id<PVLivePlayerSource>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, id<PVLivePlayerSource>>, std::__1::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int>>> {
    struct __tree<std::__1::__value_type<unsigned int, int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, int>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int>>*, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int>>*>>> {
    struct __tree<std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int>>*>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int>>*>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int>>*>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int>>*>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int>>*>, std::__1::less<unsigned int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> {
    struct __tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<unsigned int, unsigned long long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long long>>> {
    struct __tree<std::__1::__value_type<unsigned int, unsigned long long>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long long>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned long long>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned long long>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long long>, std::__1::less<unsigned int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<unsigned long, HGDotGraph::Node, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, HGDotGraph::Node>>> {
    struct __tree<std::__1::__value_type<unsigned long, HGDotGraph::Node>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, HGDotGraph::Node>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, HGDotGraph::Node>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, HGDotGraph::Node>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, HGDotGraph::Node>, std::__1::less<unsigned long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct mutex {
    struct _opaque_pthread_mutex_t __m_;
};

struct offsetcolor_t<double> {
    CDUnknownFunctionPointerType *_field1;
    struct point_t<double, false, false> *_field2;
    struct point_t<double, false, false> *_field3;
    struct __compressed_pair<cc::point_t<double, false, false>*, std::__1::allocator<cc::point_t<double, false, false>>> _field4;
    CDUnknownFunctionPointerType *_field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    struct bezier_t<double, false> _field10;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct pair<Vec2f, Vec2f> {
    struct Vec2f _field1;
    struct Vec2f _field2;
};

struct point_t<double, false, false>;

struct set<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *>> {
    struct __tree<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<HGNodeInput *, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::less<HGNodeInput *>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction>>> {
    struct __tree<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<HGRef<LoadableInstruction>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, LoadableInstructionCompare> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct set<OZElement *, std::__1::less<OZElement *>, std::__1::allocator<OZElement *>> {
    struct __tree<OZElement *, std::__1::less<OZElement *>, std::__1::allocator<OZElement *>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<OZElement *, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::less<OZElement *>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int>> {
    struct __tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<unsigned int, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::less<unsigned int>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct shared_ptr<PCBitmap> {
    struct PCBitmap *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<PCImage> {
    struct PCImage *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<PGTexture> {
    struct PGTexture *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<ProGL::Private::ContextImpl> {
    struct ContextImpl *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<const HGComputeDevice> {
    struct HGComputeDevice *_field1;
    struct __shared_weak_count *_field2;
};

struct stack<OZChannelFolder *, std::__1::deque<OZChannelFolder *, std::__1::allocator<OZChannelFolder *>>> {
    struct deque<OZChannelFolder *, std::__1::allocator<OZChannelFolder *>> _field1;
};

struct stack<unsigned long, std::__1::deque<unsigned long, std::__1::allocator<unsigned long>>> {
    struct deque<unsigned long, std::__1::allocator<unsigned long>> c;
};

struct unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock>> {
    struct __compressed_pair<PVGCDLock *, std::__1::default_delete<PVGCDLock>> {
        struct PVGCDLock *__value_;
    } __ptr_;
};

struct unique_ptr<PVPerfStats, std::__1::default_delete<PVPerfStats>> {
    struct __compressed_pair<PVPerfStats *, std::__1::default_delete<PVPerfStats>> {
        struct PVPerfStats *__value_;
    } __ptr_;
};

struct unique_ptr<PerfTimer, std::__1::default_delete<PerfTimer>> {
    struct __compressed_pair<PerfTimer *, std::__1::default_delete<PerfTimer>> {
        struct PerfTimer *__value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_map<unsigned int, OZObjectManipulator *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, OZObjectManipulator *>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, std::__1::hash<unsigned int>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, std::__1::equal_to<unsigned int>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct vector<DepthBufferManager *, std::__1::allocator<DepthBufferManager *>> {
    struct DepthBufferManager **_field1;
    struct DepthBufferManager **_field2;
    struct __compressed_pair<DepthBufferManager **, std::__1::allocator<DepthBufferManager *>> {
        struct DepthBufferManager **_field1;
    } _field3;
};

struct vector<FracturedUtils::FracturedFXPoolItem *, std::__1::allocator<FracturedUtils::FracturedFXPoolItem *>> {
    struct FracturedFXPoolItem **__begin_;
    struct FracturedFXPoolItem **__end_;
    struct __compressed_pair<FracturedUtils::FracturedFXPoolItem **, std::__1::allocator<FracturedUtils::FracturedFXPoolItem *>> {
        struct FracturedFXPoolItem **__value_;
    } __end_cap_;
};

struct vector<HGExecutionUnit *, std::__1::allocator<HGExecutionUnit *>> {
    struct HGExecutionUnit **_field1;
    struct HGExecutionUnit **_field2;
    struct __compressed_pair<HGExecutionUnit **, std::__1::allocator<HGExecutionUnit *>> {
        struct HGExecutionUnit **_field1;
    } _field3;
};

struct vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap>>> {
    HGRef_0776e7a8 *__begin_;
    HGRef_0776e7a8 *__end_;
    struct __compressed_pair<HGRef<HGBitmap>*, std::__1::allocator<HGRef<HGBitmap>>> {
        HGRef_0776e7a8 *__value_;
    } __end_cap_;
};

struct vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode>>> {
    HGRef_265f9e4c *_field1;
    HGRef_265f9e4c *_field2;
    struct __compressed_pair<HGRef<HGNode>*, std::__1::allocator<HGRef<HGNode>>> {
        HGRef_265f9e4c *_field1;
    } _field3;
};

struct vector<HGRef<PVCVPixelBufferPool>, std::__1::allocator<HGRef<PVCVPixelBufferPool>>> {
    struct HGRef<PVCVPixelBufferPool> *__begin_;
    struct HGRef<PVCVPixelBufferPool> *__end_;
    struct __compressed_pair<HGRef<PVCVPixelBufferPool>*, std::__1::allocator<HGRef<PVCVPixelBufferPool>>> {
        struct HGRef<PVCVPixelBufferPool> *__value_;
    } __end_cap_;
};

struct vector<HGRef<PVRenderJob>, std::__1::allocator<HGRef<PVRenderJob>>> {
    HGRef_e03d2d21 *__begin_;
    HGRef_e03d2d21 *__end_;
    struct __compressed_pair<HGRef<PVRenderJob>*, std::__1::allocator<HGRef<PVRenderJob>>> {
        HGRef_e03d2d21 *__value_;
    } __end_cap_;
};

struct vector<LiPolygon::PosEdge, std::__1::allocator<LiPolygon::PosEdge>> {
    struct PosEdge *_field1;
    struct PosEdge *_field2;
    struct __compressed_pair<LiPolygon::PosEdge *, std::__1::allocator<LiPolygon::PosEdge>> {
        struct PosEdge *_field1;
    } _field3;
};

struct vector<OMEdge, std::__1::allocator<OMEdge>> {
    struct OMEdge *_field1;
    struct OMEdge *_field2;
    struct __compressed_pair<OMEdge *, std::__1::allocator<OMEdge>> {
        struct OMEdge *_field1;
    } _field3;
};

struct vector<OMSamplesElem *, std::__1::allocator<OMSamplesElem *>>;

struct vector<OMVertex, std::__1::allocator<OMVertex>> {
    struct OMVertex *_field1;
    struct OMVertex *_field2;
    struct __compressed_pair<OMVertex *, std::__1::allocator<OMVertex>> {
        struct OMVertex *_field1;
    } _field3;
};

struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>>;

struct vector<OZChannelBlindData *, std::__1::allocator<OZChannelBlindData *>> {
    struct OZChannelBlindData **__begin_;
    struct OZChannelBlindData **__end_;
    struct __compressed_pair<OZChannelBlindData **, std::__1::allocator<OZChannelBlindData *>> {
        struct OZChannelBlindData **__value_;
    } __end_cap_;
};

struct vector<OZChannelRef, std::__1::allocator<OZChannelRef>> {
    struct OZChannelRef *_field1;
    struct OZChannelRef *_field2;
    struct __compressed_pair<OZChannelRef *, std::__1::allocator<OZChannelRef>> {
        struct OZChannelRef *_field1;
    } _field3;
};

struct vector<OZLockingGroup *, std::__1::allocator<OZLockingGroup *>> {
    struct OZLockingGroup **_field1;
    struct OZLockingGroup **_field2;
    struct __compressed_pair<OZLockingGroup **, std::__1::allocator<OZLockingGroup *>> {
        struct OZLockingGroup **_field1;
    } _field3;
};

struct vector<OZObjectManipulator *, std::__1::allocator<OZObjectManipulator *>> {
    struct OZObjectManipulator **_field1;
    struct OZObjectManipulator **_field2;
    struct __compressed_pair<OZObjectManipulator **, std::__1::allocator<OZObjectManipulator *>> {
        struct OZObjectManipulator **_field1;
    } _field3;
};

struct vector<OZPublishSettings::Entry *, std::__1::allocator<OZPublishSettings::Entry *>> {
    struct Entry **_field1;
    struct Entry **_field2;
    struct __compressed_pair<OZPublishSettings::Entry **, std::__1::allocator<OZPublishSettings::Entry *>> {
        struct Entry **_field1;
    } _field3;
};

struct vector<OZSimpleImageCache, std::__1::allocator<OZSimpleImageCache>> {
    struct OZSimpleImageCache *_field1;
    struct OZSimpleImageCache *_field2;
    struct __compressed_pair<OZSimpleImageCache *, std::__1::allocator<OZSimpleImageCache>> {
        struct OZSimpleImageCache *_field1;
    } _field3;
};

struct vector<PCSharedMutex::ReaderInfo, std::__1::allocator<PCSharedMutex::ReaderInfo>> {
    struct ReaderInfo *_field1;
    struct ReaderInfo *_field2;
    struct __compressed_pair<PCSharedMutex::ReaderInfo *, std::__1::allocator<PCSharedMutex::ReaderInfo>> {
        struct ReaderInfo *_field1;
    } _field3;
};

struct vector<PCString, std::__1::allocator<PCString>> {
    struct PCString *_field1;
    struct PCString *_field2;
    struct __compressed_pair<PCString *, std::__1::allocator<PCString>> {
        struct PCString *_field1;
    } _field3;
};

struct vector<PCVector3<double>, std::__1::allocator<PCVector3<double>>> {
    struct PCVector3<double> *_field1;
    struct PCVector3<double> *_field2;
    struct __compressed_pair<PCVector3<double>*, std::__1::allocator<PCVector3<double>>> {
        struct PCVector3<double> *_field1;
    } _field3;
};

struct vector<PVPerfStats::FrameStats, std::__1::allocator<PVPerfStats::FrameStats>> {
    struct FrameStats *_field1;
    struct FrameStats *_field2;
    struct __compressed_pair<PVPerfStats::FrameStats *, std::__1::allocator<PVPerfStats::FrameStats>> {
        struct FrameStats *_field1;
    } _field3;
};

struct vector<RGBA8Pixel, std::__1::allocator<RGBA8Pixel>> {
    struct RGBA8Pixel *_field1;
    struct RGBA8Pixel *_field2;
    struct __compressed_pair<RGBA8Pixel *, std::__1::allocator<RGBA8Pixel>> {
        struct RGBA8Pixel *_field1;
    } _field3;
};

struct vector<Vec2f, std::__1::allocator<Vec2f>> {
    struct Vec2f *_field1;
    struct Vec2f *_field2;
    struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f>> {
        struct Vec2f *_field1;
    } _field3;
};

struct vector<Vec3f, std::__1::allocator<Vec3f>> {
    struct Vec3f *_field1;
    struct Vec3f *_field2;
    struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f>> {
        struct Vec3f *_field1;
    } _field3;
};

struct vector<double, std::__1::allocator<double>> {
    double *_field1;
    double *_field2;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *_field1;
    } _field3;
};

struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
};

struct vector<int, std::__1::allocator<int>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *_field1;
    } _field3;
};

struct vector<std::__1::vector<Vec3f, std::__1::allocator<Vec3f>>, std::__1::allocator<std::__1::vector<Vec3f, std::__1::allocator<Vec3f>>>> {
    vector_ff5abfb7 *_field1;
    vector_ff5abfb7 *_field2;
    struct __compressed_pair<std::__1::vector<Vec3f, std::__1::allocator<Vec3f>>*, std::__1::allocator<std::__1::vector<Vec3f, std::__1::allocator<Vec3f>>>> {
        vector_ff5abfb7 *_field1;
    } _field3;
};

struct vector<unsigned int, std::__1::allocator<unsigned int>> {
    unsigned int *_field1;
    unsigned int *_field2;
    struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int>> {
        unsigned int *_field1;
    } _field3;
};

struct weak_ptr<PGContext> {
    struct PGContext *_field1;
    struct __shared_weak_count *_field2;
};

typedef struct {
    id _field1;
} CDStruct_183fa7cb;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    _Bool _field8;
    double _field9;
} CDStruct_da8610d8;

typedef struct {
    MISSING_TYPE *_field1[3];
} CDStruct_d80e62f2;

typedef struct {
    MISSING_TYPE *columns[4];
} CDStruct_14d5dc5e;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
} CDStruct_a6477b43;

typedef struct {
    double x;
    double y;
    double z;
    double w;
} CDStruct_91d2e2b9;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct CDStruct_183601bc;

typedef struct {
    CDStruct_1b6d18a9 _field1;
    CDStruct_1b6d18a9 _field2;
    CDStruct_1b6d18a9 _field3;
} CDStruct_d2aef016;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

typedef struct {
    CDUnion_baaf6063 _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    double _field4;
    double _field5;
    unsigned long long _field6;
} CDStruct_f5b31fc1;

// Template types
typedef struct HGRef<HGBitmap> {
    struct HGBitmap *m_Obj;
} HGRef_0776e7a8;

typedef struct HGRef<HGCVPixelBuffer> {
    struct HGCVPixelBuffer *m_Obj;
} HGRef_55a77cc8;

typedef struct HGRef<HGGLBlend> {
    struct HGGLBlend *_field1;
} HGRef_baa0c882;

typedef struct HGRef<HGGLContext> {
    struct HGGLContext *_field1;
} HGRef_2925969f;

typedef struct HGRef<HGGLTexture> {
    struct HGGLTexture *m_Obj;
} HGRef_34ac394f;

typedef struct HGRef<HGNode> {
    struct HGNode *m_Obj;
} HGRef_265f9e4c;

typedef struct HGRef<HGRenderer> {
    struct HGRenderer *_field1;
} HGRef_5aef67ae;

typedef struct HGRef<HGXForm> {
    struct HGXForm *_field1;
} HGRef_b27030d6;

typedef struct HGRef<PVInstructionGraphContext> {
    struct PVInstructionGraphContext *m_Obj;
} HGRef_6bae45d3;

typedef struct HGRef<PVRenderJob> {
    struct PVRenderJob *_field1;
} HGRef_e03d2d21;

typedef struct HGRef<PVRenderLinkJob> {
    struct PVRenderLinkJob *_field1;
} HGRef_b5f7fda3;

typedef struct HGRef<PVRenderManager> {
    struct PVRenderManager *m_Obj;
} HGRef_9706a068;

typedef struct PCMatrix44Tmpl<double> {
    double _field1[4][4];
} PCMatrix44Tmpl_93ed1289;

typedef struct PCMatrix44Tmpl<float> {
    float _field1[4][4];
} PCMatrix44Tmpl_9c426645;

typedef struct PCPtr<LiImageSource> {
    struct LiImageSource *_field1;
    struct PCSharedCount _field2;
} PCPtr_133a54e9;

typedef struct PCRect<double> {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} PCRect_3a266109;

typedef struct PCRect<float> {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
} PCRect_7f811c82;

typedef struct PCRect<int> {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
} PCRect_54d5786f;

typedef struct PCVector2<double> {
    double _field1;
    double _field2;
} PCVector2_5d498db0;

typedef struct PCVector2<float> {
    float _field1;
    float _field2;
} PCVector2_79a470e1;

typedef struct PVInputHGNodeMap<PVInstructionGraphSourceNode *> {
    struct map<PVInstructionGraphSourceNode *, HGRef<HGNode>, std::__1::less<PVInstructionGraphSourceNode *>, std::__1::allocator<std::__1::pair<PVInstructionGraphSourceNode *const, HGRef<HGNode>>>> _field1;
    struct map<PVInstructionGraphSourceNode *, PCRect<double>, std::__1::less<PVInstructionGraphSourceNode *>, std::__1::allocator<std::__1::pair<PVInstructionGraphSourceNode *const, PCRect<double>>>> _field2;
    struct map<PVInstructionGraphSourceNode *, PCMatrix44Tmpl<double>, std::__1::less<PVInstructionGraphSourceNode *>, std::__1::allocator<std::__1::pair<PVInstructionGraphSourceNode *const, PCMatrix44Tmpl<double>>>> _field3;
    struct map<PVInstructionGraphSourceNode *, int, std::__1::less<PVInstructionGraphSourceNode *>, std::__1::allocator<std::__1::pair<PVInstructionGraphSourceNode *const, int>>> _field4;
} PVInputHGNodeMap_cba5f928;

typedef struct PVInputHGNodeMap<unsigned int> {
    map_184f33b3 _field1;
    struct map<unsigned int, PCRect<double>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PCRect<double>>>> _field2;
    struct map<unsigned int, PCMatrix44Tmpl<double>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PCMatrix44Tmpl<double>>>> _field3;
    struct map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int>>> _field4;
} PVInputHGNodeMap_d4d649d7;

typedef struct color_t<double> {
    CDUnknownFunctionPointerType *_field1;
    struct point_t<double, false, false> *_field2;
    struct point_t<double, false, false> *_field3;
    struct __compressed_pair<cc::point_t<double, false, false>*, std::__1::allocator<cc::point_t<double, false, false>>> _field4;
    CDUnknownFunctionPointerType *_field5;
    double _field6;
    double _field7;
    double _field8;
    struct bezier_t<double, false> _field9;
} color_t_8a798535;

typedef struct hue_t<double> {
    CDUnknownFunctionPointerType *_field1;
    struct point_t<double, false, false> *_field2;
    struct point_t<double, false, false> *_field3;
    struct __compressed_pair<cc::point_t<double, false, false>*, std::__1::allocator<cc::point_t<double, false, false>>> _field4;
    CDUnknownFunctionPointerType *_field5;
    double _field6;
    struct bezier_t<double, true> _field7;
} hue_t_6ddfb2b5;

typedef struct map<int, __CVBuffer *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, __CVBuffer *>>> {
    struct __tree<std::__1::__value_type<int, __CVBuffer *>, std::__1::__map_value_compare<int, std::__1::__value_type<int, __CVBuffer *>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, __CVBuffer *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, __CVBuffer *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, __CVBuffer *>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_ba6fd08a;

typedef struct map<unsigned int, HGRef<HGNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, HGRef<HGNode>>>> {
    struct __tree<std::__1::__value_type<unsigned int, HGRef<HGNode>>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode>>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, HGRef<HGNode>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, HGRef<HGNode>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode>>, std::__1::less<unsigned int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_184f33b3;

typedef struct map<unsigned int, OZChannelBase *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, OZChannelBase *>>> {
    struct __tree<std::__1::__value_type<unsigned int, OZChannelBase *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, OZChannelBase *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, OZChannelBase *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, OZChannelBase *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, OZChannelBase *>, std::__1::less<unsigned int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_2b94c774;

typedef struct offsetcolor_t<double> {
    CDUnknownFunctionPointerType *_field1;
    struct point_t<double, false, false> *_field2;
    struct point_t<double, false, false> *_field3;
    struct __compressed_pair<cc::point_t<double, false, false>*, std::__1::allocator<cc::point_t<double, false, false>>> _field4;
    CDUnknownFunctionPointerType *_field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    struct bezier_t<double, false> _field10;
} offsetcolor_t_d4b9b3c6;

typedef struct shared_ptr<PCBitmap> {
    struct PCBitmap *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_1a5c5a10;

typedef struct vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap>>> {
    HGRef_0776e7a8 *__begin_;
    HGRef_0776e7a8 *__end_;
    struct __compressed_pair<HGRef<HGBitmap>*, std::__1::allocator<HGRef<HGBitmap>>> {
        HGRef_0776e7a8 *__value_;
    } __end_cap_;
} vector_bfafc335;

typedef struct vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode>>> {
    HGRef_265f9e4c *_field1;
    HGRef_265f9e4c *_field2;
    struct __compressed_pair<HGRef<HGNode>*, std::__1::allocator<HGRef<HGNode>>> {
        HGRef_265f9e4c *_field1;
    } _field3;
} vector_8c7095e0;

typedef struct vector<OZChannelBlindData *, std::__1::allocator<OZChannelBlindData *>> {
    struct OZChannelBlindData **__begin_;
    struct OZChannelBlindData **__end_;
    struct __compressed_pair<OZChannelBlindData **, std::__1::allocator<OZChannelBlindData *>> {
        struct OZChannelBlindData **__value_;
    } __end_cap_;
} vector_61caf964;

typedef struct vector<RGBA8Pixel, std::__1::allocator<RGBA8Pixel>> {
    struct RGBA8Pixel *_field1;
    struct RGBA8Pixel *_field2;
    struct __compressed_pair<RGBA8Pixel *, std::__1::allocator<RGBA8Pixel>> {
        struct RGBA8Pixel *_field1;
    } _field3;
} vector_513fe8f7;

typedef struct vector<Vec3f, std::__1::allocator<Vec3f>> {
    struct Vec3f *_field1;
    struct Vec3f *_field2;
    struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f>> {
        struct Vec3f *_field1;
    } _field3;
} vector_ff5abfb7;

typedef struct vector<unsigned int, std::__1::allocator<unsigned int>> {
    unsigned int *_field1;
    unsigned int *_field2;
    struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int>> {
        unsigned int *_field1;
    } _field3;
} vector_f672cb0f;

typedef union {
    double frame;
    CDStruct_183601bc *seconds;
} CDUnion_baaf6063;
