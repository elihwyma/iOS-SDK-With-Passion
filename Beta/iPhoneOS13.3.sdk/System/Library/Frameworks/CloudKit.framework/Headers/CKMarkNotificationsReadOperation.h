/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKMarkNotificationsReadOperation : CKOperation

{
    CDUnknownBlockType _markNotificationsReadCompletionBlock;
    NSArray *_notificationIDs;
    NSMutableArray *_notificationIDsMarkedRead;
    NSMutableDictionary *_errorsByNotificationID;
}

@property (retain, nonatomic) NSMutableArray *notificationIDsMarkedRead;
@property (retain, nonatomic) NSMutableDictionary *errorsByNotificationID;
@property (copy, nonatomic) NSArray *notificationIDs;
@property (copy, nonatomic) CDUnknownBlockType markNotificationsReadCompletionBlock;

- (id)init;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (id)initWithNotificationIDsToMarkRead:(id)arg1;

@end
