/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface ASActivityDataNotificationGroup : NSObject

{
    NSSet *_goalCompletionNotifications;
    NSSet *_achievementNotifications;
    NSSet *_workoutNotifications;
}

@property (retain, nonatomic) NSSet *goalCompletionNotifications;
@property (retain, nonatomic) NSSet *achievementNotifications;
@property (retain, nonatomic) NSSet *workoutNotifications;
@property (nonatomic, readonly) NSSet *allNotifications;

- (unsigned long long)notificationCount;

@end
