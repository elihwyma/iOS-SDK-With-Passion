/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PFStateMachineNode;

@interface PFStateMachineGraph : NSObject

{
    NSMutableDictionary *_nodes;
    NSMutableDictionary *_globalTransitions;
    PFStateMachineNode *_initialNode;
}

@property (retain) PFStateMachineNode *initialNode;

- (id)init;
- (id)addNode:(id)arg1;
- (id)transitionForEventName:(id)arg1;
- (void)addGlobalTransition:(id)arg1;
- (void)addGlobalTransitionOn:(id)arg1 to:(id)arg2;
- (id)findNodeWithName:(id)arg1;
- (id)dot:(_Bool)arg1;

@end
