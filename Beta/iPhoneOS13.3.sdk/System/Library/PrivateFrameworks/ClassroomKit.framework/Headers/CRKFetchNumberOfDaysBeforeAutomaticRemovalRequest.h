/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class DMFControlGroupIdentifier;

@interface CRKFetchNumberOfDaysBeforeAutomaticRemovalRequest : CATTaskRequest

{
    DMFControlGroupIdentifier *_groupIdentifier;
}

@property (retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
