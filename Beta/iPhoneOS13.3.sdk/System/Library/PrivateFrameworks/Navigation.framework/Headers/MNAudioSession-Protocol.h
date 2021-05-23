/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/Swift-Protocol.h>

@protocol MNAudioSession <Swift>

@property (weak, nonatomic) id delegate;
@property (nonatomic) unsigned long long voiceGuidanceLevel;

- (unsigned short)stop;
- (unsigned short)endSession;
- (unsigned short)isSpeaking;
- (unsigned short)beginSession;
- (unsigned short)speak:shortPromptType:ignorePromptStyle:minimumRequiredLevel:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareToAnnounce;
- (unsigned short)speak:shortPromptType:ignorePromptStyle:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)vibrateForPrompt: /* Error: Ran out of types for this method. */;
- (unsigned short)clearAllAnnouncements;

@end
