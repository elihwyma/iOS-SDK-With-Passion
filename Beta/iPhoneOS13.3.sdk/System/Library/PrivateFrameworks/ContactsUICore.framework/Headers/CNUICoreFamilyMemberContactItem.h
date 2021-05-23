/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

#import <ContactsUICore/Swift-Protocol.h>

@class NSData, NSString;

@interface CNUICoreFamilyMemberContactItem : NSObject <Swift>

{
    _Bool _isUnreachable;
    _Bool _hasBeenPersisted;
    NSString *_contactIdentifier;
    NSString *_formattedName;
    NSData *_imageData;
    long long _contactType;
    long long _whitelistStatus;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSString *formattedName;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) _Bool isUnreachable;
@property (nonatomic, readonly) long long contactType;
@property (nonatomic, readonly) long long whitelistStatus;
@property (nonatomic, readonly) _Bool hasBeenPersisted;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1 formattedName:(id)arg2 imageData:(id)arg3 isUnreachable:(_Bool)arg4 contactType:(long long)arg5 whitelistStatus:(long long)arg6 hasBeenPersisted:(_Bool)arg7;

@end
