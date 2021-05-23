/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIView;

@protocol UIFocusEnvironment, UIFocusItemContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionContainerProxy : NSObject <Swift>

{
    _Bool _isFocusEnvironment;
    id <UIFocusItemContainer> _itemContainer;
}

@property (retain, nonatomic) id <UIFocusItemContainer> itemContainer;
@property (nonatomic) _Bool isFocusEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (weak, nonatomic, readonly) id <UIFocusEnvironment> parentFocusEnvironment;
@property (nonatomic, readonly) id <UIFocusItemContainer> focusItemContainer;
@property (weak, nonatomic, readonly) UIView *preferredFocusedView;
@property (nonatomic) _Bool areChildrenFocused;
@property (nonatomic, readonly, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
@property (nonatomic, readonly, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (copy, nonatomic, readonly, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;

- (void)setNeedsFocusUpdate;
- (void)updateFocusIfNeeded;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (id)_focusEnvironment;
- (id)initWithItemContainer:(id)arg1;

@end
