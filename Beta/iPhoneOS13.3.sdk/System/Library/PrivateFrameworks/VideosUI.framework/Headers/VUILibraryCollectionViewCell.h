/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class UIViewController, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUILibraryCollectionViewCell : UICollectionViewCell

{
    UIViewController *_viewController;
    VUISeparatorView *_topSeparatorView;
}

@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) VUISeparatorView *topSeparatorView;

- (void)prepareForReuse;
- (void)layoutSubviews;

@end
