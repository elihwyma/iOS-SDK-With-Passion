/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/STSiriModelObject.h>

@class NSArray, NSDate, NSString, NSURL, STContactAddress;

@interface STSiriMessage : STSiriModelObject

{
    _Bool _outbound;
    STContactAddress *_senderAddress;
    NSString *_senderInternalGUID;
    NSArray *_recipientAddresses;
    NSString *_groupName;
    NSString *_groupNameId;
    NSString *_subjectText;
    NSString *_bodyText;
    NSString *_effect;
    NSURL *_attachmentURL;
    NSDate *_sendDate;
    NSString *_chatIdentifier;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)groupName;
- (void)setGroupName:(id)arg1;
- (id)recipientAddresses;
- (void)setOutbound:(_Bool)arg1;
- (void)setEffect:(id)arg1;
- (void)setBodyText:(id)arg1;
- (id)bodyText;
- (id)effect;
- (id)attachmentURL;
- (void)setAttachmentURL:(id)arg1;
- (void)setRecipientAddresses:(id)arg1;
- (id)_aceContextObjectValue;
- (id)sendDate;
- (_Bool)isOutbound;
- (id)subjectText;
- (id)chatIdentifier;
- (void)setChatIdentifier:(id)arg1;
- (id)groupNameId;
- (void)setGroupNameId:(id)arg1;
- (id)senderAddress;
- (void)setSenderAddress:(id)arg1;
- (id)senderInternalGUID;
- (void)_setSenderInternalGUID:(id)arg1;
- (void)setSubjectText:(id)arg1;
- (void)setSendDate:(id)arg1;

@end
