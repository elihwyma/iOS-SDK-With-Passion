/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGHitTestResult.h>

@class PXAssetCollectionReference, PXAssetReference;

@interface PXCuratedLibraryHitTestResult : PXGHitTestResult

{
    long long _control;
    PXAssetReference *_assetReference;
    PXAssetCollectionReference *_assetCollectionReference;
}

@property (nonatomic, readonly) long long control;
@property (nonatomic, readonly) PXAssetReference *assetReference;
@property (nonatomic, readonly) PXAssetCollectionReference *assetCollectionReference;

- (id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3;
- (id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetReference:(id)arg4;
- (id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetCollectionReference:(id)arg4;
- (id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetReference:(id)arg4 assetCollectionReference:(id)arg5;
- (id)initWithSpriteReference:(id)arg1 layout:(id)arg2 identifier:(id)arg3 userData:(id)arg4;

@end
