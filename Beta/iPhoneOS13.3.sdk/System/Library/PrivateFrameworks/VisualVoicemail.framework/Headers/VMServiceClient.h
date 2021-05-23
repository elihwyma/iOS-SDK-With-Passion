/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

@class VMVoicemailManager;

@interface VMServiceClient : NSObject

{
    VMVoicemailManager *_voicemailManager;
}

@property (retain, nonatomic) VMVoicemailManager *voicemailManager;

+ (id)sharedClient;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)removeObserver:(id)arg1;
- (id)sharedAccount;
- (_Bool)sharedServiceIsSubscribed;
- (void)handleVoicemailsChangedNotification:(id)arg1;
- (void)handleSubscriptionStatusChangedNotification:(id)arg1;
- (void)handleOnlineStatusChangedNotification:(id)arg1;

@end
