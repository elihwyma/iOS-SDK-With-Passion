/*
 Image: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
 */

#import <NSObject.h>

@class BCULayerRenderer, CALayer, NSString;

@protocol BCUPurgeableImage;

@interface _BCULayerRendererOperation : NSObject

{
    _Atomic long long _operationId;
    unsigned int _cancelled:1;
    unsigned int _configuring:1;
    _Bool _waitForCPUSynchronization;
    float _priority;
    BCULayerRenderer *_renderer;
    CDUnknownBlockType _layerBlock;
    CDUnknownBlockType _completion;
    CALayer *_layer;
    id <BCUPurgeableImage> _result;
}

@property (retain, nonatomic) BCULayerRenderer *renderer;
@property (copy, nonatomic) CDUnknownBlockType layerBlock;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (retain, nonatomic) CALayer *layer;
@property (retain, nonatomic) id <BCUPurgeableImage> result;
@property (nonatomic, readonly) _Bool waitForCPUSynchronization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) float priority;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (id)initWithRenderer:(id)arg1 priority:(float)arg2 waitForCPUSynchronization:(_Bool)arg3 layerBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)configureLayer;
- (void)completeWithImage:(id)arg1;
- (long long)_compareHoldingStateLock:(id)arg1;

@end
