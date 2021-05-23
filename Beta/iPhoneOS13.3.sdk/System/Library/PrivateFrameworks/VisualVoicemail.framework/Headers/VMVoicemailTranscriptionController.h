/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

@class NSLocale, NSMapTable, NSOperationQueue, NSProgress, VMTranscriptionAssetModelOperation;

@protocol OS_dispatch_queue, VMNetworkObserver, VMSpeechRecognizer, VMTranscriptionService;

@interface VMVoicemailTranscriptionController : NSObject

{
    _Bool _transcribing;
    VMTranscriptionAssetModelOperation *_assetModelOperation;
    NSLocale *_locale;
    id <VMNetworkObserver> _networkObserver;
    id <VMSpeechRecognizer> _speechRecognizer;
    NSOperationQueue *_transcriptionOperationQueue;
    NSProgress *_transcriptionProgress;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    NSMapTable *_delegateToQueue;
    id <VMTranscriptionService> _transcriptionService;
}

@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSOperationQueue *transcriptionOperationQueue;
@property (weak, nonatomic) VMTranscriptionAssetModelOperation *assetModelOperation;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (nonatomic, readonly) NSMapTable *delegateToQueue;
@property (retain, nonatomic) id <VMTranscriptionService> transcriptionService;
@property (retain, nonatomic) id <VMNetworkObserver> networkObserver;
@property (nonatomic, readonly) id <VMSpeechRecognizer> speechRecognizer;
@property (nonatomic, readonly) NSProgress *transcriptionProgress;
@property (nonatomic, readonly, getter=isTranscribing) _Bool transcribing;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithLocale:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;
- (void)handleCPNetworkObserverNetworkReachableNotification:(id)arg1;
- (void)requestDatabaseSanitization;
- (_Bool)isDictationModelInstalled;
- (void)requestAssetModelInstallation;
- (void)retrieveDictationResultForFileAtURL:(id)arg1 queuePriority:(long long)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reportDictationProblemForFileAtURL:(id)arg1;
- (id)initWithSpeechRecognizer:(id)arg1;
- (void)requestAssetModelOperationWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeNetworkReachableObserver;
- (id)assetModelOperationWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelQueuedTranscriptions;

@end
