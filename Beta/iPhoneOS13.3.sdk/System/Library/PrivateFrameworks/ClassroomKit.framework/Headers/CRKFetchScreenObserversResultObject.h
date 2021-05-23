/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchScreenObserversResultObject : CATTaskResultObject

{
    NSDictionary *_observingInstructorIdentifiersByCourseCourseIdentifiers;
}

@property (copy, nonatomic) NSDictionary *observingInstructorIdentifiersByCourseCourseIdentifiers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
