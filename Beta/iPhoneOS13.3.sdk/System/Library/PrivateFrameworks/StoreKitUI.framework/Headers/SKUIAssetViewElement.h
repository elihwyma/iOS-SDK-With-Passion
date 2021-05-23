/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SKUIAssetViewElement : SKUIViewElement

{
    double _initialPlaybackTime;
    long long _itemIdentifier;
    NSString *_secureKeyDeliveryType;
    double _playbackDuration;
    NSURL *_url;
    _Bool _ITunesStream;
    NSURL *_keyCertificateURL;
    NSURL *_keyServerURL;
}

@property (nonatomic) double initialPlaybackTime;
@property (nonatomic, readonly) long long itemIdentifier;
@property (copy, nonatomic, readonly) NSString *secureKeyDeliveryType;
@property (nonatomic, readonly, getter=isITunesStream) _Bool ITunesStream;
@property (retain, nonatomic, readonly) NSURL *keyCertificateURL;
@property (retain, nonatomic, readonly) NSURL *keyServerURL;
@property (nonatomic, readonly) double playbackDuration;
@property (nonatomic, readonly) NSURL *URL;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
