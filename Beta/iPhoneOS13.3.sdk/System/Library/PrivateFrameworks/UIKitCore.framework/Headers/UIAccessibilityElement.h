/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIResponder.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIView;

@protocol UICoordinateSpace, UIFocusEnvironment, UIFocusItemContainer;

@interface UIAccessibilityElement : UIResponder <Swift>

{
    _Bool _areChildrenFocused;
    struct CGRect _accessibilityFrameInContainerSpace;
}

@property (weak, nonatomic) id accessibilityContainer;
@property (nonatomic) _Bool isAccessibilityElement;
@property (retain, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) NSString *accessibilityHint;
@property (retain, nonatomic) NSString *accessibilityValue;
@property (nonatomic) struct CGRect accessibilityFrame;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic) struct CGRect accessibilityFrameInContainerSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (weak, nonatomic, readonly) id <UIFocusEnvironment> parentFocusEnvironment;
@property (nonatomic, readonly) id <UIFocusItemContainer> focusItemContainer;
@property (weak, nonatomic, readonly) UIView *preferredFocusedView;
@property (nonatomic, readonly) _Bool canBecomeFocused;
@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic, readonly) id <UICoordinateSpace> coordinateSpace;
@property (nonatomic) _Bool areChildrenFocused;
@property (nonatomic, readonly, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
@property (nonatomic, readonly, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (copy, nonatomic, readonly, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (copy, nonatomic) NSString *accessibilityIdentifier;

- (void)dealloc;
- (void)_destroyFocusLayer;
- (void)_updateFocusLayerFrame;
- (void)setNeedsFocusUpdate;
- (void)updateFocusIfNeeded;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_firstViewAncestor;
- (id)focusItemsInRect:(struct CGRect)arg1;
- (id)initWithAccessibilityContainer:(id)arg1;
- (id)nextResponder;

@end
