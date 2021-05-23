/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSArray, NSNumber, NSString;

@interface DMFAssignUserRequest

{
    NSString *_userIdentifier;
    NSNumber *_groupID;
    NSString *_displayName;
    NSString *_givenName;
    NSString *_familyName;
    NSString *_imageURL;
    NSString *_fullScreenImageURL;
    NSString *_appleID;
    NSString *_passcodeType;
    NSString *_password;
    NSArray *_enrolledGroupIdentifiers;
}

@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *fullScreenImageURL;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *passcodeType;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSArray *enrolledGroupIdentifiers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
