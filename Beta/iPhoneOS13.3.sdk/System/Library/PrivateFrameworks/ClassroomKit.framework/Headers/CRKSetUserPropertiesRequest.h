/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSData, NSNumber, NSString;

@interface CRKSetUserPropertiesRequest : CATTaskRequest

{
    NSString *_userIdentifier;
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_displayName;
    NSString *_givenName;
    NSString *_familyName;
    NSString *_phoneticGivenName;
    NSString *_phoneticFamilyName;
    NSString *_userSource;
    NSData *_imageData;
    NSNumber *_useMeCardIfAvailable;
}

@property (copy, nonatomic) NSString *userIdentifier;
@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *phoneticGivenName;
@property (copy, nonatomic) NSString *phoneticFamilyName;
@property (copy, nonatomic) NSString *userSource;
@property (copy, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSNumber *useMeCardIfAvailable;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1;

@end
