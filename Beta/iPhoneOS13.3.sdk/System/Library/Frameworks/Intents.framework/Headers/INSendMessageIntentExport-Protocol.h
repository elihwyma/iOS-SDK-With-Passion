/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INPerson, INSpeakableString, NSArray, NSString;

@protocol INSendMessageIntentExport <Swift>

@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) INSpeakableString *speakableGroupName;
@property (copy, nonatomic) NSString *conversationIdentifier;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) INPerson *sender;
@property (nonatomic) long long effect;
@property (copy, nonatomic) NSArray *attachments;
@property (nonatomic) long long messageType;

- (unsigned short)init;

@end
