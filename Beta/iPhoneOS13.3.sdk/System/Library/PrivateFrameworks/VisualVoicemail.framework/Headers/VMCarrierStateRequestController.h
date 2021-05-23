/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <VisualVoicemail/VMTelephonyRequestController.h>

@class NSString;

@protocol VMCTMessageCenter, VMCoreTelephonyClient;

@interface VMCarrierStateRequestController : VMTelephonyRequestController

{
    id <VMCTMessageCenter> _messageCenter;
    id <VMCoreTelephonyClient> _telephonyClient;
}

@property (nonatomic, readonly) id <VMCTMessageCenter> messageCenter;
@property (nonatomic, readonly) id <VMCoreTelephonyClient> telephonyClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)postSMSMessageSent:(id)arg1 success:(_Bool)arg2 messageID:(long long)arg3 err1:(long long)arg4 err2:(long long)arg5;
- (void)executeRequest:(id)arg1;
- (id)initWithMessageCenter:(id)arg1 telephonyClient:(id)arg2 queue:(id)arg3;

@end
