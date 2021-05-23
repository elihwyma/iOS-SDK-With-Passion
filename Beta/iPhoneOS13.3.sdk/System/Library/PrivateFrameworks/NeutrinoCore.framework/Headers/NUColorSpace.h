/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NUColorSpace : NSObject

{
    struct CGColorSpace *_CGColorSpace;
}

@property (nonatomic, readonly) struct CGColorSpace *CGColorSpace;
@property (nonatomic, readonly) NSString *name;

+ (id)workingColorSpace;
+ (id)_loadICCProfileDataWithIdentifier:(id)arg1;
+ (id)sRGBColorSpace;
+ (id)sRGBLinearColorSpace;
+ (id)adobeRGBColorSpace;
+ (id)genericRGBColorSpace;
+ (id)genericRGBLinearColorSpace;
+ (id)genericGrayColorSpace;
+ (id)displayP3ColorSpace;
+ (id)displayP3LinearColorSpace;
+ (id)linearWideGamutColorSpace;
+ (struct CGColorSpace *)_newLinearWideGamutColorSpace;
+ (id)colorSpaceFromVideoColorProperties:(id)arg1;
+ (id)colorSpaceFromColorPrimaries:(id)arg1 transferFunction:(id)arg2 yccMatrix:(id)arg3;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)nu_updateDigest:(id)arg1;
- (id)initWithCGColorSpace:(struct CGColorSpace *)arg1;
- (id)initWithICCProfileData:(id)arg1;

@end
