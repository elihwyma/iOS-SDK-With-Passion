/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface MPAVClippingTableViewCell : UITableViewCell

{
    _Bool _shouldHideSectionBottomSeparator;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
    UIView *_clippingContentView;
    UIView *_clippingMaskView;
    struct UIEdgeInsets _clippingInsets;
}

@property (retain, nonatomic) UIView *clippingContentView;
@property (retain, nonatomic) UIView *clippingMaskView;
@property (nonatomic) struct UIEdgeInsets clippingInsets;
@property (nonatomic, readonly) UIView *topSeparatorView;
@property (nonatomic, readonly) UIView *bottomSeparatorView;
@property (nonatomic) _Bool shouldHideSectionBottomSeparator;

- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setAccessoryView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setShouldHaveFullLengthBottomSeparator:(_Bool)arg1;
- (void)_setShouldHaveFullLengthTopSeparator:(_Bool)arg1;

@end
