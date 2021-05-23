/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PVColorSpace : NSObject

{
    int _type;
}

+ (id)sRGBColorSpace;
+ (id)extendedSRGBColorSpace;
+ (id)pvColorSpaceFromCGColorSpace:(struct CGColorSpace *)arg1;
+ (id)p3d65GammaColorSpace;
+ (id)rec601GammaColorSpace;
+ (id)rec601LinearColorSpace;
+ (id)rec709GammaColorSpace;
+ (id)rec709LinearColorSpace;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)name;
- (id)initWithType:(int)arg1;
- (struct CGColorSpace *)cgColorSpace;
- (_Bool)isP3d65GammaColorSpace;
- (_Bool)isWideGamutSpace;
- (_Bool)isExtendedSRGBColorSpace;
- (_Bool)isSRGBColorSpace;
- (_Bool)isEqualToCGColorSpace:(struct CGColorSpace *)arg1;
- (_Bool)isRec601GammaColorSpace;
- (_Bool)isRec601LinearColorSpace;
- (_Bool)isRec709GammaColorSpace;
- (_Bool)isRec709LinearColorSpace;

@end
