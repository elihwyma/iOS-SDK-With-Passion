/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <UIKit/UILabel.h>

@class NSNumberFormatter, UIViewPropertyAnimator;

@interface ASVPercentLozenge : UILabel

{
    NSNumberFormatter *_percentageFormatter;
    UIViewPropertyAnimator *_percentLozengeAnimator;
}

@property (retain, nonatomic) NSNumberFormatter *percentageFormatter;
@property (retain, nonatomic) UIViewPropertyAnimator *percentLozengeAnimator;

- (id)init;
- (void)setText:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPercentage:(float)arg1;
- (id)lozengeFont;

@end
