/*
 Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSError, NSString, NSURL;

@interface UMUser : NSObject

{
    NSString *_displayName;
    _Bool _shouldFetchAttributes;
    _Bool _isLoginUser;
    _Bool _isAuditor;
    _Bool _isDisabled;
    _Bool _hasManagedCredentials;
    _Bool _hasDataToSync;
    unsigned int _uid;
    unsigned int _gid;
    NSString *_alternateDSID;
    NSURL *_homeDirectoryURL;
    NSString *_username;
    NSString *_givenName;
    NSString *_familyName;
    NSURL *_photoURL;
    NSString *_userAuxiliaryString;
    id __photo;
    NSDate *_creationDate;
    NSDate *_lastLoginDate;
    NSDate *_lastRemoteAuthDate;
    unsigned long long _passcodeType;
    unsigned long long _passcodeLockGracePeriod;
    NSArray *_languages;
    unsigned long long _dataQuota;
    unsigned long long _dataUsed;
    NSError *_errorCausingLogout;
    NSError *_debugErrorCausingLogout;
    NSDate *_firstLoginStartDate;
    NSDate *_firstLoginEndDate;
    NSDate *_lastCachedLoginStartDate;
    NSDate *_lastCachedLoginEndDate;
    NSDate *_lastLogoutStartDate;
    NSDate *_lastLogoutEndDate;
}

@property (nonatomic) _Bool shouldFetchAttributes;
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
@property (copy, nonatomic) id _photo;
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
@property (copy, nonatomic) NSError *debugErrorCausingLogout;
@property (copy, nonatomic) NSDate *firstLoginStartDate;
@property (copy, nonatomic) NSDate *firstLoginEndDate;
@property (copy, nonatomic) NSDate *lastCachedLoginStartDate;
@property (copy, nonatomic) NSDate *lastCachedLoginEndDate;
@property (copy, nonatomic) NSDate *lastLogoutStartDate;
@property (copy, nonatomic) NSDate *lastLogoutEndDate;
@property (weak, nonatomic, readonly) NSArray *allUserPersonas;
@property (nonatomic, readonly) unsigned long long userType;
@property (nonatomic, readonly) double passcodeBackOffInterval;

+ (id)userWithUID:(unsigned int)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToUser:(id)arg1;
- (_Bool)fetchAttributesWithOutError:(id *)arg1;
- (_Bool)commitChanges;
- (void)fetchAttributesIfNeeded;
- (struct dqblk)_diskQuota;
- (void)setPropertiesFromUser:(id)arg1;
- (_Bool)commitChangesWithError:(id *)arg1;
- (_Bool)inFirstLoginSession;
- (id)userPersonaFromIdentityString:(id)arg1;

@end
