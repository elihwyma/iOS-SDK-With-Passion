/*
 Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

#import <UserManagement/UMUser.h>

@class NSArray, NSDate, NSError, NSString, NSURL;

@interface UMMutableUser : UMUser

@property (nonatomic) unsigned int uid;
@property (nonatomic) unsigned int gid;
@property (copy, nonatomic) NSString *alternateDSID;
@property (copy, nonatomic) NSURL *homeDirectoryURL;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSURL *photoURL;
@property (copy, nonatomic) NSString *userAuxiliaryString;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *lastLoginDate;
@property (copy, nonatomic) NSDate *lastRemoteAuthDate;
@property (nonatomic) unsigned long long passcodeType;
@property (nonatomic) _Bool isLoginUser;
@property (nonatomic) _Bool isAuditor;
@property (nonatomic) _Bool isDisabled;
@property (nonatomic) unsigned long long passcodeLockGracePeriod;
@property (copy, nonatomic) NSArray *languages;
@property (nonatomic) _Bool hasManagedCredentials;
@property (nonatomic) unsigned long long dataQuota;
@property (nonatomic) unsigned long long dataUsed;
@property (nonatomic) _Bool hasDataToSync;
@property (retain, nonatomic) NSError *errorCausingLogout;

- (_Bool)commitChanges;
- (_Bool)commitChangesWithError:(id *)arg1;

@end
