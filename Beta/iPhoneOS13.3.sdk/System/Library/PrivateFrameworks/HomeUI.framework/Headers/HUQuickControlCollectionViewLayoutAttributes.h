/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface HUQuickControlCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes

{
    unsigned long long _itemSize;
    unsigned long long _titlePosition;
}

@property (nonatomic) unsigned long long itemSize;
@property (nonatomic) unsigned long long titlePosition;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
