/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKViewController.h>

#import <HealthUI/Swift-Protocol.h>

@class HKDateCache, HKMonthDayCell, NSCalendar, NSDate, NSMutableArray, NSString, UIScrollView;

@protocol HKCalendarScrollViewControllerDelegate;

@interface HKCalendarScrollViewController : HKViewController <Swift>

{
    unsigned long long _numberOfRows;
    NSCalendar *_calendar;
    HKDateCache *_dateCache;
    HKMonthDayCell *_selectedCell;
    NSDate *_initiallyCenteredDate;
    NSMutableArray *_weekViews;
    _Bool _needsInitialOffset;
    double _topInset;
    id <HKCalendarScrollViewControllerDelegate> _delegate;
}

@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) double topInset;
@property (weak, nonatomic) id <HKCalendarScrollViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setSelectedCell:(id)arg1;
- (struct CGRect)_visibleContentRect;
- (void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2;
- (void)week:(id)arg1 cellSelected:(id)arg2;
- (id)initWithSelectedDate:(id)arg1;
- (void)scrollToDate:(id)arg1 animateIfPossible:(_Bool)arg2;
- (id)_weekViewContainingTitleForThisMonth;
- (void)_selectTodayCell;
- (void)_createWeekViews;
- (struct CGPoint)_setWeekViewsToCenterDate:(id)arg1 forceUpdate:(_Bool)arg2;
- (double)_heightOfAllWeekCells;
- (void)_selectCellForDate:(id)arg1;
- (void)updateVisibleAccessoryViews;
- (id)_weekForDate:(id)arg1;
- (id)_weekViewForToday;
- (void)_pulseCircle;
- (id)_currentlyCenteredVisibleWeek;
- (id)_startDateToTileWeekViews:(id)arg1;
- (struct CGPoint)_centerPointToCenterDate:(id)arg1;
- (_Bool)_dateIsVisible:(id)arg1;
- (unsigned long long)_firstVisibleWeekIndex;
- (void)_findCenteredWeekAndUpdateTitleIfNecessary;
- (void)_refreshViewsAndUpdateToday;
- (void)scrollToToday;

@end
