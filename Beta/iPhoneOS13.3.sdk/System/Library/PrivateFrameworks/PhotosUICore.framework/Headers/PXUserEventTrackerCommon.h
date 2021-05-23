/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXUserEventTrackerCommon : NSObject

{
    id _currentSessionSender;
    unsigned long long _currentSessionSource;
    unsigned long long _currentSessionTab;
    double _currentLogStateStartDate;
    double _currentLogSubStateStartDate;
    double _currentLogSubSubStateStartDate;
    _Bool _applicationIsInForeground;
    unsigned long long _currentTab;
    _Bool _enableDetailedDebugLogging;
    unsigned long long _currentLogState;
    unsigned long long _currentLogSubState;
    unsigned long long _currentLogSubSubState;
}

@property (nonatomic) unsigned long long currentLogState;
@property (nonatomic) unsigned long long currentLogSubState;
@property (nonatomic) unsigned long long currentLogSubSubState;
@property (nonatomic, setter=setCurrentTab:) unsigned long long currentTab;
@property (nonatomic, readonly) _Bool enableDetailedDebugLogging;

- (id)init;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)willViewMemoriesFeedView;
- (void)didFinishViewingMemoriesFeedView;
- (_Bool)isEventSourceSenderAppearingForTheFirstTime:(id)arg1;
- (void)logViewCountForLogState:(unsigned long long)arg1;
- (void)logViewCountForLogSubState:(unsigned long long)arg1;
- (void)logViewCountForLogSubSubState:(unsigned long long)arg1;
- (void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogSubSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logImpressionCountForEventSource:(unsigned long long)arg1;
- (void)eventSourceDidDisappear:(unsigned long long)arg1 sender:(id)arg2;
- (void)eventSourceWillAppear:(unsigned long long)arg1 sender:(id)arg2;
- (void)eventSourceDidChange:(unsigned long long)arg1 sender:(id)arg2;
- (void)_setCurrentSessionSource:(unsigned long long)arg1 sender:(id)arg2 isInForeground:(_Bool)arg3;
- (void)setCurrentLogState:(unsigned long long)arg1 logSubState:(unsigned long long)arg2 logSubSubState:(unsigned long long)arg3 forceLogging:(_Bool)arg4;
- (void)aggregateSetMemoryFeedNumberOfDaysSinceLastVisit:(long long)arg1;
- (id)PXLogStateDescription:(unsigned long long)arg1;
- (id)PXLogSubStateDescription:(unsigned long long)arg1;
- (id)PXLogSubSubStateDescription:(unsigned long long)arg1;

@end
