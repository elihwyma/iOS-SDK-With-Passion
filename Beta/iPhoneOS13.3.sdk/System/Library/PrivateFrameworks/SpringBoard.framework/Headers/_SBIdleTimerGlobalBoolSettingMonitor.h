/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/_SBIdleTimerGlobalNumericSettingMonitor.h>

@interface _SBIdleTimerGlobalBoolSettingMonitor : _SBIdleTimerGlobalNumericSettingMonitor

@property (nonatomic, readonly) _Bool boolValue;

- (id)formattedValue;
- (id)initWithLabel:(id)arg1 delegate:(id)arg2 updatingForNotification:(id)arg3 fetchingWith:(CDUnknownBlockType)arg4;

@end
