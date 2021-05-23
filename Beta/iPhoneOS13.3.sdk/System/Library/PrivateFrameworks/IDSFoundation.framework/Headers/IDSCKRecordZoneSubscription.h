/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSCKSubscription.h>

@class IDSCKNotificationInfo;

@interface IDSCKRecordZoneSubscription : IDSCKSubscription

{
    IDSCKNotificationInfo *_notificationInfo;
}

@property (copy, nonatomic) IDSCKNotificationInfo *notificationInfo;

+ (id)alloc;
+ (Class)__class;

@end
