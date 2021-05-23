/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@class UIColor, UIVisualEffect;

@interface _UICollectionViewListLayoutAttributes : UICollectionViewLayoutAttributes

{
    UIColor *_separatorColor;
    UIVisualEffect *_separatorEffect;
    long long _appearanceStyle;
}

@property (nonatomic) long long appearanceStyle;
@property (copy, nonatomic) UIColor *separatorColor;
@property (retain, nonatomic) UIVisualEffect *separatorEffect;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
