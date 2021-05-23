/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CNManagedProfileConnection;

@interface CNManagedConfiguration : NSObject

{
    NSString *_bundleIdentifier;
    id <CNManagedProfileConnection> _profileConnection;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) id <CNManagedProfileConnection> profileConnection;

+ (id)os_log;
+ (id)bundleIdentifierFromEntitlementForAuditToken:(CDStruct_4c969caf *)arg1;
+ (id)bundleIdentifierFromInfoPlistForAuditToken:(CDStruct_4c969caf *)arg1;
+ (id)bundleIdentifierForAuditToken:(CDStruct_4c969caf *)arg1;

- (_Bool)deviceHasManagementRestrictions;
- (id)readableAccountIdentifiersFromIdentifiers:(id)arg1;
- (id)accountForIdentifier:(id)arg1;
- (_Bool)canWriteToLocalAccount;
- (_Bool)canWriteToAccountWithIdentifier:(id)arg1;
- (_Bool)canReadFromLocalAccount;
- (_Bool)canReadFromAccountWithIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 managedProfileConnection:(id)arg2;
- (_Bool)accountIsManaged:(id)arg1;
- (id)readableAccountsFromAccounts:(id)arg1;
- (id)writableAccountsFromAccounts:(id)arg1;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1 managedProfileConnection:(id)arg2;
- (_Bool)accountIsManagedForIdentifier:(id)arg1;
- (id)writableAccountIdentifiersFromIdentifiers:(id)arg1;

@end
