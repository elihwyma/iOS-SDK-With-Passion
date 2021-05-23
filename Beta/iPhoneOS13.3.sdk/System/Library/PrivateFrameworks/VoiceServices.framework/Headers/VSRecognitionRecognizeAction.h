/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <VoiceServices/VSRecognitionAction.h>

@class NSArray, NSString;

@interface VSRecognitionRecognizeAction : VSRecognitionAction

{
    NSString *_modelIdentifier;
    NSArray *_keywords;
    void *_recognition;
    NSArray *_results;
    NSString *_debugDumpPath;
    NSString *_audioInputPath;
    double _levelInterval;
    struct {
        unsigned int debugDumpEnabled:1;
        unsigned int preferredEngine:2;
        unsigned int resetEngine:1;
        unsigned int bluetoothAllowed:1;
        unsigned int hasStarted:1;
    } _recognizeFlags;
}

- (void)dealloc;
- (id)cancel;
- (void)_reset;
- (id)_keywords;
- (id)modelIdentifier;
- (id)perform;
- (void)_setResults:(id)arg1;
- (int)completionType;
- (void)_continueAfterDeferredStart;
- (_Bool)_hasDeferredStartCallback;
- (id)_debugDumpPath;
- (id)initWithModelIdentifier:(id)arg1;
- (_Bool)_isRecognizing;
- (_Bool)_isActivelyRecognizing;
- (_Bool)_setBluetoothInputAllowed:(_Bool)arg1;
- (_Bool)_setDebugDumpPath:(id)arg1;
- (_Bool)_setDebugDumpEnabled:(_Bool)arg1;
- (_Bool)_setPreferredEngine:(int)arg1;
- (_Bool)_setAudioInputPath:(id)arg1;
- (_Bool)_setInputLevelUpdateInterval:(double)arg1;
- (_Bool)_setEngineResetRequired:(_Bool)arg1;
- (void)_handledThreadedResults:(id)arg1 nextAction:(id)arg2;
- (float)_inputLevel;
- (float)_inputLevelDB;
- (id)_keywordAtIndex:(long long)arg1;
- (long long)_keywordCount;
- (_Bool)_keywordIndexChanged;
- (struct __VSRecognition *)_createRecognitionInstanceWithCallbacks:(CDStruct_90f67059 *)arg1 info:(void *)arg2;
- (id)_actionForEmptyResults;
- (_Bool)_setDebugDumpEnabled:(_Bool)arg1 dumpPath:(id)arg2;
- (void)_configureNewRecognitionInstance;
- (void)_releaseFromPrepare;
- (void)_handleRecognitionPrepared:(struct __VSRecognition *)arg1;
- (void)_handleRecognitionStarted:(struct __VSRecognition *)arg1;
- (void)_handleRecognitionCompleted:(struct __VSRecognition *)arg1 withResults:(struct __CFArray *)arg2 error:(struct __CFError *)arg3;

@end
