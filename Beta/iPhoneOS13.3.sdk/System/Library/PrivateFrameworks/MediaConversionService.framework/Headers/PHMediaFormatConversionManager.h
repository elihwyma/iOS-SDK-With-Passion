/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSURL, PHMediaFormatConversionJob;

@protocol OS_dispatch_queue, PHMediaFormatConversionImplementation;

@interface PHMediaFormatConversionManager : NSObject

{
    CDUnknownBlockType _transferBehaviorUserPreferenceOverride;
    NSURL *_directoryForTemporaryFiles;
    unsigned long long _state;
    NSObject<PHMediaFormatConversionImplementation> *_conversionImplementation;
    NSMutableArray *_queuedJobs;
    PHMediaFormatConversionJob *_currentlyProcessingJob;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_preflightQueue;
}

@property unsigned long long state;
@property (retain) NSObject<PHMediaFormatConversionImplementation> *conversionImplementation;
@property (retain) NSMutableArray *queuedJobs;
@property (retain) PHMediaFormatConversionJob *currentlyProcessingJob;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain) NSObject<OS_dispatch_queue> *preflightQueue;
@property (retain, nonatomic) NSURL *directoryForTemporaryFiles;

- (id)init;
- (void)invalidate;
- (void)preflightConversionRequest:(id)arg1;
- (void)enqueueConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setupConversionImplementation;
- (void)preflightConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configureTransferBehaviorUserPreferenceForRequest:(id)arg1;
- (void)setTransferBehaviorUserPreferenceOverride:(CDUnknownBlockType)arg1;
- (void)processQueuedJobs;
- (void)performConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)validateLivePhotoPairingIdentifierConfigurationForRequest:(id)arg1;
- (void)preflightAllRelatedRequestsForCurrentJob;
- (id)rootAncestorRequestForRequest:(id)arg1;
- (id)jobForConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancellationRequestedForJob:(id)arg1;
- (id)ut_objectsToBeDeallocatedWithReceiver;

@end
