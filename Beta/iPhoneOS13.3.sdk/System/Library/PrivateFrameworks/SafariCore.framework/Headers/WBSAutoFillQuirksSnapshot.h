/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString;

@interface WBSAutoFillQuirksSnapshot : NSObject

{
    NSDictionary *_autoFillQuirks;
    NSArray *_domainsWithAssociatedCredentials;
    NSDictionary *_passwordRequirementsByDomain;
    NSArray *_domainsIneligibleForPasswordAuditing;
    NSArray *_domainsToConsiderIdentical;
    NSSet *_domainsIneligibleForAutomaticLogin;
    NSSet *_domainsIneligibleForStreamlinedLogin;
}

@property (copy, nonatomic, readonly) NSDictionary *passwordRequirementsByDomain;
@property (copy, nonatomic, readonly) NSArray *domainsWithAssociatedCredentials;
@property (copy, nonatomic, readonly) NSArray *domainsIneligibleForPasswordAuditing;
@property (copy, nonatomic, readonly) NSArray *domainsToConsiderIdentical;
@property (copy, nonatomic, readonly) NSSet *domainsIneligibleForAutomaticLogin;
@property (copy, nonatomic, readonly) NSSet *domainsIneligibleForStreamlinedLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithPlistData:(id)arg1 error:(id *)arg2;
- (id)plistDataWithFormat:(unsigned long long)arg1;
- (id)_passwordRequirementsByDomainFromAutoFillQuirks:(id)arg1 error:(id *)arg2;
- (id)_domainsWithAssociatedCredentialsFromAutoFillQuirks:(id)arg1 error:(id *)arg2;
- (id)_domainsIneligibleForPasswordAuditingFromAutoFillQuirks:(id)arg1 error:(id *)arg2;
- (id)_domainsToConsiderIdenticalFromAutoFillQuirls:(id)arg1 error:(id *)arg2;
- (id)_domainsIneligibleForAutomaticLoginFromAutoFillQuirks:(id)arg1 error:(id *)arg2;
- (id)_domainsIneligibleForStreamlinedLoginFromAutoFillQuirks:(id)arg1 error:(id *)arg2;

@end
