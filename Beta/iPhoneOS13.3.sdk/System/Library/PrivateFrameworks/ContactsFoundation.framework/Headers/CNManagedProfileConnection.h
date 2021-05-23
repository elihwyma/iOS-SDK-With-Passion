/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class MCProfileConnection, NSString;

@interface CNManagedProfileConnection : NSObject

{
    MCProfileConnection *_profileConnection;
}

@property (retain, nonatomic) MCProfileConnection *profileConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedConnection;

- (id)init;
- (_Bool)isOpenInRestrictionInEffect;
- (_Bool)mayShowLocalContactsAccountsForBundleID:(id)arg1 sourceAccountManagement:(long long)arg2;
- (_Bool)mayShowLocalContactsAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(long long)arg2;
- (id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(long long)arg3;
- (id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(long long)arg3;
- (id)initWithProfileConnection:(id)arg1;

@end
