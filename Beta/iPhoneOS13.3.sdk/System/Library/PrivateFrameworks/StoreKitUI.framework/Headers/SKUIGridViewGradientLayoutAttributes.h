/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewLayoutAttributes.h>

#import <StoreKitUI/Swift-Protocol.h>

@class IKColor;

__attribute__((visibility("hidden")))
@interface SKUIGridViewGradientLayoutAttributes : UICollectionViewLayoutAttributes <Swift>

{
    IKColor *_gradientColor;
}

@property (retain, nonatomic) IKColor *gradientColor;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
