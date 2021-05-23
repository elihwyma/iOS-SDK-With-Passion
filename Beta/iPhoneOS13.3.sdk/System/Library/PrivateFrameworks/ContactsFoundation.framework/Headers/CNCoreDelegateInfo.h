/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSPersonNameComponents, NSString;

@interface CNCoreDelegateInfo : NSObject

{
    NSNumber *_dsid;
    NSString *_altDSID;
    NSString *_appleID;
    NSString *_principalPath;
    NSPersonNameComponents *_nameComponents;
    _Bool _isMe;
}

@property (copy, nonatomic, readonly) NSNumber *dsid;
@property (copy, nonatomic, readonly) NSString *altDSID;
@property (copy, nonatomic, readonly) NSString *principalPath;
@property (copy, nonatomic, readonly) NSString *appleID;
@property (copy, nonatomic, readonly) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly) _Bool isMe;

+ (_Bool)supportsSecureCoding;
+ (id)nameComponentsForFamilyMember:(id)arg1;
+ (id)hardCodedPrincipalPathForDSID:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFamilyMember:(id)arg1;
- (id)initWithDSID:(id)arg1 altDSID:(id)arg2 appleID:(id)arg3 principalPath:(id)arg4 nameComponents:(id)arg5 isMe:(_Bool)arg6;
- (id)_hardCodedPrincipalPathForFamilyMember:(id)arg1;
- (id)initWithAltDSID:(id)arg1;

@end
