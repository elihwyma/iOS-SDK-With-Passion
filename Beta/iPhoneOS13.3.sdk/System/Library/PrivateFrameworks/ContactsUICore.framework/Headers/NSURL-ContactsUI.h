/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSURL.h>

@interface NSURL (ContactsUI)

+ (id)log;
+ (id)_cnui_faceTimeVideoURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyURLWithHandle:(id)arg1 contact:(id)arg2 channelIdentifier:(id)arg3;
+ (id)_cnui_ttyRelayURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyRelayURLWithHandle:(id)arg1 contact:(id)arg2 channelIdentifier:(id)arg3;
+ (id)_cnui_faceTimeAudioURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_telephonyURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_telephonyURLWithHandle:(id)arg1 contact:(id)arg2 channelIdentifier:(id)arg3;
+ (id)_cnui_walletPayURLFutureWithHandle:(id)arg1;
+ (id)_cnui_skypeTextURLWithHandle:(id)arg1;
+ (id)_cnui_skypeVoiceURLWithHandle:(id)arg1;
+ (id)_cnui_skypeVideoURLWithHandle:(id)arg1;
+ (id)_cnui_messagesURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_mailURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_walletPayURLWithHandle:(id)arg1;
+ (id)_cnui_dialRequestURLWithHandle:(id)arg1 contact:(id)arg2 faceTime:(_Bool)arg3 video:(_Bool)arg4 ttyType:(long long)arg5 channelIdentifier:(id)arg6;
+ (id)_cnui_telephonyURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_faceTimeAudioURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_faceTimeVideoURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyRelayURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_telephonyURLFutureWithHandle:(id)arg1 contact:(id)arg2 channelIdentifier:(id)arg3;
+ (id)_cnui_ttyURLFutureWithHandle:(id)arg1 contact:(id)arg2 channelIdentifier:(id)arg3;
+ (id)_cnui_ttyRelayURLFutureWithHandle:(id)arg1 contact:(id)arg2 channelIdentifier:(id)arg3;
+ (id)_cnui_skypeTextURLFutureWithHandle:(id)arg1;
+ (id)_cnui_skypeVoiceURLFutureWithHandle:(id)arg1;
+ (id)_cnui_skypeVideoURLFutureWithHandle:(id)arg1;
+ (id)_cnui_messagesURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_mailURLFutureWithHandle:(id)arg1 contact:(id)arg2;

@end
