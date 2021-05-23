/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

#import <SpeechRecognitionCommandAndControl/Swift-Protocol.h>

@class NSDictionary, NSOperationQueue, NSString;

@interface CACMessageTracerUtilities : NSObject <Swift>

{
    NSString *_localeIdentifier;
    NSString *_targetApplicationIdentifier;
    NSString *_textAreaIdentifierOrLabel;
    NSString *_textAreaSelectionRange;
    NSDictionary *_customUserCommandProperties;
    NSDictionary *_recognitionProperties;
    NSOperationQueue *_remoteSpeechOperationQueue;
}

@property (retain, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) NSString *targetApplicationIdentifier;
@property (retain, nonatomic) NSString *textAreaIdentifierOrLabel;
@property (retain, nonatomic) NSString *textAreaSelectionRange;
@property (retain, nonatomic) NSDictionary *customUserCommandProperties;
@property (retain, nonatomic) NSDictionary *recognitionProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedCACMessageTracerUtilities;

- (id)init;
- (void)speechRecognitionDidDetectSpeech:(id)arg1;
- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTaskFinishedReadingAudio:(id)arg1;
- (void)speechRecognitionTaskWasCancelled:(id)arg1;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(_Bool)arg2;
- (void)speechRecognitionTask:(id)arg1 didProcessAudioDuration:(double)arg2;
- (id)_mutablePlistCompatibleObjectFromObject:(id)arg1;
- (void)sendCoreAnalyticsForRecognizedCommandIdentifier:(id)arg1 appIdentifier:(id)arg2;
- (void)sendRecentAudioDataToAppleServers;
- (id)dictionaryOfNormallyStaticPreferenceValuesForCoreAnalytics;
- (void)logCommandWithIdentifier:(id)arg1;
- (void)removeCachedAudioFile;

@end
