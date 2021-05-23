/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet, NSString, PXAssetsTilingLayout, PXBasicTileAnimationOptions, PXSectionedChangeDetailsRepository, PXTilingChange;

@interface PXAssetsTileTransitionCoordinator : NSObject

{
    _Bool _treatRemovalsAsDeletes;
    _Bool _delayInsertions;
    _Bool __shouldCrossfade;
    PXTilingChange *__tilingChange;
    PXBasicTileAnimationOptions *__basicAnimationOptions;
    PXSectionedChangeDetailsRepository *__changeHistory;
    NSArray *__changeDetails;
    NSIndexSet *__kindsWithDisabledAnimation;
    NSIndexSet *__kindsCoveringContentTiles;
    NSIndexSet *__kindsCenteredOnContentTiles;
    PXAssetsTilingLayout *__fromLayout;
    PXAssetsTilingLayout *__toLayout;
}

@property (nonatomic, readonly) PXTilingChange *_tilingChange;
@property (nonatomic, readonly) PXBasicTileAnimationOptions *_basicAnimationOptions;
@property (nonatomic, readonly) _Bool _shouldCrossfade;
@property (nonatomic, readonly) PXSectionedChangeDetailsRepository *_changeHistory;
@property (nonatomic, readonly) NSArray *_changeDetails;
@property (nonatomic, readonly) NSIndexSet *_kindsWithDisabledAnimation;
@property (nonatomic, readonly) NSIndexSet *_kindsCoveringContentTiles;
@property (nonatomic, readonly) NSIndexSet *_kindsCenteredOnContentTiles;
@property (nonatomic, readonly) PXAssetsTilingLayout *_fromLayout;
@property (nonatomic, readonly) PXAssetsTilingLayout *_toLayout;
@property (nonatomic) _Bool treatRemovalsAsDeletes;
@property (nonatomic) _Bool delayInsertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transitionCoordinatorForChange:(id)arg1 changeHistory:(id)arg2;

- (id)optionsForAnimatingTileWithIdentifier:(struct PXTileIdentifier)arg1 animationType:(long long)arg2 fromGeometry:(struct PXTileGeometry)arg3 fromUserData:(id)arg4 toGeometry:(struct PXTileGeometry)arg5 toUserData:(id)arg6;
- (_Bool)getInitialGeometry:(out struct PXTileGeometry *)arg1 initialUserData:(out id *)arg2 forAppearingTileWithIdentifier:(struct PXTileIdentifier)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id)arg5;
- (_Bool)getFinalGeometry:(out struct PXTileGeometry *)arg1 finalUserData:(out id *)arg2 forDisappearingTileWithIdentifier:(struct PXTileIdentifier)arg3 fromGeometry:(struct PXTileGeometry)arg4 fromUserData:(id)arg5;
- (_Bool)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(struct PXTileIdentifier)arg1 fromGeometry:(struct PXTileGeometry)arg2 fromUserData:(id)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id)arg5;
- (id)initWithTilingChange:(id)arg1 changeHistory:(id)arg2;
- (void)disableAnimationsForTileKind:(unsigned long long)arg1;
- (void)enableAnimationsForTileKind:(unsigned long long)arg1;

@end
