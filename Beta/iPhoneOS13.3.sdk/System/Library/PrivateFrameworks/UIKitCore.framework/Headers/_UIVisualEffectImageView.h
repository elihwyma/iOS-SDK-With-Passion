/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIImageView.h>

@class NSArray, NSString, UIView, _UIVisualEffectViewBackdropCaptureGroup;

@protocol _UIVisualEffectViewParticipating, _UIVisualEffectViewSubviewMonitoring;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectImageView : UIImageView

{
    _UIVisualEffectViewBackdropCaptureGroup *_primaryCaptureGroup;
    NSArray *_viewEffects;
    NSArray *_filters;
}

@property (weak, nonatomic) id <_UIVisualEffectViewSubviewMonitoring> subviewMonitor;
@property (nonatomic) _Bool disableGroupFiltering;
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup;
@property (copy, nonatomic) NSArray *viewEffects;
@property (copy, nonatomic) NSArray *filters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containedView;

- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)applyRequestedFilterEffects;
- (void)applyIdentityFilterEffects;
- (void)applyIdentityViewEffects;
- (void)applyRequestedViewEffects;
- (id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(_Bool)arg3;

@end
