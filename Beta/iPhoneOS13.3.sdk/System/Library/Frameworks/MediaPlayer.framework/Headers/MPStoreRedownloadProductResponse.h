/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPStoreRedownloadProductItem, NSDictionary, NSURL;

@interface MPStoreRedownloadProductResponse : NSObject

{
    NSDictionary *_responseDictionary;
    NSURL *_fallbackStreamingKeyServerURL;
    NSURL *_fallbackStreamingKeyCertificateURL;
}

@property (copy, nonatomic) NSURL *fallbackStreamingKeyServerURL;
@property (copy, nonatomic) NSURL *fallbackStreamingKeyCertificateURL;
@property (nonatomic, readonly) MPStoreRedownloadProductItem *item;
@property (copy, nonatomic, readonly) NSDictionary *responseDictionary;

- (id)initWithResponseDictionary:(id)arg1;

@end
