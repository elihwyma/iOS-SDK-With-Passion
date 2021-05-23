/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@interface AVTMinimumContentSizeCollectionViewLayout : UICollectionViewFlowLayout

{
    struct CGSize _minimumContentSize;
}

@property (nonatomic) struct CGSize minimumContentSize;

- (struct CGSize)collectionViewContentSize;

@end
