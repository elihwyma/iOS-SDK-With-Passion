/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

#import <TextureIO/Swift-Protocol.h>

@interface TXROptions : NSObject <Swift>

{
    _Bool _cubemapFromVerticallyStackedImage;
    unsigned long long _originOperation;
    unsigned long long _colorSpaceHandling;
    _Bool _multiplyAlpha;
}

@property (nonatomic) _Bool cubemapFromVerticallyStackedImage;
@property (nonatomic) unsigned long long originOperation;
@property (nonatomic) unsigned long long colorSpaceHandling;
@property (nonatomic) _Bool multiplyAlpha;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
