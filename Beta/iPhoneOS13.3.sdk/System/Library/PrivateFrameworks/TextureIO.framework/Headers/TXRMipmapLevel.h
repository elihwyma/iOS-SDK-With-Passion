/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

#import <TextureIO/Swift-Protocol.h>

@class NSArray, NSMutableArray;

@interface TXRMipmapLevel : NSObject <Swift>

{
    NSMutableArray *_elements;
    unsigned long long _level;
}

@property (readonly) NSArray *elements;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initAsLevel:(unsigned long long)arg1 arrayLength:(unsigned long long)arg2 cubemap:(_Bool)arg3 dataSourceProvider:(id)arg4;
- (id)initAsLevel:(unsigned long long)arg1 dimensions:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 alphaInfo:(unsigned long long)arg4 arrayLength:(_Bool)arg5 cubemap:(id)arg6 bufferAllocator: /* Error: Ran out of types for this method. */;
- (void)setImage:(id)arg1 atElement:(unsigned long long)arg2 atFace:(unsigned long long)arg3;

@end
