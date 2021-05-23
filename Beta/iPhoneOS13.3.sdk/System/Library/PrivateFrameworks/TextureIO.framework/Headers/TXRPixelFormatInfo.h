/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

@interface TXRPixelFormatInfo : NSObject

+ (_Bool)isASTC:(unsigned long long)arg1;
+ (_Bool)isGammaEncoded:(unsigned long long)arg1;
+ (struct TXRImageMemoryLayout)packedMemoryLayoutForFormat:(unsigned long long)arg1 dimensions: /* Error: Ran out of types for this method. */;
+ (_Bool)hasAlpha:(unsigned long long)arg1;
+ (_Bool)isCompressed:(unsigned long long)arg1;
+ (_Bool)isETC2:(unsigned long long)arg1;
+ (unsigned char)pixelBytes:(unsigned long long)arg1;
+ (_Bool)isInteger:(unsigned long long)arg1;
+ (_Bool)isFloat:(unsigned long long)arg1;
+ (_Bool)isSRGB:(unsigned long long)arg1;
+ (_Bool)isBC1to5:(unsigned long long)arg1;
+ (_Bool)isBC6to7:(unsigned long long)arg1;
+ (_Bool)isPVRTC:(unsigned long long)arg1;
+ (unsigned char)componentsPerPixel:(unsigned long long)arg1;

@end
