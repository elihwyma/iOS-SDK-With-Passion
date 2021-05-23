/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVisualEffectSubview.h>

@class CABackdropLayer, _UIVisualEffectViewBackdropCaptureGroup;

@interface _UIVisualEffectBackdropView : _UIVisualEffectSubview

{
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
}

@property (nonatomic) long long renderMode;
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *captureGroup;
@property (nonatomic, readonly) CABackdropLayer *backdropLayer;

+ (Class)layerClass;

- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)removeFromCurrentCaptureGroup;
- (void)applyRequestedFilterEffects;
- (void)applyIdentityFilterEffects;
- (void)willMoveToWindow:(id)arg1;
- (void)_applyScaleHintAsRequested:(_Bool)arg1;

@end
