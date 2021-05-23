/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

@class CKServerChangeToken;

__attribute__((visibility("hidden")))
@interface CKDFetchNotificationChangesOperation : CKDOperation

{
    _Bool _wantsChanges;
    _Bool _moreComing;
    CDUnknownBlockType _notificationChangedBlock;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    CKServerChangeToken *_resultServerChangeToken;
}

@property (retain, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) _Bool wantsChanges;
@property (retain, nonatomic) CKServerChangeToken *resultServerChangeToken;
@property (nonatomic) _Bool moreComing;
@property (copy, nonatomic) CDUnknownBlockType notificationChangedBlock;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (Class)operationResultClass;
- (void)fillOutOperationResult:(id)arg1;
- (void)_handleFetchChangesRequestFinished:(id)arg1;

@end
