/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _UITransitionState : NSObject

{
    long long _transitionDirection;
    CDUnknownBlockType _completion;
    NSDate *_beginDate;
}

@property (nonatomic, readonly) long long transitionDirection;
@property (nonatomic, readonly) long long effectiveTransitionDirection;
@property (nonatomic, readonly) NSDate *beginDate;
@property (nonatomic, readonly, getter=isActive) _Bool active;

- (id)description;
- (id)initWithTransitionDirection:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cleanupWithFinishedState:(_Bool)arg1 completedState:(_Bool)arg2;
- (_Bool)isCompatibleWithTransitionInDirection:(long long)arg1;
- (void)markBeginDate;

@end
