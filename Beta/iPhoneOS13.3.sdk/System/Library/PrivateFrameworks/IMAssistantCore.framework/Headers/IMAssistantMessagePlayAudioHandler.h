/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <IMAssistantCore/IMAssistantMessageQueryHandler.h>

@class IMAssistantAudioPlayer, NSString;

@interface IMAssistantMessagePlayAudioHandler : IMAssistantMessageQueryHandler

{
    IMAssistantAudioPlayer *_audioPlayer;
    CDUnknownBlockType _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handlePlayAudioMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmPlayAudioMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)imAssistantAudioPlayer:(id)arg1 didUpdateState:(long long)arg2;
- (id)createAudioPlayerWithIdentifier:(id)arg1;
- (void)queryAudioMessageURLForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)activeAudioPlayer;

@end
