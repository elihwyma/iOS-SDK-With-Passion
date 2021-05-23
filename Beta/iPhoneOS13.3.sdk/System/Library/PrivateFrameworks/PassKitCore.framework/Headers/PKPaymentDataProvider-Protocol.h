/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/Swift-Protocol.h>

@class NSString, PKOSVersionRequirement, PKPaymentWebService;

@protocol PKPaymentDataProviderDelegate;

@protocol PKPaymentDataProvider <Swift>

@property (nonatomic, readonly) _Bool isDeviceInRestrictedMode;
@property (nonatomic, readonly) NSString *secureElementIdentifier;
@property (nonatomic, readonly) _Bool secureElementIsProductionSigned;
@property (retain, nonatomic) NSString *defaultPaymentPassIdentifier;
@property (nonatomic, readonly) _Bool isPaymentHandoffDisabled;
@property (weak, nonatomic) id <PKPaymentDataProviderDelegate> delegate;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) PKOSVersionRequirement *deviceVersion;
@property (nonatomic, readonly) PKPaymentWebService *paymentWebService;

- (unsigned short)setDefaultPaymentApplication:forPassUniqueIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)defaultPaymentApplicationForPassUniqueIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)setPaymentHandoffDisabled: /* Error: Ran out of types for this method. */;

@end
