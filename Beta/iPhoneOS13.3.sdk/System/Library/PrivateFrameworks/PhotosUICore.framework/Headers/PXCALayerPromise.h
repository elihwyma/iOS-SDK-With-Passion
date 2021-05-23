/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class CALayer, NSString;

@interface PXCALayerPromise : PXObservable <Swift>

{
    _Bool _startedLayerRealization;
    _Bool _rendersAsynchronously;
    _Bool _shouldCancel;
    double _contentsScale;
    CALayer *_layer;
    struct CGRect _bounds;
}

@property (retain, nonatomic, setter=_setLayer:) CALayer *layer;
@property (nonatomic, readonly) _Bool shouldCancel;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) double contentsScale;
@property (nonatomic, readonly) _Bool rendersAsynchronously;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)setContentsScale:(double)arg1;
- (void)setRendersAsynchronously:(_Bool)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;
- (id)createCustomLayer;
- (void)drawLayerContentInContext:(struct CGContext *)arg1;
- (void)startLayerRealization;
- (void)_realizeLayer;
- (void)_handlePreparedLayer:(id)arg1;
- (void)cancelLayerRealization;
- (void)invalidateLayer;

@end
