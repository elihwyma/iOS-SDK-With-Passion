//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXUserEventTrackerCommon : NSObject
{
    id _currentSessionSender;
    NSUInteger _currentSessionSource;
    NSUInteger _currentSessionTab;
    double _currentLogStateStartDate;
    double _currentLogSubStateStartDate;
    double _currentLogSubSubStateStartDate;
    BOOL _applicationIsInForeground;
    NSUInteger _currentTab;
    BOOL _enableDetailedDebugLogging;
    NSUInteger _currentLogState;
    NSUInteger _currentLogSubState;
    NSUInteger _currentLogSubSubState;
}

@property(nonatomic) NSUInteger currentLogSubSubState; // @synthesize currentLogSubSubState=_currentLogSubSubState;
@property(nonatomic) NSUInteger currentLogSubState; // @synthesize currentLogSubState=_currentLogSubState;
@property(nonatomic) NSUInteger currentLogState; // @synthesize currentLogState=_currentLogState;
@property(readonly, nonatomic) BOOL enableDetailedDebugLogging; // @synthesize enableDetailedDebugLogging=_enableDetailedDebugLogging;
@property(nonatomic, setter=setCurrentTab:) NSUInteger currentTab; // @synthesize currentTab=_currentTab;
// - (void).cxx_destruct;
- (id)PXLogSubSubStateDescription:(NSUInteger)arg1;
- (id)PXLogSubStateDescription:(NSUInteger)arg1;
- (id)PXLogStateDescription:(NSUInteger)arg1;
- (void)aggregateSetMemoryFeedNumberOfDaysSinceLastVisit:(long long)arg1;
- (void)didFinishViewingMemoriesFeedView;
- (void)willViewMemoriesFeedView;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)logImpressionCountForEventSource:(NSUInteger)arg1;
- (void)logCounterValuesForLogSubSubState:(NSUInteger)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogState:(NSUInteger)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogSubState:(NSUInteger)arg1 duration:(double)arg2;
- (void)logViewCountForLogSubSubState:(NSUInteger)arg1;
- (void)logViewCountForLogSubState:(NSUInteger)arg1;
- (void)logViewCountForLogState:(NSUInteger)arg1;
- (BOOL)isEventSourceSenderAppearingForTheFirstTime:(id)arg1;
- (void)setCurrentLogState:(NSUInteger)arg1 logSubState:(NSUInteger)arg2 logSubSubState:(NSUInteger)arg3 forceLogging:(BOOL)arg4;
- (void)_setCurrentSessionSource:(NSUInteger)arg1 sender:(id)arg2 isInForeground:(BOOL)arg3;
- (void)eventSourceDidChange:(NSUInteger)arg1 sender:(id)arg2;
- (void)eventSourceWillAppear:(NSUInteger)arg1 sender:(id)arg2;
- (void)eventSourceDidDisappear:(NSUInteger)arg1 sender:(id)arg2;
- (id)init;

@end

