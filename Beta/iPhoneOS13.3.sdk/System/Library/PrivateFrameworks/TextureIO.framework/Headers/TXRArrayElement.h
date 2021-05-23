/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

#import <TextureIO/Swift-Protocol.h>

@class NSArray, NSMutableArray;

@interface TXRArrayElement : NSObject <Swift>

{
    NSMutableArray *_faces;
}

@property (readonly) NSArray *faces;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initAsLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 cubemap:(_Bool)arg3 dataSourceProvider:(id)arg4;
- (id)initAsLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 dimensions:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4 alphaInfo:(_Bool)arg5 cubemap:(id)arg6 bufferAllocator: /* Error: Ran out of types for this method. */;
- (void)setImage:(id)arg1 atFace:(unsigned long long)arg2;

@end
