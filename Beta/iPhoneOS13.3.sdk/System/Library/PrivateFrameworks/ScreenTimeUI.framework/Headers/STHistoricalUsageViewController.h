/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSObject, NSString, STUsageGraphViewController, STUsageSummaryTitleView, UIPageViewController, UIView;

@protocol STUsageDetailsViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STHistoricalUsageViewController : UIViewController

{
    NSObject<STUsageDetailsViewModelCoordinator> *_coordinator;
    STUsageSummaryTitleView *_titleView;
    long long _currentViewMode;
    unsigned long long _type;
    double _graphHeight;
    STUsageGraphViewController *_selectedWeekGraphViewController;
    STUsageGraphViewController *_selectedDayGraphViewController;
    UIPageViewController *_weekGraphPageViewController;
    UIPageViewController *_dayGraphPageViewController;
    UIView *_weekGraphContainerView;
    UIView *_dayGraphContainerView;
    NSLayoutConstraint *_weekGraphContainerHeightConstraint;
    NSLayoutConstraint *_dayGraphContainerHeightConstraint;
    double _maximumYAxisLabelWidth;
}

@property (readonly) unsigned long long type;
@property (readonly) double graphHeight;
@property (retain, nonatomic) STUsageGraphViewController *selectedWeekGraphViewController;
@property (retain) STUsageGraphViewController *selectedDayGraphViewController;
@property (retain) UIPageViewController *weekGraphPageViewController;
@property (retain) UIPageViewController *dayGraphPageViewController;
@property (retain) STUsageSummaryTitleView *titleView;
@property (retain) UIView *weekGraphContainerView;
@property (retain) UIView *dayGraphContainerView;
@property (retain) NSLayoutConstraint *weekGraphContainerHeightConstraint;
@property (retain) NSLayoutConstraint *dayGraphContainerHeightConstraint;
@property (nonatomic) double maximumYAxisLabelWidth;
@property long long currentViewMode;
@property (retain, nonatomic) NSObject<STUsageDetailsViewModelCoordinator> *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)historicalUsageViewControllerOfType:(unsigned long long)arg1 graphHeight:(double)arg2;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)_selectedWeekUsageReportDidChange:(id)arg1;
- (void)_selectedDayUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_selectedBarViewDidChangeFrom:(id)arg1 to:(id)arg2;
- (id)_weekGraphViewControllerForWeek:(unsigned long long)arg1 usageReport:(id)arg2;
- (id)_dataSetFromUsageReport:(id)arg1;
- (id)_dayGraphViewControllerForDay:(unsigned long long)arg1 week:(unsigned long long)arg2 usageReport:(id)arg3;
- (id)_nextGraphViewControllerForPageViewController:(id)arg1 currentGraphViewController:(id)arg2 direction:(long long)arg3;

@end
