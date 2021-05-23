/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class AVAudioPlayer, NSString, NSTimer;

@interface WFPlaySoundAction : WFAction

{
    AVAudioPlayer *_audioPlayer;
    NSTimer *_progressTimer;
}

@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (retain, nonatomic) NSTimer *progressTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)cleanup;
- (void)updateProgress;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWithDefaultSound;
- (void)runWithAudioFileURL:(id)arg1 fileTypeHint:(id)arg2 duckOthers:(_Bool)arg3;

@end
