/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@interface CNContainerPermissions : NSObject <Swift>

{
    _Bool _canCreateContacts;
    _Bool _canDeleteContacts;
    _Bool _canCreateGroups;
}

@property (nonatomic, readonly) _Bool canCreateContacts;
@property (nonatomic, readonly) _Bool canDeleteContacts;
@property (nonatomic, readonly) _Bool canCreateGroups;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCanCreateContacts:(_Bool)arg1 canDeleteContacts:(_Bool)arg2 canCreateGroups:(_Bool)arg3;

@end
