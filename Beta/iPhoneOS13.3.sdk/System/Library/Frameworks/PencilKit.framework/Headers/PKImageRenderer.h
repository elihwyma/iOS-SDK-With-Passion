/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class PKMetalRendererController;

@interface PKImageRenderer : NSObject

{
    _Bool _synchronous;
    double _scale;
    PKMetalRendererController *_rendererController;
    long long _cancelCount;
    struct CGSize _size;
}

@property (retain, nonatomic) PKMetalRendererController *rendererController;
@property (nonatomic) long long cancelCount;
@property (nonatomic) _Bool synchronous;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double scale;
@property (nonatomic) _Bool invertColors;

+ (void)_fuzzTestUnzippedData:(id)arg1;

- (void)dealloc;
- (void)cancel;
- (void)resume;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)renderDrawing:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 scale:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)renderDrawing:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initSyncWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 scale:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 renderQueue:(id)arg3;
- (void)renderCGStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 scale:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 useMetal:(_Bool)arg3;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 useMetal:(_Bool)arg3 renderQueue:(id)arg4;
- (void)buildStrokeRenderCacheForDrawing:(id)arg1;

@end
