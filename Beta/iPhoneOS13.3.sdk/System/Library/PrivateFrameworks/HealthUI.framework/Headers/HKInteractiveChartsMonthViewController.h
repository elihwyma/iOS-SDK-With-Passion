/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKMonthViewController.h>

@class HKHealthStore, HKSampleType, HKWeekdayHeaderPaletteView, NSPredicate, UIColor, _UINavigationControllerPalette;

@interface HKInteractiveChartsMonthViewController : HKMonthViewController

{
    HKSampleType *_sampleType;
    UIColor *_sampleColor;
    NSPredicate *_additionalSamplePredicate;
    _UINavigationControllerPalette *_containingPalette;
    HKWeekdayHeaderPaletteView *_weekdayHeaderPaletteView;
    HKHealthStore *_healthStore;
}

@property (retain, nonatomic) _UINavigationControllerPalette *containingPalette;
@property (retain, nonatomic) HKWeekdayHeaderPaletteView *weekdayHeaderPaletteView;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKSampleType *sampleType;
@property (retain, nonatomic) UIColor *sampleColor;
@property (retain, nonatomic) NSPredicate *additionalSamplePredicate;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)dismissViewController:(id)arg1;
- (id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 date:(id)arg3;
- (void)calendarScrollViewController:(id)arg1 accessoryViewForDate:(id)arg2 accessoryViewCompletion:(CDUnknownBlockType)arg3;
- (void)didTapTodayButton;

@end
