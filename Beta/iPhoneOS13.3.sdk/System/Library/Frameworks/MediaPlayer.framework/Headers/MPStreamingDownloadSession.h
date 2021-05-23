/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface MPStreamingDownloadSession : NSObject <Swift>

{
    _Bool _didStartLeaseSession;
    _Bool _iTunesStoreStream;
    _Bool _isHLSAsset;
    NSString *_assetFlavor;
    unsigned long long _assetQuality;
    unsigned long long _downloadToken;
    unsigned long long _protectionType;
    NSDictionary *_purchaseBundle;
    NSDictionary *_responseAssetDictionary;
    NSURL *_sourceURL;
    NSURL *_streamingKeyServerURL;
    NSURL *_streamingKeyCertificateURL;
    NSURL *_alternateSourceURL;
    NSURL *_alternateHLSPlaylistURL;
    NSURL *_alternateHLSKeyServerURL;
    NSURL *_alternateHLSKeyCertificateURL;
}

@property (copy, nonatomic) NSString *assetFlavor;
@property (nonatomic) unsigned long long assetQuality;
@property (nonatomic) _Bool didStartLeaseSession;
@property (nonatomic) unsigned long long downloadToken;
@property (nonatomic) _Bool isHLSAsset;
@property (nonatomic, getter=isiTunesStoreStream) _Bool iTunesStoreStream;
@property (nonatomic) unsigned long long protectionType;
@property (copy, nonatomic) NSDictionary *purchaseBundle;
@property (retain, nonatomic) NSDictionary *responseAssetDictionary;
@property (copy, nonatomic) NSURL *streamingKeyServerURL;
@property (copy, nonatomic) NSURL *streamingKeyCertificateURL;
@property (copy, nonatomic) NSURL *sourceURL;
@property (copy, nonatomic) NSURL *alternateSourceURL;
@property (copy, nonatomic) NSURL *alternateHLSPlaylistURL;
@property (copy, nonatomic) NSURL *alternateHLSKeyServerURL;
@property (copy, nonatomic) NSURL *alternateHLSKeyCertificateURL;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
