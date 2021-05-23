/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface AVTCollectionViewCell : UICollectionViewCell

{
    UIView *_subview;
}

@property (retain, nonatomic) UIView *subview;

+ (id)reuseIdentifier;

@end
