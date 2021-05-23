/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface PMiOSScrubberCollectionViewCell : UICollectionViewCell

{
    UIImageView *_imageview;
}

@property (weak, nonatomic) UIImageView *imageview;

- (void)prepareForReuse;
- (void)setImage:(id)arg1;

@end
