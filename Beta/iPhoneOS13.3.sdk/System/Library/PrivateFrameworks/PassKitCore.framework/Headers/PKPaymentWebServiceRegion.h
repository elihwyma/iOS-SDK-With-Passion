/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSString, NSURL;

@interface PKPaymentWebServiceRegion : NSObject <Swift>

{
    _Bool _hasAccounts;
    _Bool _hasApplications;
    _Bool _hasPeerPaymentAccount;
    NSString *_lastUpdatedTag;
    NSArray *_certificates;
    NSURL *_brokerURL;
    NSString *_regionCode;
    NSURL *_paymentServicesURL;
    NSURL *_inAppPaymentServicesURL;
    NSURL *_paymentServicesMerchantURL;
    NSURL *_partnerServiceURL;
    NSURL *_trustedServiceManagerURL;
    NSString *_trustedServiceManagerPushTopic;
    long long _consistencyCheckBackoffLevel;
    NSString *_userNotificationPushTopic;
    long long _outstandingCheckInAction;
    NSString *_lastDeviceCheckInBuildVersion;
    NSString *_deviceCheckInPushTopic;
    NSURL *_accountServiceURL;
    NSString *_accountServicePushTopic;
    NSURL *_applyServiceURL;
    NSString *_applyServicePushTopic;
    NSString *_productsPushTopic;
    NSString *_transactionZonePushTopic;
    NSURL *_peerPaymentServiceURL;
}

@property (retain, nonatomic) NSURL *peerPaymentServiceURL;
@property (nonatomic) _Bool hasPeerPaymentAccount;
@property (retain, nonatomic) NSString *lastUpdatedTag;
@property (retain, nonatomic) NSArray *certificates;
@property (retain, nonatomic) NSURL *brokerURL;
@property (retain, nonatomic) NSString *regionCode;
@property (retain, nonatomic) NSURL *paymentServicesURL;
@property (retain, nonatomic) NSURL *inAppPaymentServicesURL;
@property (retain, nonatomic) NSURL *paymentServicesMerchantURL;
@property (retain, nonatomic) NSURL *partnerServiceURL;
@property (retain, nonatomic) NSURL *trustedServiceManagerURL;
@property (retain, nonatomic) NSString *trustedServiceManagerPushTopic;
@property (nonatomic) long long consistencyCheckBackoffLevel;
@property (retain, nonatomic) NSString *userNotificationPushTopic;
@property (nonatomic) long long outstandingCheckInAction;
@property (copy, nonatomic) NSString *lastDeviceCheckInBuildVersion;
@property (copy, nonatomic) NSString *deviceCheckInPushTopic;
@property (retain, nonatomic) NSURL *accountServiceURL;
@property (retain, nonatomic) NSString *accountServicePushTopic;
@property (nonatomic) _Bool hasAccounts;
@property (retain, nonatomic) NSURL *applyServiceURL;
@property (retain, nonatomic) NSString *applyServicePushTopic;
@property (nonatomic) _Bool hasApplications;
@property (copy, nonatomic) NSString *productsPushTopic;
@property (copy, nonatomic) NSString *transactionZonePushTopic;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
