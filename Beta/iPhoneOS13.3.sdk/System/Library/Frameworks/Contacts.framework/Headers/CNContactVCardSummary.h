/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNContactVCardSummary : NSObject <Swift>

{
    NSString *_title;
    NSString *_subtitle;
    unsigned long long _contactCount;
    NSArray *_avatarContacts;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *descriptiveLabel;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) unsigned long long contactCount;
@property (copy, nonatomic, readonly) NSArray *avatarContacts;

+ (_Bool)supportsSecureCoding;
+ (id)readingOptionsWithContactLimit:(unsigned long long)arg1;
+ (id)namesForContact:(id)arg1;
+ (id)nameForContact:(id)arg1;
+ (id)localizedStringWithName:(id)arg1 andOtherName:(id)arg2;
+ (id)localizedStringWithName:(id)arg1 andThisManyOthers:(unsigned long long)arg2;
+ (id)defaultNameFormatter;
+ (id)makeFormatter;
+ (_Bool)isAvatarContacts:(id)arg1 equalTo:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 contactCount:(unsigned long long)arg3 avatarContacts:(id)arg4;

@end
