/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PFStateMachineTransition : NSObject

{
    NSString *_eventName;
    NSString *_destinationName;
    CDUnknownBlockType _action;
}

@property (readonly) NSString *eventName;
@property (readonly) NSString *destinationName;

+ (id)transitionOn:(id)arg1 to:(id)arg2;
+ (id)transitionOn:(id)arg1 to:(id)arg2 action:(CDUnknownBlockType)arg3;
+ (id)returnTransitionOn:(id)arg1;
+ (id)transitionOn:(id)arg1 subflow:(id)arg2 to:(id)arg3;

- (id)description;
- (void)performAction:(id)arg1;
- (void)setAction:(CDUnknownBlockType)arg1;
- (id)destination:(id)arg1;
- (id)dot:(id)arg1 prefix:(id)arg2 graph:(id)arg3;
- (id)initWithEventName:(id)arg1 to:(id)arg2 action:(CDUnknownBlockType)arg3;
- (id)_dotReachableNodes:(id)arg1;

@end
