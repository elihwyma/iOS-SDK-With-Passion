/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@interface SBAnalyticsStateMachineEdge : NSObject <Swift>

{
    unsigned long long _fromState;
    CDUnknownBlockType _transition;
}

@property (nonatomic, readonly) unsigned long long fromState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)edgeFromState:(unsigned long long)arg1 transition:(CDUnknownBlockType)arg2;
+ (id)edgeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 uponEvent:(unsigned long long)arg3;
+ (id)edgeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 uponGestureState:(long long)arg3 andDo:(CDUnknownBlockType)arg4;
+ (id)edgeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 uponGestureState:(long long)arg3;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (unsigned long long)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)initWithFromState:(unsigned long long)arg1 transition:(CDUnknownBlockType)arg2;

@end
