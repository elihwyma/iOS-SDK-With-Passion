/*
 Image: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
 */

#import <Foundation/NSObject.h>

@class FCKeyValueStore, NDAnalyticsEnvelopeStore, NDAnalyticsPayloadAssembler, NDAnalyticsPayloadUploader, NDAnalyticsUploadScheduler, NFMutexLock, NSString;

@protocol NDAnalyticsEnvelopeTracker;

@interface NDAnalyticsEnvelopeManager : NSObject

{
    NDAnalyticsEnvelopeStore *_envelopeStore;
    NDAnalyticsPayloadAssembler *_payloadAssembler;
    NDAnalyticsPayloadUploader *_payloadUploader;
    NDAnalyticsUploadScheduler *_uploadScheduler;
    FCKeyValueStore *_lastUploadDatesByContentType;
    NFMutexLock *_keyValueStoreLock;
    id <NDAnalyticsEnvelopeTracker> _envelopeTracker;
}

@property (retain, nonatomic) NDAnalyticsEnvelopeStore *envelopeStore;
@property (retain, nonatomic) NDAnalyticsPayloadAssembler *payloadAssembler;
@property (retain, nonatomic) NDAnalyticsPayloadUploader *payloadUploader;
@property (retain, nonatomic) NDAnalyticsUploadScheduler *uploadScheduler;
@property (retain, nonatomic) FCKeyValueStore *lastUploadDatesByContentType;
@property (retain, nonatomic) NFMutexLock *keyValueStoreLock;
@property (retain, nonatomic) id <NDAnalyticsEnvelopeTracker> envelopeTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithAppConfigurationManager:(id)arg1 storeDirectoryFileURL:(id)arg2 URLSessionQueue:(id)arg3 envelopeTracker:(id)arg4;
- (void)submitEnvelopes:(id)arg1 withSubmissionCompletion:(CDUnknownBlockType)arg2 foregroundUploadCompletion:(CDUnknownBlockType)arg3;
- (void)submitEnvelopes:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleLaunchEventForBackgroundSessionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_scheduleUploadIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (id)_lastUploadDatesByContentType;
- (id)_handleDroppedEnvelopesForLocalReasons:(id)arg1;
- (id)_handleOutcomeOfUploadAttemptWithPayload:(id)arg1 success:(_Bool)arg2 error:(id)arg3 willRetry:(_Bool)arg4 hitEndpoint:(_Bool)arg5;
- (void)envelopeStore:(id)arg1 didFlushEnvelopesForEntries:(id)arg2;
- (void)uploadScheduler:(id)arg1 performUploadWithCompletion:(CDUnknownBlockType)arg2;
- (void)uploadSchedulerDidDropScheduledBackgroundUpload:(id)arg1;

@end
