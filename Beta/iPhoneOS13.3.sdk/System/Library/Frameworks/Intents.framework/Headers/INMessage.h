/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INCurrencyAmount, INImage, INMessageLinkMetadata, INPerson, INSpeakableString, NSArray, NSDate, NSNumber, NSString;

@interface INMessage : NSObject <Swift>

{
    NSString *_identifier;
    NSString *_conversationIdentifier;
    NSString *_content;
    NSDate *_dateSent;
    INPerson *_sender;
    NSArray *_recipients;
    INSpeakableString *_groupName;
    long long _messageType;
    NSString *_serviceName;
    NSDate *_dateMessageWasLastRead;
    NSNumber *_numberOfAttachments;
    long long _messageEffectType;
    INMessage *_referencedMessage;
    INMessageLinkMetadata *_linkMetadata;
    INCurrencyAmount *_paymentAmount;
    NSString *_locationName;
    NSString *_fileExtension;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) INImage *_keyImage;
@property (copy, nonatomic, readonly) NSDate *dateMessageWasLastRead;
@property (copy, nonatomic, readonly) NSNumber *numberOfAttachments;
@property (nonatomic, readonly) long long messageEffectType;
@property (copy, nonatomic, readonly) INMessage *referencedMessage;
@property (copy, nonatomic) INMessageLinkMetadata *linkMetadata;
@property (copy, nonatomic) INCurrencyAmount *paymentAmount;
@property (copy, nonatomic) NSString *locationName;
@property (copy, nonatomic) NSString *fileExtension;
@property (copy, nonatomic) INPerson *sender;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *conversationIdentifier;
@property (copy, nonatomic, readonly) NSString *content;
@property (copy, nonatomic, readonly) NSDate *dateSent;
@property (copy, nonatomic, readonly) INSpeakableString *groupName;
@property (nonatomic, readonly) long long messageType;
@property (copy, nonatomic, readonly) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 groupName:(id)arg7 dateMessageWasLastRead:(id)arg8 numberOfAttachments:(id)arg9 messageType:(long long)arg10 messageEffectType:(long long)arg11 referencedMessage:(id)arg12 serviceName:(id)arg13;
- (id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 groupName:(id)arg7 dateMessageWasLastRead:(id)arg8 numberOfAttachments:(id)arg9 messageType:(long long)arg10 messageEffectType:(long long)arg11 referencedMessage:(id)arg12;
- (id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 groupName:(id)arg7 dateMessageWasLastRead:(id)arg8 numberOfAttachments:(id)arg9 messageType:(long long)arg10 messageEffectType:(long long)arg11;
- (id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 groupName:(id)arg7 messageType:(long long)arg8;
- (id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 groupName:(id)arg7 messageType:(long long)arg8 serviceName:(id)arg9;
- (id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 dateMessageWasLastRead:(id)arg7 numberOfAttachments:(id)arg8 messageType:(long long)arg9 messageEffectType:(long long)arg10;
- (id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 messageType:(long long)arg7;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 dateSent:(id)arg3 sender:(id)arg4 recipients:(id)arg5;

@end
