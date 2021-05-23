/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSArray, NSMutableArray, UIScrollView, UISegment, UISegmentedControl;

__attribute__((visibility("hidden")))
@interface UIAccessibilityLargeTextSegmentedViewController : UIViewController

{
    UISegmentedControl *_segmentedControl;
    NSMutableArray *_segmentButtons;
    UISegment *_originalSelectedSegment;
    NSArray *_segments;
    UIScrollView *_mainScrollView;
}

@property (retain, nonatomic) UISegment *originalSelectedSegment;
@property (retain, nonatomic) NSArray *segments;
@property (retain, nonatomic) UIScrollView *mainScrollView;
@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (retain, nonatomic) NSMutableArray *segmentButtons;

- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (id)segmentFromSegment:(id)arg1;
- (void)_configureSegmentViews;
- (void)_orientationChanged:(id)arg1;
- (void)buttonPress:(id)arg1;
- (void)buttonTouchDown:(id)arg1;
- (void)buttonTouchUp:(id)arg1;
- (id)initWithSegmentedControl:(id)arg1 segments:(id)arg2 delegate:(id)arg3;

@end
