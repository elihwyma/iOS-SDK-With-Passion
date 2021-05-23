/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSSet, NSString, _DKEvent;

@protocol OS_dispatch_queue;

@interface _DKMonitor : NSObject

{
    NSDictionary *_state;
    NSString *_bootSessionUUID;
    CDUnknownBlockType instantHandler;
    CDUnknownBlockType historicalHandler;
    CDUnknownBlockType shutdownHandler;
    NSDate *lastUpdate;
    _DKEvent *_currentEvent;
    NSMutableDictionary *_instantState;
    NSMutableDictionary *_historicalState;
    CDUnknownBlockType _eventComparator;
    CDUnknownBlockType _filter;
    long long _references;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _machTimeAtLastClockChange;
    NSDate *_dateAtLastClockChange;
    NSObject<OS_dispatch_queue> *_eventQueue;
}

@property unsigned long long machTimeAtLastClockChange;
@property (retain) NSDate *dateAtLastClockChange;
@property (retain, nonatomic) NSDate *lastUpdate;
@property (retain, nonatomic) _DKEvent *currentEvent;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *eventQueue;
@property (nonatomic, readonly) NSMutableDictionary *instantState;
@property (nonatomic, readonly) NSMutableDictionary *historicalState;
@property (copy, nonatomic) CDUnknownBlockType eventComparator;
@property (copy, nonatomic) CDUnknownBlockType filter;
@property (nonatomic, readonly) long long references;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic, readonly) NSSet *classesForSecureStateDecoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType instantHandler;
@property (copy, nonatomic) CDUnknownBlockType historicalHandler;
@property (copy, nonatomic) CDUnknownBlockType shutdownHandler;

+ (id)entitlements;
+ (id)eventStream;
+ (_Bool)shouldMergeUnchangedEvents;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)setCurrentEvent:(id)arg1 inferHistoricalState:(_Bool)arg2;
- (void)synchronouslyReflectCurrentValue;
- (void)update;
- (id)loadState;
- (void)saveState;
- (_Bool)instantMonitorNeedsActivation;
- (_Bool)instantMonitorNeedsDeactivation;
- (void)systemClockDidChange:(id)arg1;
- (void)invalidateInstantState;

@end
