/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/_NUAbstractStorage.h>

@interface _NUAbstractBufferStorage : _NUAbstractStorage

{
    long long _rowBytes;
    const void *_bytes;
    void *_mutableBytes;
}

@property (readonly) long long sizeInBytes;
@property (readonly) long long rowBytes;
@property (readonly) const void *bytes;
@property (readonly) void *mutableBytes;

- (long long)copyFromStorage:(id)arg1 region:(id)arg2;
- (void *)mutableBytesAtPoint:(CDStruct_912cb5d2)arg1;
- (const void *)bytesAtPoint:(CDStruct_912cb5d2)arg1;

@end
