/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRadioResponse.h>

@class NSArray;

@interface ICRadioFetchMetadataResponse : ICRadioResponse

@property (copy, nonatomic, readonly) NSArray *allStorePlatformMetadata;

- (id)_storePlatformMetadataDictionaryFromRadioMetadataDictionary:(id)arg1;
- (id)storePlatformMetadataForStoreAdamID:(long long)arg1;

@end
