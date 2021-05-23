/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBMessage;

@protocol _INPBSendMessageIntentResponse <Swift>

@property (retain, nonatomic) _INPBMessage *sentMessage;
@property (nonatomic, readonly) _Bool hasSentMessage;

@end
