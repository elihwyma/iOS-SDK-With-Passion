/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableArray, NSSet, NSString, _UIStatusBarIdentifier;

__attribute__((visibility("hidden")))
@interface _UIStatusBarAnimation : NSObject <Swift>

{
    _Bool _delaysAnimatingItems;
    _Bool _delaysDependentItems;
    _Bool _enabled;
    long long _priority;
    _UIStatusBarIdentifier *_displayItemIdentifier;
    NSString *_identifier;
    NSString *_exclusivityGroupIdentifier;
    long long _type;
    CDUnknownBlockType _prepareBlock;
    NSSet *_delayedItemIdentifiers;
    NSSet *_delayedDisplayItemPlacements;
    NSMutableArray *_subAnimations;
    _UIStatusBarAnimation *_parentAnimation;
    CDUnknownBlockType _animationBlock;
    NSMutableArray *_completionHandlers;
}

@property (retain, nonatomic) NSMutableArray *subAnimations;
@property (weak, nonatomic) _UIStatusBarAnimation *parentAnimation;
@property (copy, nonatomic) CDUnknownBlockType animationBlock;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) long long type;
@property (nonatomic, readonly) NSSet *effectiveDelayedItemIdentifiers;
@property (copy, nonatomic) _UIStatusBarIdentifier *displayItemIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *exclusivityGroupIdentifier;
@property (copy, nonatomic) CDUnknownBlockType prepareBlock;
@property (copy, nonatomic) NSSet *delayedItemIdentifiers;
@property (copy, nonatomic) NSSet *delayedDisplayItemPlacements;
@property (nonatomic) _Bool delaysAnimatingItems;
@property (nonatomic) _Bool delaysDependentItems;
@property (nonatomic) long long priority;

+ (void)initialize;
+ (id)animationWithBlock:(CDUnknownBlockType)arg1;
+ (void)prepareAnimations:(id)arg1 forStatusBar:(id)arg2;
+ (void)_addAnimations:(id)arg1 toDispatchGroup:(id)arg2;
+ (void)_addAnimations:(id)arg1 toPreparingAnimations:(id)arg2 exclusiveAnimations:(id)arg3 visitedDisplayItemIdentifiers:(id)arg4;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cancel;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addSubAnimation:(id)arg1 forDisplayItemWithIdentifier:(id)arg2;
- (void)addTotalCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performForStatusBar:(id)arg1;
- (void)_prepareForStatusBar:(id)arg1 preparingAnimations:(id)arg2 exclusiveAnimations:(id)arg3;
- (id)_dependentItemIdentifiersEnabledOnly:(_Bool)arg1;

@end
