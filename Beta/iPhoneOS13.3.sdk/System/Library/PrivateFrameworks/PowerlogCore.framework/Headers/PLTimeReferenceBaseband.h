/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@class PLNSNotificationOperatorComposition;

@interface PLTimeReferenceBaseband

{
    _Bool _followupCurrentTimeRunning;
    PLNSNotificationOperatorComposition *_basebandTimeNotification;
}

@property (retain) PLNSNotificationOperatorComposition *basebandTimeNotification;
@property _Bool followupCurrentTimeRunning;

- (void)dealloc;
- (id)currentTime;
- (id)initWithTimeManager:(id)arg1 entryDefinitionKey:(id)arg2 timeReferenceType:(long long)arg3;
- (void)timeChangedNotificationReceived:(id)arg1;
- (void)registerForTimeChangedNotification;

@end
