/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSData, NSString;

@interface CRKSetUserImageRequest : CATTaskRequest

{
    NSString *_userIdentifier;
    NSData *_userImageData;
    DMFControlGroupIdentifier *_courseIdentifier;
}

@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSData *userImageData;
@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
