/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXGDiagnosticsSpriteProbe : NSObject

{
    _Bool _active;
    CDUnknownBlockType _predicate;
    CDUnknownBlockType _tagDescriptor;
    CDUnknownBlockType _eventHandler;
}

@property (nonatomic, getter=isActive) _Bool active;
@property (copy, nonatomic) CDUnknownBlockType predicate;
@property (copy, nonatomic) CDUnknownBlockType tagDescriptor;
@property (copy, nonatomic) CDUnknownBlockType eventHandler;

+ (id)spriteDataStore;
+ (void)_recordEventIfNeededWithType:(long long)arg1 layout:(id)arg2 oldState:(const CDStruct_c691429e *)arg3 newState:(const CDStruct_c691429e *)arg4 userInfo:(id)arg5;
+ (id)activeSpriteProbes;
+ (void)layout:(id)arg1 willRemoveSprites:(CDStruct_92550dd7)arg2;
+ (void)layout:(id)arg1 didInsertSprites:(CDStruct_92550dd7)arg2;
+ (void)layout:(id)arg1 willChangeSprites:(CDStruct_92550dd7)arg2;
+ (void)layout:(id)arg1 didChangeSprites:(CDStruct_92550dd7)arg2;
+ (void)willRequestTextureForSpriteWithGeometry:(const CDStruct_3ab912e1 *)arg1 style:(const CDStruct_506f5052 *)arg2 info:(const CDStruct_9d1ebe49 *)arg3 inLayout:(id)arg4 textureInfo:(id)arg5;
+ (void)willAdjustSprites:(CDStruct_92550dd7)arg1 forAnimation:(id)arg2 appearing:(_Bool)arg3;
+ (void)didAdjustSprites:(CDStruct_92550dd7)arg1 forAnimation:(id)arg2 appearing:(_Bool)arg3;
+ (void)shouldUseDoubleSidedAnimationForSprites:(CDStruct_92550dd7)arg1 indexes:(id)arg2 animation:(id)arg3;

- (id)init;
- (void)_recordEventWithType:(long long)arg1 oldState:(const CDStruct_c691429e *)arg2 newState:(const CDStruct_c691429e *)arg3 userInfo:(id)arg4;
- (id)descriptionForSpriteState:(const CDStruct_c691429e *)arg1;
- (void)_recordEventIfNeededWithType:(long long)arg1 layout:(id)arg2 oldState:(const CDStruct_c691429e *)arg3 newState:(const CDStruct_c691429e *)arg4 userInfo:(id)arg5;

@end
