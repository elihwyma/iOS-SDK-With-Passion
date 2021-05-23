/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSHashTable, PCPersistentTimer;

@protocol SBHSidebarWidgetLearningDataSource;

@interface SBHSidebarWidgetBootstrappingAdvisor : NSObject

{
    PCPersistentTimer *_widgetLearningCadenceUpdateTimer;
    NSHashTable *_observers;
    _Bool _shouldSidebarWidgetsBeInLearningMode;
    id <SBHSidebarWidgetLearningDataSource> _dataSource;
    double _learningDuration;
    unsigned long long _learningEpoch;
}

@property (nonatomic) _Bool shouldSidebarWidgetsBeInLearningMode;
@property (nonatomic, readonly) id <SBHSidebarWidgetLearningDataSource> dataSource;
@property (nonatomic, readonly) double learningDuration;
@property (nonatomic, readonly) unsigned long long learningEpoch;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (void)_notifyObservers;
- (void)_setupSidebarWidgetsLearningCadence;
- (id)initWithDataSource:(id)arg1 learningDuration:(double)arg2 learningEpoch:(unsigned long long)arg3;
- (void)_updateSidebarWidgetsCommenceDateIfEmpty;
- (_Bool)_requiresLearningCadenceForFavoriteWidgets:(_Bool *)arg1;
- (void)_updateSidebarWidgetsEpoch;
- (void)_scheduleWidgetLearningCadenceUpdateTimer:(_Bool)arg1;
- (void)_sidebarLearningPeriodTimeIsUp:(id)arg1;
- (void)noteSignificantSidebarStateChangeDidOccur;

@end
