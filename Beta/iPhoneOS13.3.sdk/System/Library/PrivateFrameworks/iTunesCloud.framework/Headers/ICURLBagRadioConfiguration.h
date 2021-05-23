/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSDictionary, NSURL;

@interface ICURLBagRadioConfiguration : NSObject

{
    NSDictionary *_bagRadioDictionary;
}

@property (copy, nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) long long getTracksDPInfoKBSyncCount;
@property (nonatomic, readonly) long long maxSupportedProtocolVersion;

- (id)urlForBagRadioKey:(id)arg1;
- (id)initWithBagRadioDictionary:(id)arg1;
- (_Bool)shouldIncludeHTTPHeaderField:(id)arg1 forRequestURL:(id)arg2;

@end
