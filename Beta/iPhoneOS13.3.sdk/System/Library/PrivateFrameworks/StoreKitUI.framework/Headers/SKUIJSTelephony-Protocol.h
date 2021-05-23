/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/Swift-Protocol.h>

@class NSString;

@protocol SKUIJSTelephony <Swift>

@property (nonatomic, readonly, getter=isCellularRoaming) _Bool cellularRoaming;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *mobileCountryCode;
@property (nonatomic, readonly) NSString *mobileNetworkCode;
@property (nonatomic, readonly) NSString *operatorName;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *providerName;

- (unsigned short)beginObserving;
- (unsigned short)formattedPhoneNumber: /* Error: Ran out of types for this method. */;
- (unsigned short)sendSMSWithBodyText::: /* Error: Ran out of types for this method. */;

@end
