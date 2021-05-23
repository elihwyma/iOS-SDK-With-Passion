/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <Foundation/NSObject.h>

@interface IMAssistantINMessageConverter : NSObject

+ (id)expressiveSendIdFromMessageEffectType:(long long)arg1;
+ (id)INMessageForOutgoingIMMessage:(id)arg1 toChat:(id)arg2 personProvider:(id)arg3;
+ (id)messageEffectTypeToExpressiveSendIdDictionary;
+ (id)INMessageForSPIMessage:(id)arg1 personProvider:(id)arg2;
+ (id)INPersonsForSPIHandles:(id)arg1 personProvider:(id)arg2;
+ (id)__INSpeakableStringForMessage:(id)arg1;
+ (long long)messageEffectTypeFromExpressiveSendId:(id)arg1;
+ (id)__INMessageLinkMetadataForLPLinkMetadata:(id)arg1;
+ (id)spiHandleForIMHandle:(id)arg1 isMe:(_Bool)arg2;
+ (id)__INSpeakableStringForChat:(id)arg1;

@end
