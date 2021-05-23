/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchCoursesResultObject : CATTaskResultObject

{
    NSArray *_courses;
}

@property (copy, nonatomic) NSArray *courses;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
