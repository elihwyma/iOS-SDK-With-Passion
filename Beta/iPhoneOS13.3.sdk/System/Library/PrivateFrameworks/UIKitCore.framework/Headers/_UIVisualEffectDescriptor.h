/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, UIView;

@protocol _UIVisualEffectViewParticipating;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectDescriptor : NSObject

{
    NSMutableArray *_filterEntries;
    NSMutableArray *_viewEffects;
    NSMutableArray *_underlays;
    NSMutableArray *_overlays;
    _Bool _textShouldRenderWithTintColor;
    _Bool _allowsVibrancyInContent;
    _Bool _disableInPlaceFiltering;
    _Bool _requestAlphaTransition;
    UIView<_UIVisualEffectViewParticipating> *_identityContainerView;
    UIView<_UIVisualEffectViewParticipating> *_requestedContainerView;
    long long _alphaTransition;
}

@property (retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *_identityContainerView;
@property (retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *_requestedContainerView;
@property (nonatomic) long long alphaTransition;
@property (copy, nonatomic) NSArray *filterEntries;
@property (copy, nonatomic) NSArray *viewEffects;
@property (retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containerView;
@property (copy, nonatomic) NSArray *underlays;
@property (copy, nonatomic) NSArray *overlays;
@property (nonatomic) _Bool textShouldRenderWithTintColor;
@property (nonatomic) _Bool allowsVibrancyInContent;
@property (nonatomic) _Bool disableInPlaceFiltering;
@property (nonatomic) _Bool requestAlphaTransition;

+ (id)newTransitionDescriptorForStops:(id)arg1;

- (id)init;
- (id)description;
- (void)addFilterEntry:(id)arg1;
- (void)addViewEffect:(id)arg1;
- (void)addUnderlay:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)uniqueFilterNames;
- (id)copyForTransitionToDescriptor:(id)arg1;

@end
