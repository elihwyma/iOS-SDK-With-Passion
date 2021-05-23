/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSDictionary, NSURL;

@interface ICStorePlatformOfferAsset : NSObject

{
    NSDictionary *_responseDictionary;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double previewDuration;
@property (copy, nonatomic, readonly) NSURL *previewURL;
@property (nonatomic, readonly) long long size;

- (id)initWithResponseDictionary:(id)arg1;

@end
