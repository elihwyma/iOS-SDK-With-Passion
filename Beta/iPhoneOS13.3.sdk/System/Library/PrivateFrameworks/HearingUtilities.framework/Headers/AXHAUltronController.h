/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <NSObject.h>

@class AVAudioEngine, AVAudioFormat, AVAudioSession, AXUIClient, NSMutableArray, NSMutableDictionary, NSString, SBSStatusBarStyleOverridesAssertion, SNAudioStreamAnalyzer;

@protocol OS_dispatch_queue;

@interface AXHAUltronController : NSObject

{
    SBSStatusBarStyleOverridesAssertion *_llStatusBarAssertion;
    SNAudioStreamAnalyzer *_listener;
    AXUIClient *_hearingUIClient;
    NSObject<OS_dispatch_queue> *_audioProcessingQueue;
    _Bool _isRecording;
    AVAudioEngine *_audioEngine;
    AVAudioFormat *_clientFormat;
    AVAudioSession *_session;
    NSMutableArray *_bufferCollection;
    NSMutableDictionary *_detectionResultCollection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)directory;
- (void)_processResult:(id)arg1;
- (_Bool)isListening;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)startUltron;
- (void)stopUltron;
- (void)reduceFileDirectorySize;
- (id)recorderSettings;
- (id)getDictionaryForListenType;
- (void)_configureAudioCapture;
- (void)_registerListeningRequestTypes;
- (void)_startAudioSession;
- (void)_stopAudioSession;
- (void)_handleAudioSessionInterruption:(id)arg1;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (id)hearingUIClient;
- (void)cleanupUltron;
- (void)toggleUltronSupport:(_Bool)arg1;

@end
