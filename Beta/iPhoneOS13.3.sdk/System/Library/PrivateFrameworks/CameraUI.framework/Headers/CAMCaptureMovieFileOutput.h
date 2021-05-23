/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <AVFoundation/AVCaptureMovieFileOutput.h>

@class CAMCaptureEngine, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString;

@protocol AVCaptureFileOutputRecordingDelegate, OS_dispatch_queue;

@interface CAMCaptureMovieFileOutput : AVCaptureMovieFileOutput

{
    CAMCaptureEngine *__captureEngine;
    NSObject<OS_dispatch_queue> *__userInfoQueue;
    NSMutableDictionary *__userInfoBySettingsID;
    NSMutableArray *__removeOnCompletionSettingsIDs;
    NSDictionary *_currentUserInfo;
    NSDictionary *_userInfoForNextCapture;
    id <AVCaptureFileOutputRecordingDelegate> _wrappedDelegate;
}

@property (weak, nonatomic, readonly) CAMCaptureEngine *_captureEngine;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_userInfoQueue;
@property (nonatomic, readonly) NSMutableDictionary *_userInfoBySettingsID;
@property (nonatomic, readonly) NSMutableArray *_removeOnCompletionSettingsIDs;
@property (copy, nonatomic) NSDictionary *currentUserInfo;
@property (copy, nonatomic) NSDictionary *userInfoForNextCapture;
@property (weak, nonatomic) id <AVCaptureFileOutputRecordingDelegate> wrappedDelegate;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithEngine:(id)arg1;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (void)stopRecording;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)handleNotification:(id)arg1 payload:(id)arg2;

@end
