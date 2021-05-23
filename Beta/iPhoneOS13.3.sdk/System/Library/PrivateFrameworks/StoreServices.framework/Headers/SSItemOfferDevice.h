/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString, SSItemOfferDeviceError;

@interface SSItemOfferDevice : NSObject

{
    long long _deviceIdentifier;
    SSItemOfferDeviceError *_incompatibleDeviceError;
    SSItemOfferDeviceError *_incompatibleSystemError;
    NSString *_minimumProductVersion;
}

@property (nonatomic, readonly) long long deviceIdentifier;
@property (nonatomic, readonly) NSString *minimumProductVersion;
@property (nonatomic, readonly) SSItemOfferDeviceError *incompatibleDeviceError;
@property (nonatomic, readonly) SSItemOfferDeviceError *incompatibleSystemError;

- (id)init;
- (void)dealloc;
- (id)initWithOfferDeviceDicitionary:(id)arg1;
- (id)initWithDeviceIdentifier:(long long)arg1;

@end
