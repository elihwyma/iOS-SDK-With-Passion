/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface VUICollectionViewCell : UICollectionViewCell

{
    UIView *_childView;
}

@property (retain, nonatomic) UIView *childView;

- (void)prepareForReuse;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
