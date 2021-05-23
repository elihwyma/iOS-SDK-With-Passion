/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <Espresso/EspressoBrickTensor.h>

@protocol MTLTexture;

@interface EspressoBrickTensorMetal : EspressoBrickTensor

{
    id <MTLTexture> _texture;
}

@property (retain) id <MTLTexture> texture;

@end
