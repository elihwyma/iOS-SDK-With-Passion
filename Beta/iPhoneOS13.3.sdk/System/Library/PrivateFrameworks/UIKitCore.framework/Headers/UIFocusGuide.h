/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UILayoutGuide.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIView;

@protocol UIFocusEnvironment, UIFocusItem, UIFocusItemContainer;

@interface UIFocusGuide : UILayoutGuide <Swift>

{
    _Bool _didSetPreferredFocusedEnvironments;
    _Bool _enabled;
    _Bool _automaticallyPreferOwningView;
    _Bool _automaticallyDisableWhenIntersectingFocus;
    NSArray *_preferredFocusEnvironments;
}

@property (nonatomic, getter=_automaticallyPreferOwningView, setter=_setAutomaticallyPreferOwningView:) _Bool automaticallyPreferOwningView;
@property (nonatomic, getter=_automaticallyDisableWhenIntersectingFocus, setter=_setAutomaticallyDisableWhenIntersectingFocus:) _Bool automaticallyDisableWhenIntersectingFocus;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (weak, nonatomic) UIView *preferredFocusedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) id <UIFocusEnvironment> parentFocusEnvironment;
@property (nonatomic, readonly) id <UIFocusItemContainer> focusItemContainer;
@property (nonatomic, readonly) _Bool canBecomeFocused;
@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic) _Bool areChildrenFocused;
@property (nonatomic, readonly, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
@property (nonatomic, readonly, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (copy, nonatomic, readonly, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (nonatomic, readonly) id <UIFocusItem> focusItemForSorting;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setNeedsFocusUpdate;
- (void)updateFocusIfNeeded;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_focusRegionFocusSystem;
- (id)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;
- (id)_fulfillPromisedFocusRegion;
- (struct CGRect)_focusRegionFrame;
- (_Bool)_legacy_isEligibleForFocusInteraction;
- (_Bool)_isPromiseFocusRegion;
- (_Bool)_isTransparentFocusRegion;
- (id)_focusRegionView;
- (id)_focusRegionGuides;
- (id)_focusDebugOverlayParentView;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (id)_encodablePreferredFocusEnvironments;
- (id)focusGuideRegion:(id)arg1 preferredFocusEnvironmentsForMovementRequest:(id)arg2;
- (void)focusGuideRegion:(id)arg1 willParticipateAsDestinationRegionInFocusUpdate:(id)arg2;
- (void)_didUpdateFocusToPreferredFocusedView;
- (_Bool)_uili_isFocusGuide;

@end
