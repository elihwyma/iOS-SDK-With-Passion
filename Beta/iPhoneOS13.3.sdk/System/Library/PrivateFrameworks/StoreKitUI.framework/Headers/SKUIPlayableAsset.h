/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface SKUIPlayableAsset : NSObject

{
    _Bool _ITunesStream;
    _Bool _shouldUseITunesStoreSecureKeyDelivery;
    NSURL *_contentURL;
    double _initialPlaybackTime;
    NSURL *_keyCertificateURL;
    NSURL *_keyServerURL;
    double _playbackDuration;
    long long _storeItemIdentifier;
}

@property (copy, nonatomic) NSURL *contentURL;
@property (nonatomic) double initialPlaybackTime;
@property (nonatomic, readonly, getter=isITunesStream) _Bool ITunesStream;
@property (retain, nonatomic, readonly) NSURL *keyCertificateURL;
@property (retain, nonatomic, readonly) NSURL *keyServerURL;
@property (nonatomic) double playbackDuration;
@property (nonatomic) _Bool shouldUseITunesStoreSecureKeyDelivery;
@property (nonatomic) long long storeItemIdentifier;

- (id)init;
- (id)initWithContentURL:(id)arg1;
- (id)initWithVideoViewElement:(id)arg1 assetViewElement:(id)arg2;
- (id)initWithVideo:(id)arg1;

@end
