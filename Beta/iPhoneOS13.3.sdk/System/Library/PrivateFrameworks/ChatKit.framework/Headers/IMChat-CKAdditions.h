/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <IMCore/IMChat.h>

@interface IMChat (CKAdditions)

+ (unsigned char)associatedMessageContentTypeFromCKMediaType:(int)arg1;
+ (id)configureMessageSummaryInfoForChatItem:(id)arg1;

- (void)sendMessageAcknowledgment:(long long)arg1 forChatItem:(id)arg2;
- (long long)__ck_watermarkMessageID;
- (id)__ck_watermarkDate;
- (_Bool)__ck_isMuted;
- (void)__ck_setMuteUntilDate:(id)arg1;
- (_Bool)__ck_sendReadReceipts;
- (void)__ck_setSendReadReceipts:(_Bool)arg1;
- (void)__ck_updateWatermarkToMessageID:(long long)arg1 date:(id)arg2;
- (void)__ck_saveWatermark;
- (id)__ck_muteUntilDate;
- (void)sendMessageAcknowledgment:(long long)arg1 forChatItem:(id)arg2 withGuid:(id)arg3;

@end
