/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class DMFControlGroupIdentifier;

@interface CRKSetActiveControlGroupRequest : CATTaskRequest

{
    DMFControlGroupIdentifier *_groupIdentifier;
}

@property (copy, nonatomic) DMFControlGroupIdentifier *groupIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
