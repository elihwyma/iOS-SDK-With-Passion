/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/_NUAbstractBufferStorage.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NSString, NUPixelFormat, NURegion;

@interface NUBufferStorage : _NUAbstractBufferStorage <Swift>

{
    long long _purgeLevel;
    long long _length;
    long long _rowBytes;
    void *_bytes;
    _Bool _purgeable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDStruct_912cb5d2 size;
@property (nonatomic, readonly) NUPixelFormat *format;
@property (nonatomic, readonly) long long rowBytes;
@property (nonatomic, readonly) const void *bytes;
@property (nonatomic, readonly) void *mutableBytes;
@property (readonly) long long sizeInBytes;
@property (readonly) NURegion *validRegion;

- (void)dealloc;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (_Bool)isPurgeable;
- (_Bool)isPurged;
- (_Bool)makeNonPurgeable;
- (void)makePurgeable;
- (long long)purgeLevel;
- (void)adjustPurgeLevel:(long long)arg1;
- (long long)readBufferInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)writeBufferInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)useAsCIImageWithOptions:(id)arg1 renderer:(id)arg2 block:(CDUnknownBlockType)arg3;
- (long long)useAsCIRenderDestinationWithRenderer:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)newRenderDestination;
- (void *)_allocateMemory:(long long)arg1;
- (void)_deallocateMemory;
- (int)_fetchPurgeState:(int *)arg1;
- (id)_purgeStateDescription;
- (int)_purgeLevelToOSValue:(long long)arg1;

@end
