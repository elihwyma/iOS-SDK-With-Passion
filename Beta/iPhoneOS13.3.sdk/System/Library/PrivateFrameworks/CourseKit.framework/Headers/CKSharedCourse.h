/*
 Image: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit
 */

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, UIImage;

@interface CKSharedCourse : NSManagedObject

@property (copy, nonatomic) NSString *courseID;
@property (retain, nonatomic) NSNumber *managedClassID;
@property (nonatomic) long long enrollmentType;
@property (copy, nonatomic) NSString *shortName;
@property (copy, nonatomic) NSString *longName;
@property (copy, nonatomic) NSString *institutionName;
@property (retain, nonatomic) UIImage *courseCover;
@property (copy, nonatomic) NSString *courseCoverChecksum;

@end
