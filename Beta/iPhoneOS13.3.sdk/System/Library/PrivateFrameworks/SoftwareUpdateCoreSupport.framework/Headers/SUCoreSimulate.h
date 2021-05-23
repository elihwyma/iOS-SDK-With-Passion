/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, SUCoreSimulateEvent;

@protocol OS_dispatch_queue;

@interface SUCoreSimulate : NSObject

{
    _Bool _simulatorEnabled;
    int _alterationsPerformed;
    SUCoreSimulateEvent *_lastAlteration;
    NSObject<OS_dispatch_queue> *_simulateQueue;
    NSDictionary *_eventAlterations;
    CDUnknownBlockType _registeredCallback;
}

@property (nonatomic) int alterationsPerformed;
@property (retain, nonatomic) SUCoreSimulateEvent *lastAlteration;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *simulateQueue;
@property (nonatomic, readonly) _Bool simulatorEnabled;
@property (retain, nonatomic) NSDictionary *eventAlterations;
@property (copy, nonatomic) CDUnknownBlockType registeredCallback;

+ (id)sharedSimulator;

- (id)init;
- (void)_adoptAllEventAlterations:(id)arg1;
- (id)_eventFromLine:(id)arg1;
- (long long)_actionFromString:(id)arg1;
- (long long)_triggerFromString:(id)arg1;
- (_Bool)_parseOptionalEntriesInLineFromWords:(id)arg1 argStartAt:(int *)arg2 argEndAt:(int *)arg3;
- (_Bool)_parseIntFromString:(id)arg1 destination:(int *)arg2;
- (void)_dumpAllEventAlterations;
- (id)_locateEventForModule:(id)arg1 forIdentity:(id)arg2 withTrigger:(long long)arg3 forEvent:(id)arg4 inState:(id)arg5;
- (id)_performSimulatedEventAlteration:(id)arg1;
- (void)_performingAlteration:(id)arg1;
- (void)adoptAllEventAlterations:(id)arg1;
- (void)clearAllEventAlterations;
- (void)dumpAllEventAlterations;
- (int)countOfAlterationsPerformed;
- (id)lastAlterationPerformed;
- (id)begin:(id)arg1 atFunction:(id)arg2;
- (id)end:(id)arg1 atFunction:(id)arg2;
- (void)registerCallbackHandler:(CDUnknownBlockType)arg1;
- (id)fsm:(id)arg1 forEvent:(id)arg2 inState:(id)arg3;

@end
