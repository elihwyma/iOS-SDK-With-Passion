/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PVInstructionGraphSourceNode.h>

@class NSString, NSURL;

@protocol PVImageDelegate;

@interface PVInstructionGraphImageSourceNode : PVInstructionGraphSourceNode

{
    struct CachedImageInfo m_cachedImageInfo;
    HGRef_9706a068 m_renderManager;
    _Bool _useAnimationInfo;
    int _renderingIntent;
    NSURL *_url;
    NSString *_key;
    id <PVImageDelegate> _imageDelegate;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) id <PVImageDelegate> imageDelegate;
@property (nonatomic) int renderingIntent;
@property (nonatomic) _Bool useAnimationInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)purgeBitmapCache:(_Bool)arg1;

- (void)dealloc;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id).cxx_construct;
- (id)initWithURL:(id)arg1 animation:(id)arg2 isExporting:(_Bool)arg3 imageDelegate:(id)arg4 renderingIntent:(int)arg5;
- (id)initWithURL:(id)arg1 key:(id)arg2 transform:(struct CGAffineTransform)arg3 isExporting:(_Bool)arg4 imageDelegate:(id)arg5 renderingIntent:(int)arg6;
- (void)loadIGNode:(HGRef_6bae45d3)arg1 returnLoadedEffects:(id)arg2;
- (HGRef_265f9e4c)internalHGNodeForTime:(CDStruct_1b6d18a9)arg1 trackInputs:(const PVInputHGNodeMap_cba5f928 *)arg2 renderer:(const HGRef_5aef67ae *)arg3 igContext:(HGRef_6bae45d3)arg4;
- (id)dotTreeLabel:(HGRef_6bae45d3)arg1;
- (id)instructionGraphNodeDescription;
- (PCRect_3a266109)inputSizeForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;
- (PCMatrix44Tmpl_93ed1289)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;
- (id)newCVPixelBufferCacheItemForImage:(HGRef_6bae45d3)arg1;

@end
