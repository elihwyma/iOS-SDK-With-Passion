/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class CNContainerPermissions, NSData, NSDate, NSString;

@interface CNContainer : NSObject <Swift>

{
    NSString *_identifier;
    NSString *_name;
    long long _type;
    int _iOSLegacyIdentifier;
    NSString *_accountIdentifier;
    _Bool _enabled;
    CNContainerPermissions *_permissions;
    NSString *_externalIdentifier;
    NSString *_externalModificationTag;
    NSString *_externalSyncTag;
    NSData *_externalSyncData;
    NSString *_constraintsPath;
    NSString *_meIdentifier;
    unsigned long long _restrictions;
    CNContainer *_snapshot;
    _Bool _guardianRestricted;
    _Bool _guardianStateDirty;
    NSDate *_lastSyncDate;
}

@property (copy, nonatomic, readonly) CNContainer *snapshot;
@property (copy, nonatomic, readonly) NSString *externalIdentifier;
@property (copy, nonatomic, readonly) NSString *externalModificationTag;
@property (copy, nonatomic, readonly) NSString *externalSyncTag;
@property (copy, nonatomic, readonly) NSData *externalSyncData;
@property (copy, nonatomic, readonly) NSString *constraintsPath;
@property (copy, nonatomic, readonly) NSString *meIdentifier;
@property (nonatomic, readonly) unsigned long long restrictions;
@property (nonatomic, readonly, getter=isGuardianStateDirty) _Bool guardianStateDirty;
@property (nonatomic, readonly) int iOSLegacyIdentifier;
@property (copy, nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (copy, nonatomic, readonly) CNContainerPermissions *permissions;
@property (nonatomic, readonly, getter=isGuardianRestricted) _Bool guardianRestricted;
@property (nonatomic, readonly, getter=isParentallyManaged) _Bool parentallyManaged;
@property (nonatomic, readonly) NSDate *lastSyncDate;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long type;

+ (_Bool)supportsSecureCoding;
+ (id)identifierProvider;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)predicateForContainersWithIdentifiers:(id)arg1;
+ (id)predicateForContainerOfContactWithIdentifier:(id)arg1;
+ (id)predicateForContainerOfGroupWithIdentifier:(id)arg1;
+ (id)predicateForContainersInAccountWithIdentifier:(id)arg1 includingDisabledContainers:(_Bool)arg2;
+ (id)predicateForContainersInAccountWithIdentifier:(id)arg1;
+ (id)predicateForContainersInAccountWithExternalIdentifier:(id)arg1;
+ (id)predicateForDefaultContainerForAccountWithIdentifier:(id)arg1;
+ (id)predicateForContainersIncludingDisabled:(_Bool)arg1;
+ (id)predicateForLocalContainerIncludingDisabled:(_Bool)arg1;
+ (id)predicateForiOSLegacyIdentifier:(int)arg1;
+ (id)makeDefaultContainerPermissions;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithContainer:(id)arg1;
- (id)initWithIdentifier:(id)arg1 accountIdentifier:(id)arg2 name:(id)arg3 type:(long long)arg4 permissions:(id)arg5;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 iOSLegacyIdentifier:(int)arg4 accountIdentifier:(id)arg5 enabled:(_Bool)arg6 permissions:(id)arg7 externalIdentifier:(id)arg8 externalModificationTag:(id)arg9 externalSyncTag:(id)arg10 externalSyncData:(id)arg11 constraintsPath:(id)arg12 meIdentifier:(id)arg13 restrictions:(unsigned long long)arg14 guardianRestricted:(_Bool)arg15 lastSyncDate:(id)arg16;
- (id)descriptionForContainerType:(long long)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3;

@end
