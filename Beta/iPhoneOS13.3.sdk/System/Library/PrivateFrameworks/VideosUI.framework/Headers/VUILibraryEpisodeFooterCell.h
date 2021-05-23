/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSNumber, NSString, UIButton, VUISeparatorView;

@protocol VUILibraryEpisodeFooterCellDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryEpisodeFooterCell : UICollectionViewCell

{
    NSString *_title;
    NSNumber *_storeID;
    id <VUILibraryEpisodeFooterCellDelegate> _delegate;
    VUISeparatorView *_topSeparatorView;
    VUISeparatorView *_bottomSeparatorView;
    UIButton *_titleButton;
}

@property (retain, nonatomic) VUISeparatorView *topSeparatorView;
@property (retain, nonatomic) VUISeparatorView *bottomSeparatorView;
@property (retain, nonatomic) UIButton *titleButton;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *storeID;
@property (weak, nonatomic) id <VUILibraryEpisodeFooterCellDelegate> delegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_titleButtonPressed:(id)arg1;

@end
