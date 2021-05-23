/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface VUIListCollectionViewCell : UICollectionViewCell

{
    _Bool _shouldAppearSelected;
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (nonatomic) _Bool shouldAppearSelected;

- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;

@end
