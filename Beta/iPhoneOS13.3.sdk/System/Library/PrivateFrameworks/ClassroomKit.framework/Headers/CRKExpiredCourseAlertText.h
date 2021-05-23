/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CRKCourse, NSString;

@interface CRKExpiredCourseAlertText : NSObject

{
    CRKCourse *_course;
}

@property (nonatomic, readonly) CRKCourse *course;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *acknowledgeOptionTitle;
@property (nonatomic, readonly) NSString *message;

+ (id)new;

- (id)init;
- (id)initWithCourse:(id)arg1;

@end
