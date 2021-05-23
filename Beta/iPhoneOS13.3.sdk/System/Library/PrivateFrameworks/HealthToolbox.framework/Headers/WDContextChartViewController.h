/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKViewController.h>

@class HKDisplayTypeContextView, HKInteractiveChartViewController;

__attribute__((visibility("hidden")))
@interface WDContextChartViewController : HKViewController

{
    HKInteractiveChartViewController *_interactiveChartViewController;
    HKDisplayTypeContextView *_contextView;
}

@property (nonatomic, readonly) HKInteractiveChartViewController *interactiveChartViewController;
@property (nonatomic, readonly) HKDisplayTypeContextView *contextView;

- (void)viewDidLoad;
- (double)preferredHeight;
- (id)initWithInteractiveChartViewController:(id)arg1;

@end
