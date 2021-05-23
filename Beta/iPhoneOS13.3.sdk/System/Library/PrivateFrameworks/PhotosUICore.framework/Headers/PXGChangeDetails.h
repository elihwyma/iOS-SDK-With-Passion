/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSIndexSet, NSString, PXArrayChangeDetails;

@interface PXGChangeDetails : NSObject <Swift>

{
    unsigned int *_nextSpriteIndexByPreviousSpriteIndex;
    long long _nextSpriteIndexByPreviousSpriteIndexCapacity;
    NSIndexSet *_spriteIndexesThatWereRemoved;
    NSIndexSet *_spriteIndexesThatWereInserted;
    NSIndexSet *_spriteIndexesThatWereModified;
    _Bool _hasMoves;
    char *_tempBuffer;
    long long _tempBufferCapacity;
    PXArrayChangeDetails *_cachedArrayChangeDetails;
    unsigned int _numberOfSpritesAfterChange;
    unsigned int _numberOfSpritesBeforeChange;
    long long _layoutVersionBeforeChange;
    long long _layoutVersionAfterChange;
}

@property (nonatomic, readonly) unsigned int numberOfSpritesAfterChange;
@property (nonatomic, readonly) unsigned int numberOfSpritesBeforeChange;
@property (nonatomic, readonly) PXGChangeDetails *inverse;
@property (nonatomic, readonly) _Bool hasAnyInsertionsRemovalsOrMoves;
@property (nonatomic, readonly) NSIndexSet *removedSpriteIndexes;
@property (nonatomic, readonly) NSIndexSet *insertedSpriteIndexes;
@property (nonatomic, readonly) NSIndexSet *modifiedSpriteIndexes;
@property (nonatomic, readonly) const unsigned int *spriteIndexAfterChangeBySpriteIndexBeforeChange;
@property (nonatomic, readonly) PXArrayChangeDetails *arrayChangeDetails;
@property (nonatomic) long long layoutVersionBeforeChange;
@property (nonatomic) long long layoutVersionAfterChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *diagnosticDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeSpritesAtIndexes:(id)arg1;
- (void)configureWithNumberOfSpritesAfterChange:(unsigned int)arg1 changeDetails:(id)arg2;
- (struct _PXGSpriteIndexRange)replaceRemovalsWithMovesToEndForIndexes:(id)arg1;
- (void)increaseNumberOfSpritesBy:(unsigned int)arg1;
- (struct _PXGSpriteIndexRange)splitIndexesIntoMovesToEndAndReinsertions:(id)arg1;
- (void)applySpriteTransferMap:(const unsigned int *)arg1;
- (void)_invalidateLayoutVersions;
- (void)_resizeStorageIfNeeded;
- (id)indexSetAfterApplyingChangeDetails:(id)arg1;
- (void)applyToSpriteIndexes:(unsigned int *)arg1 atIndexes:(id)arg2;
- (void)applyToArray:(void *)arg1 elementSize:(unsigned long long)arg2 countAfterChanges:(unsigned long long)arg3 insertionHandler:(CDUnknownBlockType)arg4 modifiedHandler:(CDUnknownBlockType)arg5;
- (void)applyToDictionary:(id)arg1 removalHandler:(CDUnknownBlockType)arg2;
- (void)_invalidateCachedArrayChangeDetails;

@end
