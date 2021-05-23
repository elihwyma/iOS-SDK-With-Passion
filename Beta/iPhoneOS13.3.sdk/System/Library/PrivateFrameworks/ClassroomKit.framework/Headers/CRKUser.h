/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

#import <ClassroomKit/Swift-Protocol.h>

@class CRKImage, NSData, NSPersonNameComponents, NSString;

@interface CRKUser : NSObject <Swift>

{
    _Bool _useMeCardIfAvailable;
    NSString *_userIdentifier;
    NSString *_displayName;
    NSString *_givenName;
    NSString *_familyName;
    NSString *_phoneticGivenName;
    NSString *_phoneticFamilyName;
    NSString *_imageIdentifier;
    NSString *_imageURL;
    NSString *_userSource;
    long long _role;
    NSData *_userImageData;
    CRKImage *_userImage;
}

@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *phoneticGivenName;
@property (copy, nonatomic) NSString *phoneticFamilyName;
@property (copy, nonatomic) NSString *imageIdentifier;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *userSource;
@property (nonatomic, getter=shouldUseMeCardIfAvailable) _Bool useMeCardIfAvailable;
@property (copy, nonatomic) NSData *userImageData;
@property (copy, nonatomic) CRKImage *userImage;
@property (nonatomic) long long role;
@property (copy, nonatomic, readonly) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly) _Bool isMeCardUser;
@property (nonatomic, readonly) _Bool isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)recordType;
+ (id)instanceWithParentObject:(id)arg1 keyValue:(id)arg2;
+ (id)skeletonInstance;
+ (id)instanceWithRecord:(id)arg1;
+ (id)meCardUser;
+ (id)customUserFromMeCardUser:(id)arg1;
+ (id)instanceWithKeyValue:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)recordName;
- (_Bool)isEqualToUser:(id)arg1;
- (id)dictionaryValue;
- (void)applyFieldsToRecord:(id)arg1;
- (_Bool)isChangedFrom:(id)arg1;
- (void)updateUserImage;

@end
