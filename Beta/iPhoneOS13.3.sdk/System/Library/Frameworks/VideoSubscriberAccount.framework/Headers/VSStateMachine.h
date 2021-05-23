/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, VSOptional;

@protocol VSStateMachineDelegate;

@interface VSStateMachine : NSObject

{
    int _mode;
    NSString *_name;
    VSOptional *_currentState;
    id <VSStateMachineDelegate> _delegate;
    NSOperationQueue *_transitionQueue;
    NSMutableArray *_enqueuedTransitions;
    NSMutableDictionary *_transitionTable;
    NSMutableDictionary *_ignoredEventsByState;
}

@property (retain, nonatomic) NSOperationQueue *transitionQueue;
@property (retain, nonatomic) VSOptional *currentState;
@property (retain, nonatomic) NSMutableArray *enqueuedTransitions;
@property (retain, nonatomic) NSMutableDictionary *transitionTable;
@property (retain, nonatomic) NSMutableDictionary *ignoredEventsByState;
@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id <VSStateMachineDelegate> delegate;

- (id)init;
- (id)description;
- (void)enqueueEvent:(id)arg1;
- (void)_exitingState:(id)arg1;
- (void)_enteringState:(id)arg1;
- (void)_setDestinationState:(id)arg1 forEvent:(id)arg2 inState:(id)arg3 ignoringEvent:(_Bool)arg4;
- (void)_handleEnqueuedTransitions;
- (void)ignoreEvent:(id)arg1 inState:(id)arg2;
- (void)setDestinationState:(id)arg1 forEvent:(id)arg2 inState:(id)arg3;
- (void)activateWithState:(id)arg1;

@end
