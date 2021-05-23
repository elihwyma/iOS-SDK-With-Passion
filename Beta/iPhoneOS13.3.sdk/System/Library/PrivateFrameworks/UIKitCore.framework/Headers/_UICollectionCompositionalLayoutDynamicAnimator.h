/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDynamicAnimator.h>

@class NSArray, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutDynamicAnimator : UIDynamicAnimator

{
    CDUnknownBlockType _invalidationHandler;
    NSMutableDictionary *_itemBehaviors;
}

@property (nonatomic, readonly) NSArray *visibleItems;
@property (nonatomic, readonly) NSArray *visibleItemBehaviors;
@property (nonatomic, readonly) NSSet *visibleItemIdentifiers;

- (id)behaviorForIdentifier:(id)arg1;
- (void)addItemBehavior:(id)arg1;
- (void)removeItemBehaviorForIdentifier:(id)arg1;
- (void)updateAllItemsFromCurrentState;
- (id)initWithReferenceSystem:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;
- (_Bool)_animatorStep:(double)arg1;

@end
