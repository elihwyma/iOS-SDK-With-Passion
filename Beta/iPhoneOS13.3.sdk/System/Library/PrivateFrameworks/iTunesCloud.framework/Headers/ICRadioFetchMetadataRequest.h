/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICStoreRequestContext, NSArray, NSData;

@interface ICRadioFetchMetadataRequest : NSObject <Swift>

{
    NSArray *_storeAdamIDs;
    ICStoreRequestContext *_storeRequestContext;
    NSData *_timedMetadataData;
    long long _qualityOfService;
}

@property (copy, nonatomic) NSArray *storeAdamIDs;
@property (copy, nonatomic) ICStoreRequestContext *storeRequestContext;
@property (copy, nonatomic) NSData *timedMetadataData;
@property (nonatomic) long long qualityOfService;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;

@end
