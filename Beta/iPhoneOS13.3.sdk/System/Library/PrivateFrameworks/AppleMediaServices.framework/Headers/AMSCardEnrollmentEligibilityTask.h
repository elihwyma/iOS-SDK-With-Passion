/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class NSString;

@protocol AMSBagProtocol;

@interface AMSCardEnrollmentEligibilityTask : AMSTask <Swift>

{
    id <AMSBagProtocol> _bag;
    NSString *_countryCode;
}

@property (retain, nonatomic) id <AMSBagProtocol> bag;
@property (copy, nonatomic, readonly) NSString *countryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)_bagKeySet;

- (id)init;
- (id)initWithBag:(id)arg1;
- (id)performCanWriteBillingInfoQueryWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (unsigned long long)_cardTypeForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)_performSilentEnrollmentCheckWithRequest:(id)arg1;
- (id)initWithCountryCode:(id)arg1;
- (id)initWithBag:(id)arg1 countryCode:(id)arg2;
- (void)canWriteBillingInfoWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
