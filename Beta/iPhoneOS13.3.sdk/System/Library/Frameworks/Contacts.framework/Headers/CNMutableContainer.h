/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNContainer.h>

@class NSData, NSDate, NSString;

@interface CNMutableContainer : CNContainer

@property (nonatomic) long long type;
@property (nonatomic) int iOSLegacyIdentifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *externalSyncTag;
@property (copy, nonatomic) NSData *externalSyncData;
@property (copy, nonatomic) NSString *constraintsPath;
@property (copy, nonatomic) NSString *meIdentifier;
@property (nonatomic) unsigned long long restrictions;
@property (nonatomic, getter=isGuardianStateDirty) _Bool guardianStateDirty;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isGuardianRestricted) _Bool guardianRestricted;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;

- (id)copy;
- (id)freeze;
- (void)setSnapshot:(id)arg1;
- (id)freezeWithSelfAsSnapshot;
- (void)adoptValuesFromAndSetSnapshot:(id)arg1;
- (void)setParentallyManaged:(_Bool)arg1;
- (void)setGuardianRestricted:(_Bool)arg1 shouldPushChangeToServer:(_Bool)arg2;

@end
