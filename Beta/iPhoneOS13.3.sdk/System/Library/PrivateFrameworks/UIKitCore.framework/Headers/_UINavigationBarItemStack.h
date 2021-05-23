/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, UINavigationItem, _UINavigationBarItemStackEntry, _UINavigationBarTransitionAssistant;

@protocol _UINavigationItemChangeObserver;

__attribute__((visibility("hidden")))
@interface _UINavigationBarItemStack : NSObject

{
    NSArray *_previousItems;
    NSMutableArray *_items;
    int _state;
    id <_UINavigationItemChangeObserver> _changeObserver;
    _UINavigationBarTransitionAssistant *_transitionAssistant;
}

@property (weak, nonatomic) id <_UINavigationItemChangeObserver> changeObserver;
@property (nonatomic, readonly) int state;
@property (nonatomic, readonly) _UINavigationBarTransitionAssistant *transitionAssistant;
@property (nonatomic, readonly) _UINavigationBarItemStackEntry *topEntry;
@property (nonatomic, readonly) _UINavigationBarItemStackEntry *backEntry;
@property (nonatomic, readonly) _UINavigationBarItemStackEntry *previousTopEntry;
@property (nonatomic, readonly) _UINavigationBarItemStackEntry *previousBackEntry;
@property (nonatomic, readonly) UINavigationItem *topItem;
@property (nonatomic, readonly) UINavigationItem *backItem;
@property (nonatomic, readonly) UINavigationItem *previousTopItem;
@property (nonatomic, readonly) UINavigationItem *previousBackItem;
@property (copy, nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) long long itemCount;
@property (nonatomic, readonly, getter=isPushingOrPopping) _Bool pushingOrPopping;
@property (nonatomic, readonly, getter=isPushing) _Bool pushing;
@property (nonatomic, readonly, getter=isPopping) _Bool popping;

- (id)init;
- (id)description;
- (id)initWithItems:(id)arg1;
- (_Bool)stackItemsAreEqualTo:(id)arg1;
- (void)iterateItems:(CDUnknownBlockType)arg1;
- (void)setItems:(id)arg1 withTransitionAssistant:(id)arg2;
- (void)completeOperation;
- (void)beginInteractiveTransition;
- (void)endInteractiveTransition;
- (void)pushItem:(id)arg1 withTransitionAssistant:(id)arg2;
- (id)_shim_popNestedNavigationItem;
- (void)_shim_pushNestedNavigationItem:(id)arg1;
- (void)popItemWithTransitionAssistant:(id)arg1;
- (void)iterateEntries:(CDUnknownBlockType)arg1;
- (void)cancelOperation;
- (void)_updateChangeObserversFor:(id)arg1;
- (void)_prepareTransitionWithAssistant:(id)arg1;
- (void)_cleanupTransitionAssistant;
- (void)_completeTransition;
- (long long)_effectiveDisplayModeForItem:(id)arg1 inStack:(id)arg2;
- (long long)effectiveDisplayModeForItemInCurrentStack:(id)arg1;
- (long long)effectiveDisplayModeForItemInPreviousStack:(id)arg1;

@end
