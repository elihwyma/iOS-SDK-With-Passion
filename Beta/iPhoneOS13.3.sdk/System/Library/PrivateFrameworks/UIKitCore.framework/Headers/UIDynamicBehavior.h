/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, UIDynamicAnimator;

@interface UIDynamicBehavior : NSObject

{
    UIDynamicAnimator *_context;
    NSMutableArray *_items;
    NSMutableArray *_behaviors;
    NSMutableArray *_addedBehaviors;
    CDUnknownBlockType _action;
}

@property (copy, nonatomic, readonly) NSArray *childBehaviors;
@property (copy, nonatomic) CDUnknownBlockType action;
@property (nonatomic, readonly) UIDynamicAnimator *dynamicAnimator;

+ (void)initialize;
+ (_Bool)_isPrimitiveBehavior;

- (id)init;
- (id)description;
- (void)_setContext:(id)arg1;
- (id)_context;
- (id)items;
- (id)_items;
- (void)_step;
- (void)removeChildBehavior:(id)arg1;
- (void)addChildBehavior:(id)arg1;
- (void)_setItems:(id)arg1;
- (void)_addItem:(id)arg1;
- (void)_associate;
- (void)_dissociate;
- (void)_removeItem:(id)arg1;
- (void)_changedParameterForBody:(id)arg1;
- (id)_itemsDescription;
- (void)_reevaluate:(unsigned long long)arg1;
- (void)willMoveToAnimator:(id)arg1;
- (_Bool)allowsAnimatorToStop;
- (void)_reattachAutolayoutToItemIfNecessary:(id)arg1;
- (void)_detachAutolayoutFromItemIfNecessary:(id)arg1;
- (void)_updateAutolayoutEngagementForItemIfNecessary:(id)arg1 detach:(_Bool)arg2;

@end
