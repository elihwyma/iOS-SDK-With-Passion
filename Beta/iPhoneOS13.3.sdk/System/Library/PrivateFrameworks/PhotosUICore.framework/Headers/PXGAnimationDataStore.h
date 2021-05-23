/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSMutableIndexSet, NSString;

@interface PXGAnimationDataStore : NSObject

{
    unsigned int _spriteCapacity;
    unsigned short _groupCapacity;
    unsigned int _mappedSpriteCapacity;
    unsigned short _mappedAnimationCapacity;
    NSMutableIndexSet *_activeGroupIndexes;
    unsigned short _mappedAnimationCount;
    unsigned int _spriteCount;
    unsigned int _mappedSpriteCount;
    CDStruct_866a3d3a *_spriteInfos;
    CDStruct_c4a51d40 *_groupInfos;
    unsigned short *_animationIndexBySpriteIndex;
    unsigned short *_groupIndexByAnimationIndex;
}

@property (nonatomic) unsigned int spriteCount;
@property (nonatomic, readonly) CDStruct_866a3d3a *spriteInfos;
@property (copy, nonatomic, readonly) NSIndexSet *activeGroupIndexes;
@property (nonatomic, readonly) CDStruct_c4a51d40 *groupInfos;
@property (nonatomic) unsigned int mappedSpriteCount;
@property (nonatomic, readonly) unsigned short *animationIndexBySpriteIndex;
@property (nonatomic) unsigned short mappedAnimationCount;
@property (nonatomic, readonly) unsigned short *groupIndexByAnimationIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *diagnosticDescription;

- (id)init;
- (void)dealloc;
- (void)applySpriteChangeDetails:(id)arg1;
- (id)spriteIndexesExpiringAtTime:(double)arg1;
- (unsigned short)checkOutGroup;
- (void)_resizeStorageToGroupIndex:(unsigned short)arg1;
- (void)checkInGroupAtIndexes:(id)arg1;
- (void)increaseMappedSpriteCountBy:(unsigned int)arg1 usingAnimationIndex:(unsigned short)arg2;

@end
