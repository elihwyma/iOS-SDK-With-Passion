/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSData, NSString, PKPaymentMerchantSession;

@interface PKPaymentMerchantData : NSObject

{
    PKPaymentMerchantSession *_merchantSession;
    NSString *_merchantIdentifier;
    NSData *_applicationData;
}

@property (nonatomic, readonly) NSString *merchantIdentifier;
@property (nonatomic, readonly) NSData *applicationData;

- (id)init;
- (id)initWithPaymentRequest:(id)arg1;
- (id)initWithMerchantIdentifier:(id)arg1 applicationData:(id)arg2;
- (id)encode;

@end
