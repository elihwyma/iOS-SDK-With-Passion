/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLEngineLibrary, NSArray, NSDate, NSMutableArray, NSURL;

@protocol CPLEngineTransportSendFeedbackTask, OS_dispatch_queue;

@interface CPLEngineFeedbackManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <CPLEngineTransportSendFeedbackTask> _sendTask;
    NSMutableArray *_messagesToSend;
    NSArray *_messagesSending;
    NSDate *_lastAttemptDate;
    NSURL *_feedbackMessagesURL;
    _Bool _opened;
    _Bool _closed;
    _Bool _deactivated;
    CPLEngineLibrary *_engineLibrary;
}

@property (weak, nonatomic, readonly) CPLEngineLibrary *engineLibrary;

- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_load;
- (id)componentName;
- (void)_save;
- (void)reportMiscInformation:(id)arg1;
- (void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithEngineLibrary:(id)arg1;
- (void)_appendMessage:(id)arg1;
- (void)_appendMessages:(id)arg1;
- (void)_reallySendFeedbackToServer;
- (void)_sendFeedbackToServerIfNecessary;
- (void)sendFeedbackToServerIfNecessary;
- (void)reportMessage:(id)arg1;
- (void)reportMessages:(id)arg1;
- (void)reportResetType:(id)arg1 reason:(id)arg2 uuid:(id)arg3;
- (void)reportEndOfResetWithUUID:(id)arg1 reason:(id)arg2;
- (void)reportFetchChangesRewindToFeatureVersion:(unsigned long long)arg1;

@end
