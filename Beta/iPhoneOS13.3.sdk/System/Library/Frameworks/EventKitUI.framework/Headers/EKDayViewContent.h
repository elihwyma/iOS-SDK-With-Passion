/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class EKCalendarDate, EKDayGridView, EKEvent, NSCalendar, NSMutableArray, NSString, NSTimeZone, UIColor, UITraitCollection;

@protocol EKDayViewContentDelegate;

@interface EKDayViewContent : UIView

{
    EKDayGridView *_grid;
    UIView *_saturdayDarkeningView;
    UIView *_sundayDarkeningView;
    unsigned long long _daysToDisplay;
    NSMutableArray *_lastLayoutWidthForDay;
    _Bool _loadingOccurrences;
    _Bool _putSelectionOnTop;
    _Bool _hasCustomOccurrencePadding;
    EKEvent *_selectedEvent;
    NSMutableArray *_dayStarts;
    NSMutableArray *_itemsForPreloadByDay;
    NSMutableArray *_itemsForPreloadByDayByEndDate;
    NSMutableArray *_itemsByDay;
    NSMutableArray *_itemsByDayByEndDate;
    struct CGRect _latestVisibleRect;
    double *_visiblePinnedStackHeightAbove;
    double *_visiblePinnedStackHeightBelow;
    NSMutableArray *_geometryDelegates;
    NSMutableArray *_reusableViews;
    _Bool _dataLoaded;
    long long _sizeClass;
    _Bool _shouldLayoutInReverse;
    _Bool _shouldAnimateLayout;
    NSMutableArray *_temporaryViewCacheByDay;
    long long _saveTemporaryViewsEntryCount;
    _Bool _offscreenOccurrencePinningEnabled;
    _Bool _allowsOccurrenceSelection;
    _Bool _eventsFillGrid;
    _Bool _usesSmallText;
    _Bool _darkensWeekends;
    _Bool _reduceLayoutProcessingForAnimation;
    EKCalendarDate *_startDate;
    EKCalendarDate *_endDate;
    NSCalendar *_calendar;
    UITraitCollection *_stagedTraitCollection;
    id <EKDayViewContentDelegate> _delegate;
    double _fixedDayWidth;
    UIColor *_occurrenceTitleColor;
    UIColor *_occurrenceTimeColor;
    UIColor *_occurrenceLocationColor;
    UIColor *_occurrenceTextBackgroundColor;
    long long _occurrenceBackgroundStyle;
    EKEvent *_dimmedOccurrence;
    struct UIEdgeInsets _occurrencePadding;
}

@property (retain, nonatomic) UITraitCollection *stagedTraitCollection;
@property (copy, nonatomic) EKCalendarDate *startDate;
@property (nonatomic, readonly) EKCalendarDate *endDate;
@property (copy, nonatomic) NSCalendar *calendar;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (weak, nonatomic) id <EKDayViewContentDelegate> delegate;
@property (nonatomic) _Bool offscreenOccurrencePinningEnabled;
@property (nonatomic) _Bool allowsOccurrenceSelection;
@property (nonatomic) _Bool showsLeftBorder;
@property (nonatomic) _Bool eventsFillGrid;
@property (nonatomic) _Bool usesSmallText;
@property (nonatomic) _Bool darkensWeekends;
@property (nonatomic) _Bool reduceLayoutProcessingForAnimation;
@property (nonatomic) double fixedDayWidth;
@property (retain, nonatomic) UIColor *occurrenceTitleColor;
@property (retain, nonatomic) UIColor *occurrenceTimeColor;
@property (retain, nonatomic) UIColor *occurrenceLocationColor;
@property (retain, nonatomic) UIColor *occurrenceTextBackgroundColor;
@property (nonatomic) long long occurrenceBackgroundStyle;
@property (nonatomic) struct UIEdgeInsets occurrencePadding;
@property (nonatomic, readonly) double firstEventSecond;
@property (retain, nonatomic, setter=selectEvent:) EKEvent *selectedEvent;
@property (retain, nonatomic) EKEvent *dimmedOccurrence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setOrientation:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (void)_tapRecognized:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 sizeClass:(long long)arg2 orientation:(long long)arg3 backgroundColor:(id)arg4 opaque:(_Bool)arg5 numberOfDaysToDisplay:(unsigned long long)arg6;
- (id)occurrenceViews;
- (void)setViewsDimmed:(_Bool)arg1 forEvent:(id)arg2;
- (id)grid;
- (void)setHoursToPadTop:(double)arg1;
- (void)_computeDayStartsAndEnds;
- (struct UIEdgeInsets)insetsForInterfaceLayout:(struct UIEdgeInsets)arg1;
- (id)allVisibleItems;
- (void)_adjustViewsForPinning;
- (id)dayStarts;
- (double)_dayWidth;
- (struct CGPoint)pointForDate:(double)arg1;
- (void)_layoutDaysIfVisible;
- (void)rectBecameVisible:(struct CGRect)arg1;
- (id)visibleItemsByDay;
- (_Bool)_layoutDayIfNeeded:(long long)arg1 isLoadingAsync:(_Bool)arg2;
- (void)_layoutDay:(unsigned long long)arg1 isLoadingAsync:(_Bool)arg2;
- (id)itemsForPreloadByDay;
- (struct _NSRange)_dayRangeForEventWithStartDate:(id)arg1 endDate:(id)arg2;
- (void)_configureOccurrenceViewMarginAndPadding:(id)arg1;
- (unsigned long long)_dayIndexForAllIndex:(unsigned long long)arg1;
- (void)applyContentItem:(id)arg1 toView:(id)arg2;
- (void)applyLoadedOccurrenceBatchStartingAtIndex:(long long)arg1 batchSize:(long long)arg2 fromArray:(id)arg3 withStartDate:(id)arg4 animated:(_Bool)arg5 reverse:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (struct _NSRange)_dayRangeForEvent:(id)arg1 useProposedTime:(_Bool)arg2;
- (void)loadOccurrences:(id)arg1;
- (void)saveTemporaryViews;
- (void)prepareForReuseIsReload:(_Bool)arg1;
- (void)movePreloadedItemsToVisible;
- (void)clearTemporaryViews;
- (void)applyLoadedOccurrencesWithBatching:(_Bool)arg1 animated:(_Bool)arg2 reverse:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_doOffscreenOccurrences;
- (_Bool)_getBottomPinRegion:(double *)arg1 dayIndex:(unsigned long long *)arg2 forPoint:(struct CGPoint)arg3;
- (double)dateForPoint:(struct CGPoint)arg1;
- (struct CGRect)RoundRectToScreenScaleForRect:(struct CGRect)arg1;
- (double)RoundToScreenScaleForFloat:(double)arg1;
- (double)RoundToScreenScale:(double)arg1;
- (void)dayOccurrenceViewSelected:(id)arg1 atPoint:(struct CGPoint)arg2 wasTapped:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 sizeClass:(long long)arg2 orientation:(long long)arg3;
- (void)setStartDateWithDateComponents:(id)arg1;
- (id)occurrenceViewForEvent:(id)arg1 onDate:(double)arg2;
- (id)occurrenceViewForEvent:(id)arg1;
- (id)lastDisplayedSecond;
- (void)configureOccurrenceViewForGestureController:(id)arg1;
- (void)loadAndLayoutOccurrences:(id)arg1 reverse:(_Bool)arg2;
- (void)setOccurrences:(id)arg1;
- (_Bool)eventsIntersectRect:(struct CGRect)arg1;

@end
