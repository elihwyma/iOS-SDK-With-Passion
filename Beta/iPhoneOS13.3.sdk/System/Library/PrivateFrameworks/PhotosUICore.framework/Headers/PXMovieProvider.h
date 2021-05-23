/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PHAsset, PHAssetCollection, PXDiagnosticsItemProvider, UIViewController;

@protocol PXMovieProviderDelegate;

@interface PXMovieProvider : NSObject

{
    id <PXMovieProviderDelegate> _delegate;
    PHAssetCollection *_assetCollection;
    PHAsset *_keyAsset;
}

@property (weak, nonatomic) id <PXMovieProviderDelegate> delegate;
@property (nonatomic, readonly) _Bool canPlayMovie;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHAsset *keyAsset;
@property (nonatomic, readonly) UIViewController *movieViewController;
@property (nonatomic, readonly) PXDiagnosticsItemProvider *diagnosticsItemProvider;

- (id)init;
- (id)initWithAssetCollection:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 keyAsset:(id)arg2;
- (_Bool)ppt_runTest:(id)arg1 options:(id)arg2;

@end
