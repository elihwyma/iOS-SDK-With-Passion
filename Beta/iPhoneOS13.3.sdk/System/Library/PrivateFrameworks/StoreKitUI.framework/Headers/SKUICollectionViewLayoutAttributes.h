/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewLayoutAttributes.h>

#import <StoreKitUI/Swift-Protocol.h>

@class UIColor;

@interface SKUICollectionViewLayoutAttributes : UICollectionViewLayoutAttributes <Swift>

{
    UIColor *_backgroundColor;
    long long _position;
    double _zoomingImageAlpha;
    double _zoomingImageWidth;
    double _zoomingImageImposedAlphaOfOtherViews;
    double _zoomingImageLambda;
}

@property (nonatomic, getter=_zoomingImageLambda, setter=_setZoomingImageLambda:) double zoomingImageLambda;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long position;
@property (nonatomic) double zoomingImageAlpha;
@property (nonatomic) double zoomingImageWidth;
@property (nonatomic) double zoomingImageImposedAlphaOfOtherViews;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
