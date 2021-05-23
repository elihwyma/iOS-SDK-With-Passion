/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchActiveStudentCourseIdentifiersResultObject : CATTaskResultObject

{
    NSArray *_activeCourseIdentifiers;
    NSArray *_activeInstructorIdentifiers;
}

@property (copy, nonatomic) NSArray *activeCourseIdentifiers;
@property (copy, nonatomic) NSArray *activeInstructorIdentifiers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
