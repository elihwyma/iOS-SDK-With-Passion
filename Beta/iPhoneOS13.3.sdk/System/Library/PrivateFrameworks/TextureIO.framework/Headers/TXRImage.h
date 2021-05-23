/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

#import <TextureIO/Swift-Protocol.h>

@class NSError;

@protocol TXRBuffer, TXRDataSourceProvider;

@interface TXRImage : NSObject <Swift>

{
    id <TXRBuffer> _buffer;
    unsigned long long _offset;
    unsigned long long _bytesPerImage;
    unsigned long long _bytesPerRow;
    NSError *_error;
    long long _face;
    unsigned long long _element;
    unsigned long long _level;
    id <TXRDataSourceProvider> _dataSourceProvider;
}

@property (readonly) unsigned long long offset;
@property (readonly) id <TXRBuffer> buffer;
@property (readonly) unsigned long long bytesPerRow;
@property (readonly) unsigned long long bytesPerImage;
@property (readonly) NSError *error;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)deferredProvide;
- (id)initWithBytesPerRow:(unsigned long long)arg1 bytesPerImage:(unsigned long long)arg2 buffer:(id)arg3 offset:(unsigned long long)arg4;
- (id)initAsLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 dataSourceProvider:(id)arg4;

@end
