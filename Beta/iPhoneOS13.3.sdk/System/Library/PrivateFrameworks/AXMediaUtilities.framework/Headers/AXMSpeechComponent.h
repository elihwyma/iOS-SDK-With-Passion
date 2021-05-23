/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMOutputComponent.h>

@class AVSpeechSynthesizer, NSString;

@interface AXMSpeechComponent : AXMOutputComponent

{
    AVSpeechSynthesizer *_synthesizer;
    CDUnknownBlockType _currentRequestCompletionBlock;
}

@property (retain, nonatomic) AVSpeechSynthesizer *synthesizer;
@property (copy, nonatomic) CDUnknownBlockType currentRequestCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isSupported;

- (id)init;
- (_Bool)canHandleRequest:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)handleRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopSpeakingImmediately;
- (void)stopSpeakingAtNextWord;

@end
