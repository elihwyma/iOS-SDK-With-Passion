/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UICollectionViewCell.h>

@class NSArray, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface MiroAssetSuggestionsCollectionViewCell : UICollectionViewCell

{
    _Bool _isKeyAssetPicker;
    NSArray *_debugLabels;
    UILabel *_videoDurationLabel;
    UIView *_videoIndicator;
    UIView *_slomoIndicator;
    UILabel *_slomoDurationLabel;
    UIView *_timelapseIndicator;
    UILabel *_timelapseDurationLabel;
    UIImageView *_thumbnailView;
    UIView *_debugView;
    UIView *_debugGradient;
    UILabel *_debugLabel;
    NSLayoutConstraint *_videoIndicatorTopConstraint;
    NSLayoutConstraint *_videoIndicatorBottomConstraint;
    NSLayoutConstraint *_videoIndicatorLeadingConstraint;
    NSLayoutConstraint *_videoIndicatorTrailingConstraint;
    UIView *_selectionIndicator;
    UIView *_selectionIndicatorImageView;
}

@property (retain, nonatomic) UIImageView *thumbnailView;
@property (weak, nonatomic) UIView *debugView;
@property (weak, nonatomic) UIView *debugGradient;
@property (weak, nonatomic) UILabel *debugLabel;
@property (retain, nonatomic) NSLayoutConstraint *videoIndicatorTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *videoIndicatorBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *videoIndicatorLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *videoIndicatorTrailingConstraint;
@property (retain, nonatomic) UIView *selectionIndicator;
@property (retain, nonatomic) UIView *selectionIndicatorImageView;
@property (retain, nonatomic) NSArray *debugLabels;
@property (retain, nonatomic) UILabel *videoDurationLabel;
@property (retain, nonatomic) UIView *videoIndicator;
@property (retain, nonatomic) UIView *slomoIndicator;
@property (retain, nonatomic) UILabel *slomoDurationLabel;
@property (retain, nonatomic) UIView *timelapseIndicator;
@property (retain, nonatomic) UILabel *timelapseDurationLabel;
@property _Bool isKeyAssetPicker;

+ (id)circularGlyphViewWithName:(id)arg1 backgroundColor:(id)arg2;

- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1;
- (void)awakeFromNib;
- (void)applyLayoutAttributes:(id)arg1;
- (void)configureWithAsset:(id)arg1 selected:(_Bool)arg2;

@end
