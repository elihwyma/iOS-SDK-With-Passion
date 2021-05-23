/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/Swift-Protocol.h>

@class NSArray, NSDictionary, NSSet;

@protocol CRKSettingsPaneInfoProvider <Swift>

@property (copy, nonatomic, readonly) NSArray *courses;
@property (copy, nonatomic, readonly) NSArray *courseInvitations;
@property (copy, nonatomic, readonly) NSSet *acceptedInvitationIdentifiers;
@property (nonatomic, readonly) NSDictionary *observingInstructorIdentifiersByCourseIdentifiers;

@end
