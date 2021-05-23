/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaPlaybackItemMetadata, NSString;

@interface MPStreamingDownloadSessionRequest : NSObject

{
    _Bool _prefersHLS;
    _Bool _shouldStartLeaseSession;
    _Bool _shouldUseAccountLessStreaming;
    _Bool _shouldUseStreamingRedownload;
    _Bool _streamingRental;
    MPMediaPlaybackItemMetadata *_playbackItemMetadata;
    unsigned long long _preferredAssetQuality;
    NSString *_assetSourceStoreFrontID;
    long long _equivalencySourceAdamID;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
    NSString *_buyParameters;
    long long _endpointType;
    long long _storeAdamID;
    CDUnknownBlockType _downloadSessionAlternativeConfigurationOptionsBlock;
}

@property (retain, nonatomic) MPMediaPlaybackItemMetadata *playbackItemMetadata;
@property (nonatomic) unsigned long long preferredAssetQuality;
@property (nonatomic) _Bool prefersHLS;
@property (nonatomic) _Bool shouldStartLeaseSession;
@property (nonatomic) _Bool shouldUseAccountLessStreaming;
@property (nonatomic) _Bool shouldUseStreamingRedownload;
@property (nonatomic, getter=isStreamingRental) _Bool streamingRental;
@property (copy, nonatomic) NSString *assetSourceStoreFrontID;
@property (nonatomic) long long equivalencySourceAdamID;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;
@property (copy, nonatomic, readonly) NSString *buyParameters;
@property (nonatomic, readonly) long long endpointType;
@property (nonatomic, readonly) long long storeAdamID;
@property (nonatomic, readonly) _Bool usesSubscriptionLease;
@property (copy, nonatomic) CDUnknownBlockType downloadSessionAlternativeConfigurationOptionsBlock;

@end
