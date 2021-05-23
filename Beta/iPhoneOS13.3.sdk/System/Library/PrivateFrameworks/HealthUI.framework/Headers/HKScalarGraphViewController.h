/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKGraphViewController.h>

@interface HKScalarGraphViewController : HKGraphViewController

{
    double _minimumHeight;
}

@property (nonatomic, readonly) double minimumHeight;

- (void)loadView;
- (void)viewDidLoad;
- (id)initWithMinimumHeight:(double)arg1;
- (id)initWithMinimumHeight:(double)arg1 labelDimension:(id)arg2 labelEndings:(long long)arg3;
- (id)_buildGraphViewWithLabelDimension:(id)arg1 labelEndings:(long long)arg2;
- (void)_setupGraphViewSelectionStyle;
- (void)_pinView:(id)arg1 toParentView:(id)arg2;

@end
