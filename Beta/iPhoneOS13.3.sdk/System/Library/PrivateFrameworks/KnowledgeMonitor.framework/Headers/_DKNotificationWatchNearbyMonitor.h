/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class NSDate, NSString, _DKEvent;

@interface _DKNotificationWatchNearbyMonitor : _DKMonitor

{
    _Bool _enabled;
    int _token;
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
+ (_Bool)shouldMergeUnchangedEvents;
+ (void)setIsWatchNearby:(_Bool)arg1;
+ (id)_eventWithNearbyDeviceCount:(unsigned long long)arg1;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)receiveNotificationEvent:(id)arg1;
- (void)deactivate;
- (void)setWatchIsNearby;

@end
