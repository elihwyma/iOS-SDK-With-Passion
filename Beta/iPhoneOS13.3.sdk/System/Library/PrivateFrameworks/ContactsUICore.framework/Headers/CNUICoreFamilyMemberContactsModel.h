/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

#import <ContactsUICore/Swift-Protocol.h>

@class NSArray;

@interface CNUICoreFamilyMemberContactsModel : NSObject <Swift>

{
    NSArray *_items;
}

@property (nonatomic, readonly) NSArray *items;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;

@end
