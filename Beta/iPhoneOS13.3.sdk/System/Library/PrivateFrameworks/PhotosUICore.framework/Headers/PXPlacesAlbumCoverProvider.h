/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, PHAssetCollection, PXPlacesSnapshotFactory, UIImage;

@protocol OS_dispatch_queue, PXPlacesSnapshotFactoryDelegate;

@interface PXPlacesAlbumCoverProvider : NSObject

{
    UIImage *_cachedSnapshotImage;
    NSString *_cachedSnapshotImageIdentifier;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_requestsQueue;
    long long _cachedCount;
    PXPlacesSnapshotFactory *_factory;
    id <PXPlacesSnapshotFactoryDelegate> _factoryDelegate;
    PHAssetCollection *_placesCollection;
    NSMutableDictionary *_cachedPlaceholders;
}

@property (retain, nonatomic) PXPlacesSnapshotFactory *factory;
@property (retain, nonatomic) id <PXPlacesSnapshotFactoryDelegate> factoryDelegate;
@property (retain, nonatomic) PHAssetCollection *placesCollection;
@property (retain, nonatomic) NSMutableDictionary *cachedPlaceholders;
@property (nonatomic) long long cachedCount;

+ (id)_cachedSnapshotPathDark;
+ (id)_cachedSnapshotPathLight;
+ (id)_cachedSnapshotPathForFilename:(id)arg1;

- (id)initWithDelegate:(id)arg1 andPlacesCollection:(id)arg2;
- (void)preloadCachedSnapshotForUserInterfaceStyle:(long long)arg1;
- (void)preloadPlaceholderForTraitCollection:(id)arg1;
- (void)requestPlacesAlbumCover:(id)arg1 snapshotTraitCollection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestAssetCountWithForcedRefresh:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_placeHolderImageForExtendedTraitCollection:(id)arg1;
- (_Bool)_fetchCachedSnapshotImage:(out id *)arg1 andIdentifier:(out id *)arg2 forUserInterfaceStyle:(long long)arg3;
- (_Bool)_imageExistsWithLocalIdentifier:(id)arg1;
- (id)createAlbumPlaceHolderImageUsingTraitCollection:(id)arg1;
- (id)backgroundImageNameForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;
- (id)placesAlbumCoverProviderLog;

@end
