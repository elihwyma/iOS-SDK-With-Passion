/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKGraphViewController.h>

@class NSString;

@interface HKDateGraphViewController : HKGraphViewController

{
    _Bool _hasSetVisibleDateRange;
    _Bool _disableXAxis;
    long long _dayScopeType;
    struct CGSize _minimumSize;
}

@property (nonatomic) struct CGSize minimumSize;
@property (nonatomic) _Bool disableXAxis;
@property (nonatomic) long long dayScopeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setDetailView:(id)arg1;
- (void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;
- (void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2;
- (id)initWithDateZoom:(long long)arg1 previousDateZoom:(long long)arg2 previousXAxisSpace:(double)arg3;
- (void)_setupGraphViewSelectionStyle;
- (id)_createGraphViewWithDateZoom:(long long)arg1 previousDateZoom:(long long)arg2 previousXAxisSpace:(double)arg3;
- (id)_dateAxisStyle;
- (id)_xAxisLabelFont;
- (void)_marginStyleChangeForContext:(long long)arg1 graphView:(id)arg2;

@end
