/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/_SBIdleTimerGlobalSettingMonitor.h>

@class NSNumber;

@interface _SBIdleTimerGlobalNumericSettingMonitor : _SBIdleTimerGlobalSettingMonitor

{
    NSNumber *_settingCache;
    CDUnknownBlockType _fetchSettingFromSource;
}

@property (nonatomic, readonly) NSNumber *numericValue;

- (void)dealloc;
- (id)formattedValue;
- (_Bool)_updateCache;
- (id)initWithLabel:(id)arg1 delegate:(id)arg2 updatingForNotification:(id)arg3 fetchingWith:(CDUnknownBlockType)arg4;
- (void)_settingChanged:(id)arg1;

@end
