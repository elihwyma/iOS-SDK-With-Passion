/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXGSpriteDataStore : NSObject

{
    unsigned int _capacity;
    unsigned int _count;
    CDStruct_3ab912e1 *_geometries;
    CDStruct_506f5052 *_styles;
    CDStruct_9d1ebe49 *_infos;
}

@property (nonatomic) unsigned int count;
@property (nonatomic, readonly) CDStruct_3ab912e1 *geometries;
@property (nonatomic, readonly) CDStruct_506f5052 *styles;
@property (nonatomic, readonly) CDStruct_9d1ebe49 *infos;
@property (nonatomic) CDStruct_92550dd7 sprites;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *diagnosticDescription;

+ (id)newSpriteDataStore;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)recycle;
- (void)removeSpritesInRange:(struct _PXGSpriteIndexRange)arg1;
- (void)moveSpritesInRange:(struct _PXGSpriteIndexRange)arg1 toRange:(struct _PXGSpriteIndexRange)arg2;
- (void)enumerateSpritesInRange:(struct _PXGSpriteIndexRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateSpritesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)insertSpritesInRange:(struct _PXGSpriteIndexRange)arg1;
- (void)moveSpritesFromIndexes:(struct __CFArray *)arg1 toIndexes:(id)arg2;
- (void)applyChangeDetails:(id)arg1;
- (CDStruct_92550dd7)spritesInRange:(struct _PXGSpriteIndexRange)arg1;
- (id)spriteIndexesInRect:(struct CGRect)arg1;
- (id)spriteIndexesWithMediaFlags:(unsigned char)arg1;
- (void)_collectSpriteIndexes:(id)arg1 inRange:(struct _PXGSpriteIndexRange)arg2 inRect:(struct CGRect)arg3;
- (id)spriteAtIndexes:(id)arg1 inRect:(struct CGRect)arg2;

@end
