/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSVPlaybackResponse.h>

@class NSData;

@interface SSVPlaybackLeaseResponse : SSVPlaybackResponse

{
    NSData *_certificateData;
    unsigned long long _kdMovieIdentifier;
}

@property (nonatomic, readonly, getter=isOfflineSlotAvailable) _Bool offlineSlotAvailable;
@property (copy, nonatomic, readonly) NSData *leaseInfoData;
@property (copy, nonatomic, readonly) NSData *subscriptionKeyBagData;
@property (copy, nonatomic) NSData *certificateData;
@property (nonatomic) unsigned long long KDMovieIdentifier;
@property (nonatomic, readonly) double leaseDuration;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)itemForItemIdentifier:(id)arg1;

@end
