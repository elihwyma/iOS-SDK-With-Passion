/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPMediaLibrary, NSString;

@interface MPCMediaLibraryPlaybackAssetCacheProvider : NSObject

{
    MPMediaLibrary *_mediaLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_highQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)arg1;
+ (id)_lowQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)arg1;
+ (id)deviceLibraryProviderWithUserIdentity:(id)arg1;

- (void)getPlaybackAssetCacheDestinationURL:(id *)arg1 purchaseBundleDestinationURL:(id *)arg2 forGenericObject:(id)arg3 assetQualityType:(long long)arg4 pathExtension:(id)arg5;
- (void)setPlaybackAssetCacheFileAsset:(id)arg1 forGenericObject:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)clearPlaybackAssetCacheFileAssetForGenericObject:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_initWithMediaLibrary:(id)arg1;

@end
