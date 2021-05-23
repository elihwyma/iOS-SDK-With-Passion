/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKMediaFeeder.h>

@class NSArray, NSDictionary, NSString, PHAssetCollection, PHFetchOptions, PHFetchResult;

@interface OKMediaFeederPhotoKit : OKMediaFeeder

{
    unsigned long long _type;
    PHFetchResult *_fetchResult;
    PHAssetCollection *_assetCollection;
    PHFetchOptions *_options;
    NSString *_collectionIdentifier;
    NSDictionary *_predicate;
    NSArray *_sortDescriptors;
}

@property (retain) PHFetchResult *fetchResult;
@property (retain) PHAssetCollection *assetCollection;
@property (retain) PHFetchOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isRemote;
+ (id)mediaFeederWithAssetCollection:(id)arg1 andOptions:(id)arg2;
+ (id)mediaFeederWithFetchResult:(id)arg1;
+ (id)supportedSettings;
+ (_Bool)supportLiveUpdates;
+ (id)mediaFeederWithAllAssetsWithOptions:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (id)initWithFetchResult:(id)arg1;
- (id)feederSettings;
- (_Bool)canBePersisted;
- (id)reloadMediaObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)numberOfMediaObjects;
- (id)mediaObjectsAtIndexes:(id)arg1;
- (id)mediaObjectURLsAtIndexes:(id)arg1;
- (id)indexesForMediaObjects:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 andOptions:(id)arg2;
- (id)initWithAllAssetsWithOptions:(id)arg1;

@end
