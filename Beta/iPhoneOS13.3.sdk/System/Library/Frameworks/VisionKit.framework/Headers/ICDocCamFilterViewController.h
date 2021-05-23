/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIViewController.h>

#import <VisionKit/Swift-Protocol.h>

@class DCSinglePixelHorizontalLineView, DCSinglePixelVerticalLineView, NSArray, NSLayoutConstraint, NSMutableArray, NSString, UILongPressGestureRecognizer, UIScrollView, UIView;

@protocol ICDocCamFilterViewDelegate;

@interface ICDocCamFilterViewController : UIViewController <Swift>

{
    _Bool _transitioning;
    short _currentFilterType;
    double _horizontalOffset;
    double _bottomOffset;
    double _bottomContentInset;
    id <ICDocCamFilterViewDelegate> _filterViewDelegate;
    UIScrollView *_scrollView;
    NSLayoutConstraint *_scrollViewBottomConstraint;
    NSLayoutConstraint *_scrollViewTrailingConstraint;
    UIView *_backgroundView;
    DCSinglePixelVerticalLineView *_verticalLineView;
    DCSinglePixelHorizontalLineView *_horizontalLineView;
    NSArray *_layoutConstraints;
    NSMutableArray *_filterButtons;
    UILongPressGestureRecognizer *_longPressGesture;
}

@property (weak, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) DCSinglePixelVerticalLineView *verticalLineView;
@property (weak, nonatomic) DCSinglePixelHorizontalLineView *horizontalLineView;
@property (copy, nonatomic) NSArray *layoutConstraints;
@property (retain, nonatomic) NSLayoutConstraint *scrollViewBottomConstraint;
@property (nonatomic) _Bool transitioning;
@property (retain, nonatomic) NSMutableArray *filterButtons;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic) double horizontalOffset;
@property (nonatomic) double bottomOffset;
@property (nonatomic) double bottomContentInset;
@property (weak, nonatomic) id <ICDocCamFilterViewDelegate> filterViewDelegate;
@property (nonatomic) short currentFilterType;
@property (nonatomic, readonly) struct CGSize contentSize;
@property (nonatomic, readonly) NSLayoutConstraint *scrollViewTrailingConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)updateConstraints;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (_Bool)prefersStatusBarHidden;
- (void)longPressGesture:(id)arg1;
- (void)prepareToAnimateIn:(_Bool)arg1;
- (void)initializeFilters;
- (void)updateScrollViewContentSize;
- (void)setUpScrollView;
- (void)centerContent:(_Bool)arg1 isPortrait:(_Bool)arg2;
- (void)updateConstraintsPad;
- (void)updateConstraintsPhone;
- (void)filterSelected:(id)arg1;
- (id)filterButtonFromLocation:(struct CGPoint)arg1;
- (void)applyToAll:(short)arg1;

@end
