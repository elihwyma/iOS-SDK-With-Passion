/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSNumber, NSString, UILongPressGestureRecognizer, UIStackView;

@interface HUQuickControlSegmentedControl : UIView

{
    CDUnknownBlockType _selectionChangeHandler;
    NSNumber *_selectedSegmentIndex;
    NSArray *_segments;
    UIStackView *_segmentStackView;
    NSArray *_segmentViews;
    UILongPressGestureRecognizer *_gestureRecognizer;
    NSNumber *_trackingSegmentIndex;
}

@property (retain, nonatomic) UIStackView *segmentStackView;
@property (retain, nonatomic) NSArray *segmentViews;
@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) NSNumber *trackingSegmentIndex;
@property (copy, nonatomic) CDUnknownBlockType selectionChangeHandler;
@property (retain, nonatomic) NSNumber *selectedSegmentIndex;
@property (copy, nonatomic, readonly) NSArray *segments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasCenteredContent;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_setupConstraints;
- (void)_handleGesture:(id)arg1;
- (void)_updateSegmentViewsForUILayoutDirection;
- (void)_updateSegmentSelectionStateAnimated:(_Bool)arg1;
- (_Bool)preferVerticalLayout;
- (void)ensureCorrectHeaderViewOrientation;
- (id)initWithSegments:(id)arg1;

@end
