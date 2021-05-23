/*
 Image: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
 */

#import <Accounts/ACAccount.h>

@class NSNumber, NSString;

@interface ACAccount (BUAdditions)

@property (nonatomic, readonly) NSNumber *bu_DSID;
@property (nonatomic, readonly) NSString *bu_firstName;
@property (nonatomic, readonly) NSString *bu_lastName;
@property (nonatomic, readonly) NSString *bu_fullName;
@property (nonatomic, readonly) NSString *bu_storefront;
@property (nonatomic, readonly) _Bool bu_isManagedAppleID;

+ (id)bu_activeStoreAccount;
+ (id)bu_storeAccountWithDSID:(id)arg1;
+ (id)bu_localStoreAccount;

- (void)bu_removeWithCompletion:(CDUnknownBlockType)arg1;
- (id)bu_signOut;

@end
