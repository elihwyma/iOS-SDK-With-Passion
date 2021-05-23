/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSData, NSDate, NSString;

@interface CNGroup : NSObject <Swift>

{
    NSString *_identifier;
    NSString *_name;
    int _iOSLegacyIdentifier;
    CNGroup *_snapshot;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSString *_externalIdentifier;
    NSData *_externalRepresentation;
    NSString *_externalModificationTag;
    NSString *_externalUUID;
}

@property (copy, nonatomic, readonly) NSString *externalIdentifier;
@property (copy, nonatomic, readonly) NSData *externalRepresentation;
@property (copy, nonatomic, readonly) NSString *externalModificationTag;
@property (copy, nonatomic, readonly) NSString *externalUUID;
@property (copy, nonatomic, readonly) CNGroup *snapshot;
@property (nonatomic, readonly) int iOSLegacyIdentifier;
@property (copy, nonatomic, readonly) NSDate *creationDate;
@property (copy, nonatomic, readonly) NSDate *modificationDate;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *name;

+ (_Bool)supportsSecureCoding;
+ (id)localizedStringForKey:(id)arg1;
+ (id)identifierProvider;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)predicateForiOSLegacyIdentifier:(int)arg1;
+ (id)predicateForGroupsWithIdentifiers:(id)arg1;
+ (id)predicateForGroupsInContainerWithIdentifier:(id)arg1;
+ (id)predicateForSubgroupsInGroupWithIdentifier:(id)arg1;
+ (id)predicateForGroupsWithNameMatching:(id)arg1;
+ (id)predicateForGroupWithNameMatching:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithGroup:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 creationDate:(id)arg3 modificationDate:(id)arg4;

@end
