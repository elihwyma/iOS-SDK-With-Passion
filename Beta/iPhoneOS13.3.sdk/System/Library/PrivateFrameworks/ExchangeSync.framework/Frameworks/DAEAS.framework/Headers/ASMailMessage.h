/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DataAccess/DAMailMessage.h>

@class ASEmailItem;

@interface ASMailMessage : DAMailMessage

{
    ASEmailItem *_ASEmailItem;
}

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)date;
- (id)attachments;
- (id)to;
- (id)from;
- (id)sender;
- (id)subject;
- (id)preview;
- (id)body;
- (id)folderID;
- (int)importance;
- (_Bool)read;
- (id)longID;
- (id)remoteID;
- (id)cc;
- (id)bcc;
- (_Bool)flagged;
- (id)conversationId;
- (id)rfc822Data;
- (int)lastVerb;
- (id)meetingRequestUUID;
- (int)bodySize;
- (_Bool)isDraft;
- (_Bool)readIsSet;
- (_Bool)flaggedIsSet;
- (_Bool)verbIsSet;
- (int)smimeType;
- (id)meetingRequestMetaData;
- (_Bool)meetingRequestIsActionable;
- (id)replyTo;
- (id)messageClass;
- (id)displayTo;
- (int)bodyTruncated;
- (id)threadTopic;
- (id)conversationIndex;
- (id)initWithASEmailItem:(id)arg1;

@end
