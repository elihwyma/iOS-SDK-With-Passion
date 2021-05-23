/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, ACAccountType, CNPromise, NSString;

@interface CardDAViCloudDelegateInfoProvider : NSObject

{
    ACAccountStore *_accountStore;
    ACAccountType *_accountsType;
    CNPromise *_familyCirclePromise;
}

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) ACAccountType *accountsType;
@property (retain, nonatomic) CNPromise *familyCirclePromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)delegateInfoForFamilyMembers:(id)arg1;

- (id)init;
- (id)collectDelegatesForAccount:(id)arg1;
- (id)collectExpiredDelgatesForAccount:(id)arg1;
- (id)familyMembersPromise;
- (_Bool)isGuardianAccount:(id)arg1;
- (id)nonParentsInFamily;
- (id)adultsInFamily;
- (id)cardDAVAccounts;
- (id)appleIDsOfExistingDelegates:(id)arg1;
- (void)retryFamilyCircleFetch;

@end
