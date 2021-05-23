/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetWriterHelper.h>

@class AVAssetWriterFigAssetWriterNotificationHandler, NSObject, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetWriterWritingHelper : AVAssetWriterHelper

{
    struct OpaqueFigAssetWriter *_figAssetWriter;
    NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;
    _Bool _startSessionCalled;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
    void *_callbackContextToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)finishWritingDelegateOperationWithAssetWriter:(id)arg1 andFigAssetWriter:(struct OpaqueFigAssetWriter *)arg2 andDelegate:(id)arg3;
+ (id)prepareInputsOperationsWithInputs:(id)arg1;
+ (id)finalStepWorkaroundOperationWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1;

- (void)dealloc;
- (long long)status;
- (void)finishWriting;
- (void)flush;
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)cancelWriting;
- (id)initWithConfigurationState:(id)arg1;
- (id)initWithConfigurationState:(id)arg1 error:(id *)arg2;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)figTrackReferences;
- (struct OpaqueFigAssetWriter *)_retainedFigAssetWriter;
- (id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)arg1;
- (id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)arg1;

@end
