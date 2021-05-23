/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class IDSService, NSString;

@interface IMMessageNotificationController : NSObject

{
    IDSService *_messageNotificationControllerIDSService;
}

@property (retain, nonatomic) IDSService *messageNotificationControllerIDSService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (id)_copyIDForDevice:(id)arg1;
- (_Bool)_deviceIsAudioAccessory:(id)arg1;
- (_Bool)_isCurrentDeviceAudioAccessory;
- (void)_playTone;
- (void)_executeCommandFromMessageRequest:(id)arg1;
- (id)_copyIDSIdentifierOrDefault:(id)arg1;
- (void)_sendNotificationMessageRequest:(id)arg1 toTokenURI:(id)arg2;
- (_Bool)audioAccessoryDeviceWithTokenURIExists:(id)arg1;
- (void)sendNotificationMessageToUniqueID:(id)arg1 withCommmand:(long long)arg2;
- (void)sendNotificationMessageToTokenURI:(id)arg1 withCommmand:(long long)arg2;

@end
