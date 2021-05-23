/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIImage.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SKUICompressedImage : UIImage

{
    long long _cornerType;
    double _cornerRadius;
    double _borderWidth;
    UIColor *_borderColor;
}

@property (nonatomic) long long cornerType;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;

- (id)description;

@end
