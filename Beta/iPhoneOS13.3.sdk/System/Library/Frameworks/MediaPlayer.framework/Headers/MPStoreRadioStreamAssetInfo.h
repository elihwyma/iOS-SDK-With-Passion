/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class ICStoreRadioStreamAssetInfo, NSURL;

@interface MPStoreRadioStreamAssetInfo : NSObject

{
    ICStoreRadioStreamAssetInfo *_internalInfo;
    _Bool _iTunesStoreStream;
}

@property (nonatomic, readonly) long long flavor;
@property (nonatomic, readonly) long long streamProtocol;
@property (copy, nonatomic, readonly) NSURL *streamURL;
@property (copy, nonatomic, readonly) NSURL *keyCertificateURL;
@property (copy, nonatomic, readonly) NSURL *keyServerURL;
@property (nonatomic, getter=isiTunesStoreStream) _Bool iTunesStoreStream;

- (id)initWithiTunesCloudStoreRadioStreamAssetInfo:(id)arg1;
- (_Bool)isITunesStoreStream;
- (long long)MPStoreRadioStreamFlavorFromICStoreRadioStreamFlavor:(long long)arg1;
- (long long)MPStoreRadioStreamProtocolFromICStoreRadioStreamProtocol:(long long)arg1;

@end
