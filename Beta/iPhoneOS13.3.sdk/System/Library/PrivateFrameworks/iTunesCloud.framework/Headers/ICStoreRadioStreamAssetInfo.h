/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSDictionary, NSURL;

@interface ICStoreRadioStreamAssetInfo : NSObject

{
    NSDictionary *_itemResponseDictionary;
    _Bool _iTunesStoreStream;
}

@property (nonatomic, readonly) long long flavor;
@property (nonatomic, readonly) long long streamProtocol;
@property (copy, nonatomic, readonly) NSURL *streamURL;
@property (copy, nonatomic, readonly) NSURL *keyCertificateURL;
@property (copy, nonatomic, readonly) NSURL *keyServerURL;
@property (nonatomic, getter=isiTunesStoreStream) _Bool iTunesStoreStream;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItemResponseDictionary:(id)arg1;
- (long long)ICStoreRadioStreamFlavorWithString:(id)arg1;
- (long long)ICStoreRadioStreamProtocolWithString:(id)arg1;

@end
