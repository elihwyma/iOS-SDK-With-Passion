/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADColor.h>

__attribute__((visibility("hidden")))
@interface OADRgbColor : OADColor

{
    float mRed;
    float mGreen;
    float mBlue;
}

+ (id)white;
+ (id)black;
+ (id)rgbColorWithTSUColor:(id)arg1;
+ (id)rgbColorWithRedByte:(float)arg1 greenByte:(float)arg2 blueByte:(float)arg3;
+ (id)rgbColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)rgbColorWithWhite:(float)arg1;
+ (id)rgbColorWithWhiteByte:(float)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)red;
- (float)green;
- (float)blue;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (_Bool)isWhite;
- (_Bool)isBlack;
- (id)initWithRedByte:(float)arg1 greenByte:(float)arg2 blueByte:(float)arg3;
- (unsigned char)redByte;
- (unsigned char)greenByte;
- (unsigned char)blueByte;
- (id)initWithWhite:(float)arg1;
- (id)initWithWhiteByte:(float)arg1;
- (id)rgbColorWithFraction:(float)arg1 ofRgbColor:(id)arg2;

@end
