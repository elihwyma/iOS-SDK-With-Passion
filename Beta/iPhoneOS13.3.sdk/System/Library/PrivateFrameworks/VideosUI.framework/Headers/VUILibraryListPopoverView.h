/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSString, UICollectionView, UILabel, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUILibraryListPopoverView : UIView

{
    UILabel *_titleLabel;
    NSString *_title;
    UICollectionView *_collectionView;
    VUISeparatorView *_separatorView;
    UIView *_titleContainerView;
}

@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) UIView *titleContainerView;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) UICollectionView *collectionView;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;

@end
