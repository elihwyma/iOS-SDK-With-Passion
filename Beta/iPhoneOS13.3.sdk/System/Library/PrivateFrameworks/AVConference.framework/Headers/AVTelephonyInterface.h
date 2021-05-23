/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient;

@protocol AVTelephonyInterfaceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVTelephonyInterface : NSObject

{
    id _delegate;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    struct __CTServerConnection *_connection;
    CoreTelephonyClient *_coreTelephonyClient;
}

@property id <AVTelephonyInterfaceDelegate> delegate;

- (id)init;
- (void)dealloc;
- (_Bool)registerForNotifications;
- (void)unregisterForNotifications;
- (void)notifyCTCurrentAudioPayload:(int)arg1 mode:(int)arg2 bitrate:(unsigned int)arg3;
- (void)handleTelephonyNotification:(id)arg1 withInfo:(id)arg2;
- (void)handleVocoderNotificationWithInfo:(id)arg1;
- (id)translateVocoderTypeToCoreAudioType:(id)arg1;

@end
