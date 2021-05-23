/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKStateMachineState, NSMutableArray, NSMutableDictionary, NSString;

@protocol HKStateMachineDelegate;

@interface HKStateMachine : NSObject

{
    NSMutableDictionary *_statesByIndex;
    NSMutableArray *_transitions;
    HKStateMachineState *_currentState;
    _Bool _isProcessingEvent;
    NSMutableArray *_pendingEvents;
    NSString *_name;
    id <HKStateMachineDelegate> _delegate;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (weak, nonatomic) id <HKStateMachineDelegate> delegate;
@property (nonatomic, readonly) HKStateMachineState *currentState;

+ (id)nameForOwner:(id)arg1 UUID:(id)arg2 tag:(id)arg3;

- (id)init;
- (id)initWithName:(id)arg1;
- (id)addStateWithIndex:(long long)arg1 label:(id)arg2;
- (id)addStateTransitionFrom:(id)arg1 to:(id)arg2 event:(long long)arg3 label:(id)arg4;
- (void)enterAtState:(long long)arg1;
- (void)enqueueEvent:(long long)arg1 date:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleEvent:(long long)arg1 date:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_dequeueEvent;
- (id)stateWithIndex:(long long)arg1;
- (id)graphDescription;

@end
