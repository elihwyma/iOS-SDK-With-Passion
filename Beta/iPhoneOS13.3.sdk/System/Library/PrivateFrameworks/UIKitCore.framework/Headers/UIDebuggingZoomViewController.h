/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSObject, UIDebuggingZoomLineView, UIDebuggingZoomLoupeView, UILabel, UIPanGestureRecognizer, UISegmentedControl, UIView;

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UIDebuggingZoomViewController : UIViewController

{
    _Bool _useViewForEdges;
    unsigned long long _currentDirection;
    UIDebuggingZoomLoupeView *_loupe;
    UIDebuggingZoomLineView *_lineView;
    UIPanGestureRecognizer *_pan;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_queue;
    struct CGImage *_image;
    UILabel *_label;
    UILabel *_distanceLabel;
    UISegmentedControl *_directionSegmentedControl;
    UIView *_lastViewSeen;
}

@property (nonatomic) unsigned long long currentDirection;
@property (retain, nonatomic) UIDebuggingZoomLoupeView *loupe;
@property (retain, nonatomic) UIDebuggingZoomLineView *lineView;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct CGImage *image;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UISegmentedControl *directionSegmentedControl;
@property (nonatomic) _Bool useViewForEdges;
@property (retain, nonatomic) UIView *lastViewSeen;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (struct CGImage *)newCaptureSnapshotAtRect:(struct CGRect)arg1 window:(id)arg2;
- (void)toggleDirection:(id)arg1;
- (void)toggleMode:(id)arg1;
- (void)updateGesture:(id)arg1;
- (id)drawViewLinesAtPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (id)drawLinesAtPoint:(struct CGPoint)arg1;
- (void)toggleMeasuring:(id)arg1;

@end
