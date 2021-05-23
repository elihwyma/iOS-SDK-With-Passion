/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

@class VMVoicemailManager;

@interface VMLegacyAccount : NSObject

{
    VMVoicemailManager *_voicemailManager;
}

@property (retain, nonatomic) VMVoicemailManager *voicemailManager;

- (id)init;
- (void)synchronize:(_Bool)arg1;
- (_Bool)isSubscribed;
- (unsigned int)unreadCount;
- (_Bool)isOnline;
- (void)setProvisionalPassword:(id)arg1;
- (int)mailboxUsage;
- (_Bool)isMessageWaiting;
- (_Bool)isOfflineDueToRoaming;
- (_Bool)greetingAvailable;
- (id)voicemailWithIdentifier:(unsigned long long)arg1;
- (unsigned int)recentUnreadCount;
- (void)handlePasswordNotificationResponse:(id)arg1;
- (void)setGreetingType:(long long)arg1 withData:(id)arg2 duration:(unsigned int)arg3;
- (void)moveVoicemailToTrash:(id)arg1;
- (void)moveVoicemailFromTrash:(id)arg1;
- (id)allVoicemailsWithFlags:(unsigned long long)arg1 withoutFlags:(unsigned long long)arg2;

@end
