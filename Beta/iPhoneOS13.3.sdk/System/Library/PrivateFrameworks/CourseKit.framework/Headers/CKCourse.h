/*
 Image: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString, NSURL, UIImage;

@interface CKCourse : NSObject

{
    NSDictionary *_sharedCourse;
}

@property (copy, nonatomic) NSDictionary *sharedCourse;
@property (copy, nonatomic, readonly) NSString *courseID;
@property (nonatomic, readonly) NSNumber *managedClassID;
@property (nonatomic, readonly) long long enrollmentType;
@property (copy, nonatomic, readonly) NSString *shortName;
@property (copy, nonatomic, readonly) NSString *longName;
@property (copy, nonatomic, readonly) NSString *institutionName;
@property (nonatomic, readonly) UIImage *courseCover;
@property (nonatomic, readonly) NSURL *courseURL;

+ (void)initialize;
+ (id)sharedCoursePropertiesToFetch;

- (id)initWithSharedCourse:(id)arg1;

@end
