/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

@class NSString, TXRDefaultBuffer;

__attribute__((visibility("hidden")))
@interface TXRDefaultBufferMap : NSObject

{
    void *_bytes;
    TXRDefaultBuffer *_buffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) void *bytes;

- (id)initForBuffer:(id)arg1 withBytes:(void *)arg2;

@end
