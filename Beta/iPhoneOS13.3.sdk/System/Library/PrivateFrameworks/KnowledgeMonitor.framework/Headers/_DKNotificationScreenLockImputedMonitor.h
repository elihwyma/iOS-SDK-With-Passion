/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class NSDate, NSString, _DKEvent;

@interface _DKNotificationScreenLockImputedMonitor : _DKMonitor

{
    _Bool _enabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType instantHandler;
@property (nonatomic, readonly) _DKEvent *currentEvent;
@property (copy, nonatomic) CDUnknownBlockType historicalHandler;
@property (copy, nonatomic) CDUnknownBlockType shutdownHandler;
@property (nonatomic, readonly) NSDate *lastUpdate;

+ (id)entitlements;
+ (id)eventStream;
+ (void)setIsLocked:(_Bool)arg1;
+ (id)_eventWithState:(id)arg1;
+ (_Bool)shouldMergeUnchangedEvents;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)receiveNotificationEvent:(id)arg1;
- (void)deactivate;
- (id)fetchMostRecentScreenLockStateEventFromKnowledgeStore;
- (void)setCurrentEventInInstantStateUsingLastKnowledgeStoreEvent;

@end
