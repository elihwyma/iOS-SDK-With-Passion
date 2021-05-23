/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

@class NSError;

@protocol TXRBuffer;

@interface TXRImageInfo : NSObject

{
    unsigned long long _offset;
    id <TXRBuffer> _buffer;
    unsigned long long _bytesPerRow;
    unsigned long long _bytesPerImage;
    NSError *_error;
}

@property (nonatomic) unsigned long long offset;
@property (retain, nonatomic) id <TXRBuffer> buffer;
@property (nonatomic) unsigned long long bytesPerRow;
@property (nonatomic) unsigned long long bytesPerImage;
@property (retain) NSError *error;

@end
