/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@interface SBSwitcherModifierEvent : NSObject <Swift>

{
    NSString *_handledReason;
    _Bool _handled;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, getter=isHandled) _Bool handled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)isTransitionEvent;
- (void)handleWithReason:(id)arg1;
- (_Bool)isGestureEvent;

@end
