/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class BKSProcessAssertion, SAUIDelayedActionCommand;

@interface _AFUIAssertingDelayedActionCommand : NSObject

{
    SAUIDelayedActionCommand *_command;
    BKSProcessAssertion *_assertion;
}

@property (nonatomic, readonly) SAUIDelayedActionCommand *command;
@property (nonatomic, readonly) BKSProcessAssertion *assertion;

- (id)initWithCommand:(id)arg1 assertion:(id)arg2;

@end
