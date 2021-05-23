/*
 Image: /System/Library/Frameworks/Speech.framework/Speech
 */

#import <Foundation/NSObject.h>

@class AFDictationConnection, NSError, NSOperationQueue, NSString, SFSpeechRecognitionRequest;

@protocol OS_dispatch_queue;

@interface SFSpeechRecognitionTask : NSObject

{
    AFDictationConnection *_dictationConnection;
    NSOperationQueue *_externalQueue;
    NSString *_languageCode;
    SFSpeechRecognitionRequest *_request;
    NSObject<OS_dispatch_queue> *_internalQueue;
    _Bool _completed;
    _Bool _running;
    _Bool _finishing;
    _Bool _cancelled;
    long long _taskHint;
    NSError *_error;
    NSString *_requestIdentifier;
}

@property (nonatomic, readonly) long long _taskHint;
@property (copy, nonatomic, readonly) NSString *requestIdentifier;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly, getter=isFinishing) _Bool finishing;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (copy, nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transcriptionsWithTokens:(id)arg1;
+ (id)recognizedResultFromPackage:(id)arg1;

- (void)cancel;
- (void)finish;
- (float)averagePower;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)stopSpeech;
- (float)peakPower;
- (void)addRecordedSpeechSampleData:(id)arg1;
- (id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4;

@end
