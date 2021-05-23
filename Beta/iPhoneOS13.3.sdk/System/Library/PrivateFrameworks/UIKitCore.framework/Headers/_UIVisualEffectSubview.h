/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSString, _UIVisualEffectViewBackdropCaptureGroup;

@protocol _UIVisualEffectViewParticipating, _UIVisualEffectViewSubviewMonitoring;

@interface _UIVisualEffectSubview : UIView

{
    NSArray *_filters;
    _UIVisualEffectViewBackdropCaptureGroup *_primaryCaptureGroup;
    UIView<_UIVisualEffectViewParticipating> *_containedView;
    NSArray *_viewEffects;
    id <_UIVisualEffectViewSubviewMonitoring> _subviewMonitor;
}

@property (weak, nonatomic) id <_UIVisualEffectViewSubviewMonitoring> subviewMonitor;
@property (nonatomic) _Bool disableGroupFiltering;
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup;
@property (retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containedView;
@property (copy, nonatomic) NSArray *viewEffects;
@property (copy, nonatomic) NSArray *filters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)applyRequestedFilterEffects;
- (void)applyIdentityFilterEffects;
- (void)applyIdentityViewEffects;
- (void)applyRequestedViewEffects;
- (void)willMoveToWindow:(id)arg1;
- (id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(_Bool)arg3;

@end
