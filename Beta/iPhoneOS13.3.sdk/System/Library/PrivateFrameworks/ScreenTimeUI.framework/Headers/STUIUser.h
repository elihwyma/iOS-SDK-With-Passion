/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectID, NSNumber, NSString;

@interface STUIUser : NSObject

{
    _Bool _screenTimeEnabled;
    _Bool _managed;
    _Bool _webUsageEnabled;
    _Bool _remoteUser;
    _Bool _hasAllowances;
    unsigned long long _source;
    NSString *_name;
    NSNumber *_dsid;
    NSString *_altDSID;
    unsigned long long _type;
    NSString *_passcode;
    NSString *_recoveryAltDSID;
    NSManagedObjectID *_userObjectID;
}

@property (copy, nonatomic) NSManagedObjectID *userObjectID;
@property (nonatomic) unsigned long long source;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic, getter=isScreenTimeEnabled) _Bool screenTimeEnabled;
@property (nonatomic, getter=isManaged) _Bool managed;
@property (nonatomic, getter=isWebUsageEnabled) _Bool webUsageEnabled;
@property (nonatomic, getter=isRemoteUser) _Bool remoteUser;
@property (nonatomic) unsigned long long type;
@property (nonatomic) _Bool hasAllowances;
@property (nonatomic, readonly) _Bool hasPasscode;
@property (copy, nonatomic) NSString *passcode;
@property (copy, nonatomic) NSString *recoveryAltDSID;
@property (nonatomic, readonly) _Bool needsRecoveryAppleID;
@property (copy, nonatomic, readonly) NSString *givenName;
@property (nonatomic, readonly) _Bool isParent;
@property (nonatomic, readonly) _Bool isChild;

+ (id)keyPathsForValuesAffectingHasPasscode;
+ (id)keyPathsForValuesAffectingGivenName;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUser:(id)arg1;

@end
