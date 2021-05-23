/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class TLAlert;

@interface SMSApplicationSoundHelper : NSObject

{
    TLAlert *_alert;
    _Bool _bulletinSuppressed;
}

@property (nonatomic) _Bool bulletinSuppressed;

- (_Bool)_shouldPlayTapbackSound;
- (void)stopPlayingAlert;
- (void)playSendSoundForMessage:(id)arg1;
- (_Bool)shouldPlayDefaultSendSoundForMessageInCurrentTranscript:(id)arg1;
- (_Bool)allowedByScreenTimeToPlayReceiveSoundForChat:(id)arg1;
- (void)playIncomingMessageSoundAndHapticForMessage:(id)arg1 messageIsForCurrentTranscript:(_Bool)arg2;

@end
