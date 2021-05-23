/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, NSSet;

@interface AMSAcknowledgePrivacyTask : AMSTask

{
    ACAccount *_account;
    NSSet *_privacyIdentifiers;
}

@property (copy, nonatomic) NSSet *privacyIdentifiers;
@property (retain, nonatomic) ACAccount *account;

+ (unsigned long long)_contentVersionForPrivacyIdentifier:(id)arg1;
+ (id)_multiplexPrivacyIdentifier:(id)arg1 contentVersion:(unsigned long long)arg2;
+ (id)_accountStoreForPrivacyIdentifier:(id)arg1;
+ (_Bool)acknowledgementNeededForPrivacyIdentifier:(id)arg1 account:(id)arg2;
+ (_Bool)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg1 account:(id)arg2;
+ (id)_storePrivacyIdentifiers;
+ (_Bool)acknowledgementNeededForPrivacyIdentifier:(id)arg1;
+ (_Bool)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg1;

- (id)initWithPrivacyIdentifier:(id)arg1;
- (id)initWithPrivacyIdentifier:(id)arg1 account:(id)arg2;
- (id)initWithPrivacyIdentifiers:(id)arg1 account:(id)arg2;
- (id)initWithPrivacyIdentifiers:(id)arg1;
- (id)acknowledgePrivacy;

@end
