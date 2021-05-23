/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSDictionary, NSString;

@interface CRKAcceptCourseInvitationRequest : CATTaskRequest

{
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_pin;
    NSDictionary *_studentInformation;
}

@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic) NSString *pin;
@property (copy, nonatomic) NSDictionary *studentInformation;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
