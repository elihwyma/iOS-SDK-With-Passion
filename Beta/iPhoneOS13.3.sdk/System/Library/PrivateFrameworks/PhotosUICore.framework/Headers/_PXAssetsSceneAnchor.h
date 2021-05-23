/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXAssetReference;

@interface _PXAssetsSceneAnchor : NSObject

{
    PXAssetReference *_assetReference;
    double _distance;
    struct CGPoint _anchorOrigin;
}

@property (nonatomic, readonly) PXAssetReference *assetReference;
@property (nonatomic, readonly) struct CGPoint anchorOrigin;
@property (nonatomic, readonly) double distance;

- (id)initWithAssetReference:(id)arg1 anchorOrigin:(struct CGPoint)arg2 distance:(double)arg3;

@end
