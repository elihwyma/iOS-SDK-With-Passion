/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

#import <DataAccess/Swift-Protocol.h>

@interface DAMailMessage : NSObject <Swift>

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
- (id)clientID;
- (id)folderID;
- (int)importance;
- (id)serverID;
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
- (int)bodyType;
- (id)messageClass;
- (id)displayTo;
- (int)bodyTruncated;
- (id)threadTopic;
- (id)conversationIndex;
- (id)instanceID;

@end
