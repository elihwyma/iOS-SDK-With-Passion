/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSArray, NSString;

@interface CRKSetCoursePropertiesRequest : CATTaskRequest

{
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_courseName;
    NSString *_courseDescription;
    NSArray *_anchorCertificates;
}

@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic) NSString *courseName;
@property (copy, nonatomic) NSString *courseDescription;
@property (copy, nonatomic) NSArray *anchorCertificates;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
