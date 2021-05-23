/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKDisbursementVoucherRequest : PKPeerPaymentWebServiceRequest

{
    unsigned long long _disbursementSource;
    unsigned long long _disbursementTarget;
    NSString *_teamIdentifier;
    NSString *_bundleIdentifier;
}

@property (nonatomic) unsigned long long disbursementSource;
@property (nonatomic) unsigned long long disbursementTarget;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithDisbursementSource:(unsigned long long)arg1 disbursementTarget:(unsigned long long)arg2 teamIdentifier:(id)arg3 bundleIdentifier:(id)arg4;

@end
