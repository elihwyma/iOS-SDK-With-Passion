/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSSet, NSString, NSURL, PKAccountAdditionalPushTopics, PKAccountDetails, PKCreditAccountDetails;

@interface PKAccount : NSObject <Swift>

{
    _Bool _blockNotifications;
    _Bool _accountStateDirty;
    NSString *_accountIdentifier;
    NSURL *_accountBaseURL;
    unsigned long long _feature;
    unsigned long long _type;
    PKAccountDetails *_details;
    unsigned long long _state;
    unsigned long long _stateReason;
    unsigned long long _accessLevel;
    NSSet *_supportedFeatures;
    PKAccountAdditionalPushTopics *_additionalPushTopics;
    NSDate *_lastUpdated;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *accountBaseURL;
@property (nonatomic) unsigned long long feature;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) PKAccountDetails *details;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long stateReason;
@property (nonatomic) unsigned long long accessLevel;
@property (nonatomic) _Bool blockNotifications;
@property (copy, nonatomic) NSSet *supportedFeatures;
@property (retain, nonatomic) PKAccountAdditionalPushTopics *additionalPushTopics;
@property (nonatomic) _Bool accountStateDirty;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (nonatomic, readonly) PKCreditAccountDetails *creditDetails;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)schedulePaymentFeatureDescriptor;
- (id)associatedPassUniqueID;
- (_Bool)isContentEqualToAccount:(id)arg1;
- (_Bool)supportsExtendedFetch;
- (id)_featureWithIdentifier:(id)arg1;
- (id)scheduleRecurringPaymentsFeatureDescriptor;
- (id)viewStatementFeatureDescriptor;
- (id)requestStatementFeatureDescriptor;
- (id)exportTransactionDataFeatureDescriptor;
- (id)requestPhysicalCardFeatureDescriptor;
- (id)redeemRewardsFeatureDescriptor;
- (id)showNotificationsFeatureDescriptor;
- (id)showAccountSummaryFeatureDescriptor;
- (id)addFundingSourceFeatureDescriptor;
- (id)showVirtualCardFeatureDescriptor;
- (id)provisioningAllowedFeatureDescriptor;
- (_Bool)supportsSchedulePayment;
- (_Bool)supportsScheduleRecurringPayments;
- (_Bool)supportsViewStatement;
- (_Bool)supportsRequestStatement;
- (_Bool)supportsExportTransactionData;
- (_Bool)supportsRequestPhysicalCard;
- (_Bool)supportsRedeemRewards;
- (_Bool)supportsShowNotifications;
- (_Bool)supportsShowAccountSummary;
- (_Bool)supportsAddFundingSource;
- (_Bool)supportsShowVirtualCard;
- (_Bool)provisioningAllowed;

@end
