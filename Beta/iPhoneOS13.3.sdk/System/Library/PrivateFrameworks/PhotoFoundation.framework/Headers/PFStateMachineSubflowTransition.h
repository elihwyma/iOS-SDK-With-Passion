/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFStateMachineTransition.h>

@class NSString;

@interface PFStateMachineSubflowTransition : PFStateMachineTransition

{
    NSString *_subflowName;
}

@property (readonly) NSString *subflowName;

- (id)description;
- (void)performAction:(id)arg1;
- (id)destination:(id)arg1;
- (id)dot:(id)arg1 prefix:(id)arg2 graph:(id)arg3;
- (id)initWithEventName:(id)arg1 subflow:(id)arg2 to:(id)arg3;
- (id)returnDestination:(id)arg1;

@end
