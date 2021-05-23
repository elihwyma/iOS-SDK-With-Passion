/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKitUI/WFAudioInputViewController.h>

@class NSString, UIButton, WFAudioRecorder;

__attribute__((visibility("hidden")))
@interface WFAudioRecorderViewController : WFAudioInputViewController

{
    _Bool _startImmediately;
    _Bool _isFinishing;
    CDUnknownBlockType _completionHandler;
    double _recordingDuration;
    WFAudioRecorder *_audioRecorder;
    UIButton *_inputButton;
}

@property (retain, nonatomic) WFAudioRecorder *audioRecorder;
@property (weak, nonatomic) UIButton *inputButton;
@property (nonatomic) _Bool isFinishing;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool startImmediately;
@property (nonatomic) double recordingDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)startRecording;
- (void)finishRecording;
- (void)handleTap;
- (id)initWithOutputFormat:(long long)arg1 destinationURL:(id)arg2;
- (void)audioRecorder:(id)arg1 didFinishWithDestinationURL:(id)arg2 error:(id)arg3;
- (void)audioRecorder:(id)arg1 didProgressToTime:(double)arg2;
- (void)inputButtonTapped;

@end
