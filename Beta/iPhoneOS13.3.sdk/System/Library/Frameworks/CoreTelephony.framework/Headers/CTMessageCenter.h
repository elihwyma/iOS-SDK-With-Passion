/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@interface CTMessageCenter : NSObject

+ (id)sharedMessageCenter;

- (id)init;
- (void)dealloc;
- (_Bool)sendSMSWithText:(id)arg1 text:(id)arg2 serviceCenter:(id)arg3 toAddress:(id)arg4 withID:(unsigned int)arg5;
- (id)encodeMessage:(id)arg1;
- (void)sendMessageAsSmsToShortCodeRecipients:(id)arg1 andReplaceData:(id *)arg2;
- (CDStruct_1ef3fb1f)sendMMSFromData:(id)arg1 messageId:(unsigned int)arg2 subSlot:(long long)arg3;
- (CDStruct_1ef3fb1f)send:(id)arg1 withMoreToFollow:(_Bool)arg2;
- (CDStruct_1ef3fb1f)sendSMS:(id)arg1 withMoreToFollow:(_Bool)arg2 trackingID:(unsigned int *)arg3;
- (CDStruct_1ef3fb1f)sendMMS:(id)arg1;
- (id)incomingMessageWithId:(unsigned int)arg1 isDeferred:(_Bool)arg2;
- (void)addMessageOfType:(int)arg1 toArray:(id)arg2 withIdsFromArray:(id)arg3;
- (_Bool)isMmsConfiguredForSub:(id)arg1;
- (_Bool)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 trackingID:(unsigned int *)arg4;
- (_Bool)sendSMSWithText:(id)arg1 text:(id)arg2 serviceCenter:(id)arg3 toAddress:(id)arg4 withMoreToFollow:(_Bool)arg5 withID:(unsigned int)arg6;
- (_Bool)sendSMSWithText:(id)arg1 text:(id)arg2 serviceCenter:(id)arg3 toAddress:(id)arg4 trackingID:(unsigned int *)arg5;
- (_Bool)getCharacterCountForSub:(id)arg1 count:(long long *)arg2 andMessageSplitThreshold:(long long *)arg3 forSmsText:(id)arg4;
- (CDStruct_1ef3fb1f)send:(id)arg1;
- (int)incomingMessageCount;
- (id)allIncomingMessages;
- (void)acknowledgeIncomingMessageWithId:(unsigned int)arg1;
- (void)acknowledgeOutgoingMessageWithId:(unsigned int)arg1;
- (id)incomingMessageWithId:(unsigned int)arg1;
- (id)deferredMessageWithId:(unsigned int)arg1;
- (id)statusOfOutgoingMessages;
- (id)decodeMessage:(id)arg1;
- (CDStruct_1ef3fb1f)isDeliveryReportsEnabled:(_Bool *)arg1;
- (void)setDeliveryReportsEnabled:(_Bool)arg1;
- (_Bool)isMmsEnabled;
- (_Bool)isMmsEnabledForSub:(id)arg1;
- (_Bool)isMmsConfigured;
- (_Bool)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3;
- (_Bool)sendSMSWithText:(id)arg1 text:(id)arg2 serviceCenter:(id)arg3 toAddress:(id)arg4;
- (_Bool)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withID:(unsigned int)arg4;
- (_Bool)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withMoreToFollow:(_Bool)arg4 withID:(unsigned int)arg5;
- (_Bool)getCharacterCount:(long long *)arg1 andMessageSplitThreshold:(long long *)arg2 forSmsText:(id)arg3;
- (_Bool)simulateSmsReceived:(id)arg1;
- (_Bool)simulateDeferredMessage;
- (_Bool)sendBinarySMS:(id)arg1 trackingID:(unsigned int *)arg2;

@end
