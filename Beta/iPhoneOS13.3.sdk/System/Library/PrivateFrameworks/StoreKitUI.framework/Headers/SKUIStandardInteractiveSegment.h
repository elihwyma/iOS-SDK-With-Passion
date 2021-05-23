/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class CAMediaTimingFunction, NSAttributedString, NSString, UIImage, UIImageView, UILabel, UIView;

@interface SKUIStandardInteractiveSegment : UIControl

{
    UIView *_borderAndBackgroundContainerView;
    UIImage *_backgroundImage;
    UIImage *_borderImage;
    UIImageView *_borderImageView;
    _Bool _hasDirtyTitleLabelSize;
    _Bool _hasSetRelativeSelectionProgress;
    _Bool _hasValidCorneredImages;
    UIImageView *_highlightedBackgroundImageView;
    long long _highlightTransactionCount;
    CAMediaTimingFunction *_inverseProgressTimingFunction;
    UIImageView *_selectedBackgroundImageView;
    CAMediaTimingFunction *_progressTimingFunction;
    double _relativeSelectionProgress;
    long long _segmentPosition;
    UILabel *_titleLabel;
    NSAttributedString *_titleLabelAttributedString;
    struct CGSize _titleLabelSize;
    NSAttributedString *_attributedTitle;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (nonatomic) struct UIEdgeInsets contentEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double relativeSelectionProgress;
@property (nonatomic) long long segmentPosition;

+ (double)defaultHeight;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)tintColorDidChange;
- (id)_backgroundImage;
- (id)_borderImage;
- (void)_updateBorderAndBackgroundContainerViewTinting;
- (void)_reloadCorneredImages;
- (unsigned long long)_cornersForSegmentPosition:(long long)arg1;
- (struct CGSize)_titleLabelSize;
- (void)_applySelectionProgress;
- (void)_setNeedsReloadCorneredImages;
- (double)_normalizedSelectionProgressForRelativeSelectionProgress:(double)arg1;
- (id)_progressTimingFunction;
- (id)_inverseProgressTimingFunction;
- (id)_createCorneredImageWithScale:(double)arg1 forBorder:(_Bool)arg2;

@end
