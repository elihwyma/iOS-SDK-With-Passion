/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class UIColor;

@interface PUPhotoDecoration : NSObject <Swift>

{
    UIColor *_borderColor;
    double _borderWidth;
    UIColor *_foregroundColor;
}

@property (copy, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) UIColor *foregroundColor;

+ (id)defaultDecoration;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)photoDecorationVariantsWithIncreasingAlpha:(long long)arg1;
- (id)photoDecorationVariantsWithIncreasingBorderBrightness:(long long)arg1;

@end
