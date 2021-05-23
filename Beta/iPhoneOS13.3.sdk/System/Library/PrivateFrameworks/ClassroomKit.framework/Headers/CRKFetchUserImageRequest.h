/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSString;

@interface CRKFetchUserImageRequest : CATTaskRequest

{
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_userIdentifier;
}

@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic) NSString *userIdentifier;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
