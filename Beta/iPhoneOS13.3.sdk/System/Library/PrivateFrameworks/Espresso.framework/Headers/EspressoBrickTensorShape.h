/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@interface EspressoBrickTensorShape : NSObject

{
    int _width;
    int _height;
    int _channels;
    int _batch;
    int _sequence;
    int _rank;
}

@property int width;
@property int height;
@property int channels;
@property int batch;
@property int sequence;
@property int rank;

@end
