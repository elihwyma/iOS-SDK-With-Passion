/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface MPCModelGenericAVItemAssetLoadResult : NSObject

{
    _Bool _allowsAssetCaching;
    _Bool _allowsAssetInfoCaching;
    _Bool _isHomeSharingAsset;
    _Bool _isHLSAsset;
    _Bool _isCloudStreamingAsset;
    _Bool _iTunesStoreStream;
    NSString *_assetPathExtension;
    long long _assetProtectionType;
    long long _assetQualityType;
    NSURL *_assetURL;
    NSURL *_protectedContentSupportStorageFileURL;
    NSDictionary *_purchaseBundleDictionary;
    NSURL *_streamingKeyCertificateURL;
    NSURL *_streamingKeyServerURL;
    NSURL *_alternateHLSPlaylistURL;
    NSURL *_alternateHLSKeyServerURL;
    NSURL *_alternateHLSKeyCertificateURL;
    id _suzeLeaseID;
    CDUnknownBlockType _willBecomeActivePlayerItemHandler;
}

@property (nonatomic) _Bool allowsAssetCaching;
@property (nonatomic) _Bool allowsAssetInfoCaching;
@property (copy, nonatomic) NSString *assetPathExtension;
@property (nonatomic) long long assetProtectionType;
@property (nonatomic) long long assetQualityType;
@property (copy, nonatomic) NSURL *assetURL;
@property (nonatomic) _Bool isHomeSharingAsset;
@property (nonatomic) _Bool isHLSAsset;
@property (nonatomic) _Bool isCloudStreamingAsset;
@property (copy, nonatomic) NSURL *protectedContentSupportStorageFileURL;
@property (copy, nonatomic) NSDictionary *purchaseBundleDictionary;
@property (copy, nonatomic) NSURL *streamingKeyCertificateURL;
@property (copy, nonatomic) NSURL *streamingKeyServerURL;
@property (copy, nonatomic) NSURL *alternateHLSPlaylistURL;
@property (copy, nonatomic) NSURL *alternateHLSKeyServerURL;
@property (copy, nonatomic) NSURL *alternateHLSKeyCertificateURL;
@property (retain, nonatomic) id suzeLeaseID;
@property (nonatomic, getter=isiTunesStoreStream) _Bool iTunesStoreStream;
@property (copy, nonatomic) CDUnknownBlockType willBecomeActivePlayerItemHandler;
@property (nonatomic, readonly) _Bool hasValidAsset;

+ (id)assetLoadResultWithStoreAssetPlaybackResponse:(id)arg1 assetLoadProperties:(id)arg2 error:(id *)arg3;

@end
