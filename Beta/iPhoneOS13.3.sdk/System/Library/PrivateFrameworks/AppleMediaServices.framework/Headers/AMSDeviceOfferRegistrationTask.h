/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class ACAccount, AMSProcessInfo, NSSet, NSString;

@protocol AMSBagProtocol;

@interface AMSDeviceOfferRegistrationTask : AMSTask <Swift>

{
    _Bool _lightweightCheckOnly;
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    AMSProcessInfo *_clientInfo;
    NSSet *_offerIdentifiers;
}

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) id <AMSBagProtocol> bag;
@property (nonatomic) _Bool lightweightCheckOnly;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSSet *offerIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;

- (id)perform;
- (id)initWithAccount:(id)arg1 bag:(id)arg2;

@end
