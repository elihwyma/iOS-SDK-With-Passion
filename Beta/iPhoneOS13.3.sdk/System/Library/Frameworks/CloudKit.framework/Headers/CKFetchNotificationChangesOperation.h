/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperation.h>

@class CKServerChangeToken;

@interface CKFetchNotificationChangesOperation : CKOperation

{
    _Bool _moreComing;
    CDUnknownBlockType _notificationChangedBlock;
    CDUnknownBlockType _fetchNotificationChangesCompletionBlock;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    CKServerChangeToken *_resultServerChangeToken;
}

@property (retain, nonatomic) CKServerChangeToken *resultServerChangeToken;
@property (nonatomic) _Bool moreComing;
@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) CDUnknownBlockType notificationChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType fetchNotificationChangesCompletionBlock;

- (id)init;
- (id)initWithPreviousServerChangeToken:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;

@end
