/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKViewController.h>

@class HKCalendarScrollViewController, HKDateCache, NSDate, NSDateComponents, NSString, UILabel;

@protocol HKMonthViewControllerDelegate;

@interface HKMonthViewController : HKViewController

{
    NSDateComponents *_cachedDateComponents;
    _Bool _wantsShortTitleDate;
    id <HKMonthViewControllerDelegate> _delegate;
    NSDate *_currentDate;
    long long _titleAlignment;
    HKCalendarScrollViewController *_calendarScrollViewController;
    UILabel *_titleLabel;
    HKDateCache *_dateCache;
}

@property (retain, nonatomic) HKCalendarScrollViewController *calendarScrollViewController;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic, readonly) HKDateCache *dateCache;
@property (weak, nonatomic) id <HKMonthViewControllerDelegate> delegate;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic) _Bool wantsShortTitleDate;
@property (nonatomic) long long titleAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_updateBackButton;
- (void)createCalendarScrollViewController;
- (void)createTitleLabel;
- (id)_titleStringForDate:(id)arg1;
- (void)_setCurrentDate:(id)arg1;
- (void)_updateCurrentMonthBarButtonItemWithDate:(id)arg1;
- (void)_didTapBackButton;
- (void)calendarScrollViewController:(id)arg1 didSelectDate:(id)arg2;
- (void)calendarScrollViewController:(id)arg1 didUpdateCenteredMonth:(id)arg2;
- (id)initWithDateCache:(id)arg1 date:(id)arg2;
- (void)setCurrentDate:(id)arg1 animateIfPossible:(_Bool)arg2;

@end
