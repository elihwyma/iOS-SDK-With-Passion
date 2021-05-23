/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <UIKit/UIView.h>

@class NSArray, NSNumber, UIGestureRecognizer, UIStackView;

@interface DOCTagColorPicker : UIView

{
    long long _selectedTagColor;
    UIGestureRecognizer *_changeColorTapGestureRecognizer;
    UIGestureRecognizer *_changeColorPanGestureRecognizer;
    NSArray *_dotViews;
    NSNumber *_previousSelectedTagColor;
    UIStackView *_stackView;
}

@property (nonatomic, readonly) NSArray *dotViews;
@property (retain, nonatomic) NSNumber *previousSelectedTagColor;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) long long selectedTagColor;
@property (nonatomic, readonly) UIGestureRecognizer *changeColorTapGestureRecognizer;
@property (nonatomic, readonly) UIGestureRecognizer *changeColorPanGestureRecognizer;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)handleChangeColor:(id)arg1;
- (id)selectedTagDotView;
- (void)setColorDotSpacing;
- (void)setSelectedTagColorForLocation:(struct CGPoint)arg1;

@end
