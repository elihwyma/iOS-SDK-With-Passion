/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface PFStateMachineNode : NSObject

{
    NSString *_name;
    NSMutableDictionary *_transitions;
    CDUnknownBlockType _action;
}

@property (readonly) NSString *name;

+ (id)nodeWithName:(id)arg1;

- (id)description;
- (id)initWithName:(id)arg1;
- (id)performAction:(id)arg1;
- (void)setAction:(CDUnknownBlockType)arg1;
- (id)transitionForEventName:(id)arg1;
- (id)dot:(id)arg1 prefix:(id)arg2 graph:(id)arg3;
- (id)_dotReachableNodes:(id)arg1 graph:(id)arg2;
- (id)addTransition:(id)arg1;
- (id)addTransitionOn:(id)arg1 to:(id)arg2;
- (id)addTransitionOn:(id)arg1 subflow:(id)arg2 to:(id)arg3;
- (id)addReturnTransitionOn:(id)arg1;

@end
