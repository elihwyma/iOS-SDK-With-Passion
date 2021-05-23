/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKVoiceController, NSDate, NSString, NSURL;

@protocol CKAudioRecorderDelegate;

@interface CKAudioRecorder : NSObject

{
    _Bool _recording;
    _Bool _recordingEmpty;
    _Bool _cancelled;
    _Bool _shouldPlayStartSound;
    _Bool _shouldPlayStopSound;
    id <CKAudioRecorderDelegate> _delegate;
    CKVoiceController *_voiceController;
    NSURL *_fileURL;
    NSDate *_startDate;
    CDUnknownBlockType _completion;
    struct OpaqueAudioFileID *_fileID;
    long long _totalPacketsCount;
}

@property (nonatomic, getter=isRecording) _Bool recording;
@property (nonatomic, getter=isRecordingEmpty) _Bool recordingEmpty;
@property (nonatomic, getter=isCancelled) _Bool cancelled;
@property (retain, nonatomic) CKVoiceController *voiceController;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSDate *startDate;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic) _Bool shouldPlayStartSound;
@property (nonatomic) _Bool shouldPlayStopSound;
@property (nonatomic) struct OpaqueAudioFileID *fileID;
@property (nonatomic) long long totalPacketsCount;
@property (weak, nonatomic) id <CKAudioRecorderDelegate> delegate;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)voiceControllerDidDetectStartpoint:(id)arg1;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)resetState;
- (void)cancelRecording;
- (void)startRecordingAndPlaySound:(_Bool)arg1;
- (void)stopRecordingAndPlaySound:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopRecording:(CDUnknownBlockType)arg1;
- (void)startRecordingForRaiseGesture;
- (void)voiceControllerDidStartRecording:(id)arg1;
- (void)voiceControllerDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)voiceController:(id)arg1 didUpdateAveragePower:(float)arg2;
- (void)startRecordingForRaiseGesture:(_Bool)arg1 shouldPlaySound:(_Bool)arg2;

@end
