/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIViewController.h>

@class EKDayView, EKEvent, NSArray, NSDate, NSString, UIView;

@protocol EKEditItemViewControllerDelegate;

@interface EKDayPreviewController : UIViewController

{
    _Bool _firstshow;
    _Bool _userHasTappedToExpand;
    _Bool _isAnimating;
    NSArray *_cachedTimedEvents;
    UIView *_roundedView;
    EKDayView *_dayView;
    NSDate *_date;
    NSDate *_originalEventStartDate;
    NSDate *_originalEventEndDate;
    _Bool _hasOverriddenEventDates;
    NSDate *_overriddenEventStartDate;
    NSDate *_overriddenEventEndDate;
    long long _overriddenParticipantStatus;
    _Bool _hasOverriddenStatus;
    _Bool _requireScrollPositionCorrection;
    _Bool _hidesAllDayEvents;
    _Bool _respectsSelectedCalendarsFilter;
    unsigned long long _style;
    UIViewController *_hostingViewController;
    EKEvent *_event;
}

@property (nonatomic) unsigned long long style;
@property (weak, nonatomic) UIViewController *hostingViewController;
@property (nonatomic) _Bool hidesAllDayEvents;
@property (nonatomic) _Bool respectsSelectedCalendarsFilter;
@property (nonatomic) long long overriddenParticipantStatus;
@property (retain, nonatomic) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) _Bool presentModally;
@property (nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) _Bool useCustomBackButton;

- (void)reload;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (id)initWithDate:(id)arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4;
- (void)reloadWithNewDate:(id)arg1 overriddenEventStartDate:(id)arg2 overriddenEventEndDate:(id)arg3;
- (void)toggleExpandedState;
- (void)_setupAutoLayout;
- (void)_setupDayView;
- (void)_scrollDayViewToCorrectOffsetAnimated:(_Bool)arg1;
- (void)_setNewVisibleHourLabels;
- (id)_eventsForStartDate:(id)arg1 endDate:(id)arg2;
- (id)_selectedCalendars;
- (_Bool)_shouldShowAllVisibleEvents;
- (struct _NSRange)_displayedHoursRange;
- (id)_anchorEvent;
- (_Bool)_eventOccursOnThisDay:(id)arg1;
- (id)_dateForFirstHourMarker;
- (id)_hourMaskForEvents:(id)arg1;
- (double)_dayViewHeight;
- (id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;
- (void)renderPressHighlight:(_Bool)arg1;

@end
