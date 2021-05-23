/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSIndexSet, NSMutableIndexSet, NSString;

@protocol OS_dispatch_queue;

@interface PXGBaseTexture : NSObject <Swift>

{
    NSMutableIndexSet *_spriteIndexes;
    NSObject<OS_dispatch_queue> *_syncQueue;
    struct {
        int _field1;
        unsigned int _field2;
    } *_syncQueue_pendingImageRequestInfo;
    unsigned long long _syncQueue_pendingImageRequestInfoCount;
    unsigned long long _syncQueue_pendingImageRequestInfoCapacity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int spriteCount;
@property (nonatomic, readonly) NSIndexSet *spriteIndexes;
@property (nonatomic, readonly) long long estimatedByteSize;
@property (nonatomic, readonly) int presentationType;
@property (nonatomic, readonly) struct CGImage *imageRepresentation;
@property (nonatomic, readonly) struct CGSize pixelSize;
@property (nonatomic, readonly) _Bool isOpaque;

- (id)init;
- (void)dealloc;
- (void)getSpriteIndexes:(unsigned int *)arg1 maxSpriteCount:(unsigned int)arg2;
- (void)enumerateSpriteIndexes:(CDUnknownBlockType)arg1;
- (_Bool)containsSpriteIndex:(unsigned int)arg1;
- (void)applyChangeDetails:(id)arg1;
- (void)addSpriteWithTextureRequestID:(int)arg1 deliveryOrder:(unsigned int)arg2;
- (void)processPendingTextureRequestIDsWithHandler:(CDUnknownBlockType)arg1;
- (void)removeSpriteIndex:(unsigned int)arg1;
- (void)_syncQueue_resizeStorageIfNeeded;
- (void)_addSpriteIndex:(unsigned int)arg1;
- (void)addSpriteIndexRange:(struct _NSRange)arg1;

@end
