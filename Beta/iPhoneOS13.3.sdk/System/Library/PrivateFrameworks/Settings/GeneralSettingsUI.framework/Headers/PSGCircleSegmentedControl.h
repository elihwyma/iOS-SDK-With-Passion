/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <UIKit/UIControl.h>

@class NSMutableArray, PSGCircleSegment, UIImage, UILabel, UIStackView;

@protocol PSGCircleSegmentedControlDelegate;

__attribute__((visibility("hidden")))
@interface PSGCircleSegmentedControl : UIControl

{
    NSMutableArray *_segmentPlaceholders;
    NSMutableArray *_segments;
    UIStackView *_stack;
    PSGCircleSegment *_selectedSegment;
    NSMutableArray *_segmentConstraints;
    NSMutableArray *_selectedSegmentConstraints;
    UIImage *_placeholderImage;
    UIImage *_buttonImage;
    UIImage *_highlightedImage;
    UIImage *_activeImage;
    id <PSGCircleSegmentedControlDelegate> _delegate;
    UILabel *_label;
}

@property (weak, nonatomic) id <PSGCircleSegmentedControlDelegate> delegate;
@property (retain, nonatomic) UILabel *label;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setSelectedSegmentIndex:(unsigned long long)arg1;
- (void)addSegmentWithTitle:(id)arg1;
- (id)_circleImageWithColor:(id)arg1 fillColor:(id)arg2 diameter:(double)arg3;
- (void)segmentTapped:(id)arg1;
- (void)setPositionConstraintsActive:(_Bool)arg1 forButtonAtIndex:(unsigned long long)arg2;
- (void)selectSegmentAtIndex:(unsigned long long)arg1;
- (void)menuButtonPressed;

@end
