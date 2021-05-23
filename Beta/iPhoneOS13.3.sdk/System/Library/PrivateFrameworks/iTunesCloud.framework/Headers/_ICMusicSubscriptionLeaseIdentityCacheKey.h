/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSNumber, NSString;

@interface _ICMusicSubscriptionLeaseIdentityCacheKey : NSObject <Swift>

{
    NSNumber *_delegatedDSID;
    NSNumber *_DSID;
    NSString *_carrierBundleDeviceIdentifier;
}

@property (copy, nonatomic, readonly) NSNumber *delegatedDSID;
@property (copy, nonatomic, readonly) NSNumber *DSID;
@property (copy, nonatomic, readonly) NSString *carrierBundleDeviceIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDSID:(id)arg1 carrierBundleDeviceIdentifier:(id)arg2 delegatedDSID:(id)arg3;

@end
