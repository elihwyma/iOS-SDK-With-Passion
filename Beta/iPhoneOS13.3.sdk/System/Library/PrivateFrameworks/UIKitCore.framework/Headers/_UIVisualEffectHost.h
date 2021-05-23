/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, _UIVisualEffectBackdropView, _UIVisualEffectDescriptor, _UIVisualEffectSubview, _UIVisualEffectViewBackdropCaptureGroup;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectHost : NSObject

{
    NSMutableArray *_views;
    _Bool _autosetSubviewLabelTintColor;
    _Bool _contentViewRequired;
    _UIVisualEffectSubview *_contentView;
    _UIVisualEffectViewBackdropCaptureGroup *_primaryCaptureGroup;
    _UIVisualEffectBackdropView *_captureView;
    _UIVisualEffectDescriptor *_currentEffectDescriptor;
    _UIVisualEffectDescriptor *_transitionEffectDescriptor;
}

@property (nonatomic, readonly) _UIVisualEffectSubview *contentView;
@property (nonatomic) _Bool contentViewRequired;
@property (nonatomic, readonly) NSArray *views;
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup;
@property (weak, nonatomic) _UIVisualEffectBackdropView *captureView;
@property (retain, nonatomic) _UIVisualEffectDescriptor *currentEffectDescriptor;
@property (nonatomic, readonly) _UIVisualEffectDescriptor *transitionEffectDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithContentView:(id)arg1;
- (void)_iterateViews:(CDUnknownBlockType)arg1;
- (id)_cloneFilters:(id)arg1;
- (void)_updateView:(id)arg1 shouldDrawWithTintColor:(_Bool)arg2;
- (void)_updateAdjustTintColors;
- (void)_configureEffectDescriptor:(id)arg1;
- (void)_applyRequestedDescriptorEffectInvertingView:(id)arg1;
- (void)_applyIdentityDescriptorEffectInvertingView:(id)arg1;
- (id)_viewForEntry:(id)arg1 fromCapturePool:(id)arg2 imagePool:(id)arg3 otherPool:(id)arg4;
- (void)_evaluateInPlaceFiltering;
- (void)_view:(id)arg1 willMoveToWindow:(id)arg2;
- (void)_view:(id)arg1 willGainDescendent:(id)arg2;
- (void)_view:(id)arg1 willLoseDescendent:(id)arg2;
- (void)prepareToTransitionToEffectDescriptor:(id)arg1;
- (void)beginTransition;
- (void)endTransition;
- (void)_applyEffectDescriptor:(id)arg1;

@end
