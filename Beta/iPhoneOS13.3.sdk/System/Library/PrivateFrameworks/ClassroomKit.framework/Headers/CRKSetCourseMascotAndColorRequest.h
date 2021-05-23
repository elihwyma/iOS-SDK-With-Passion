/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class DMFControlGroupIdentifier;

@interface CRKSetCourseMascotAndColorRequest : CATTaskRequest

{
    DMFControlGroupIdentifier *_courseIdentifier;
    unsigned long long _mascotType;
    unsigned long long _colorType;
}

@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (nonatomic) unsigned long long mascotType;
@property (nonatomic) unsigned long long colorType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
