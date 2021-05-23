/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class _UIReplicantLayer;

__attribute__((visibility("hidden")))
@interface _UIReplicantView : UIView

@property (nonatomic, readonly) _UIReplicantLayer *_layer;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSurface:(const struct _UIRenderingSurface *)arg1;
- (id)initAsCopyOf:(id)arg1;

@end
