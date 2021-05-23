/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class EspressoBrickTensorShape;

@interface EspressoBrickTensor : NSObject

{
    EspressoBrickTensorShape *_shape;
}

@property (retain) EspressoBrickTensorShape *shape;

- (id)init;

@end
