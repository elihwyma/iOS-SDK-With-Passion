/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CKDMarkNotificationsReadOperation : CKDOperation

{
    CDUnknownBlockType _notificationMarkedRead;
    NSArray *_notificationIDs;
    NSMutableDictionary *_errorByNotificationID;
    NSMutableSet *_successfulNotificationIDs;
}

@property (retain, nonatomic) NSArray *notificationIDs;
@property (retain, nonatomic) NSMutableDictionary *errorByNotificationID;
@property (retain, nonatomic) NSMutableSet *successfulNotificationIDs;
@property (copy, nonatomic) CDUnknownBlockType notificationMarkedRead;

+ (long long)isPredominatelyDownload;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)_handleNotificationID:(id)arg1 withResponse:(id)arg2;

@end
