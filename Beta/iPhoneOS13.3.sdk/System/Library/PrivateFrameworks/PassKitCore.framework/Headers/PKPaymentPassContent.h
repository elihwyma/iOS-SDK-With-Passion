/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPassContent.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface PKPaymentPassContent : PKPassContent <Swift>

{
    _Bool _supportsTransitOnly;
    NSString *_cobrandName;
    NSURL *_transactionServiceURL;
    NSURL *_transactionServiceRegistrationURL;
    NSString *_transactionPushTopic;
    NSURL *_messageServiceURL;
    NSString *_messagePushTopic;
    NSString *_appURLScheme;
    NSDictionary *_localizedSuspendedReasonsByAID;
    NSArray *_availableActions;
    NSArray *_upgradeRequests;
}

@property (copy, nonatomic) NSString *cobrandName;
@property (copy, nonatomic) NSURL *transactionServiceURL;
@property (copy, nonatomic) NSURL *transactionServiceRegistrationURL;
@property (copy, nonatomic) NSString *transactionPushTopic;
@property (copy, nonatomic) NSURL *messageServiceURL;
@property (copy, nonatomic) NSString *messagePushTopic;
@property (copy, nonatomic) NSString *appURLScheme;
@property (copy, nonatomic) NSDictionary *localizedSuspendedReasonsByAID;
@property (nonatomic) _Bool supportsTransitOnly;
@property (copy, nonatomic) NSArray *availableActions;
@property (copy, nonatomic) NSArray *upgradeRequests;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3;

@end
