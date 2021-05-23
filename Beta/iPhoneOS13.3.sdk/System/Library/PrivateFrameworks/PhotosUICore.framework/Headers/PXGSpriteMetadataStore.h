/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableIndexSet;

@interface PXGSpriteMetadataStore : NSObject

{
    unsigned short _resizableCapInsetsCapacity;
    CDStruct_0054b44d *_resizableCapInsets;
    unsigned short _effectsCapacity;
    CDStruct_ee569e91 *_effectData;
    int *_effectShaderFlags;
    NSMutableIndexSet *_reusableEffectIds;
    unsigned short _numberOfResizableCapInsets;
    unsigned short _numberOfEffects;
}

@property (nonatomic, readonly) unsigned short numberOfResizableCapInsets;
@property (nonatomic, readonly) const CDStruct_0054b44d *resizableCapInsets;
@property (nonatomic, readonly) unsigned short numberOfEffects;
@property (nonatomic, readonly) const CDStruct_ee569e91 *effectData;
@property (nonatomic, readonly) const int *effectShaderFlags;

- (id)init;
- (void)dealloc;
- (unsigned short)addResizableCapInsets:(CDStruct_0054b44d)arg1;
- (unsigned short)_indexOfResizableCapInsets:(CDStruct_0054b44d)arg1;
- (unsigned short)addEffectWithShaderFlags:(int)arg1;
- (void)removeEffectWithId:(unsigned short)arg1;
- (CDStruct_ee569e91 *)dataForEffectId:(unsigned short)arg1;

@end
