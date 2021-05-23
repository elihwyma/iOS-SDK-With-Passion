/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASChangedCollectionLeaf.h>

@class ASMeetingRequest, NSArray, NSData, NSDate, NSString;

@interface ASEmailItem : ASChangedCollectionLeaf

{
    _Bool _shouldIncludeExceptionDateInUid;
    _Bool _read;
    _Bool _flagged;
    _Bool _bodyTruncated;
    _Bool _readIsSet;
    _Bool _flaggedIsSet;
    _Bool _verbIsSet;
    _Bool _isDraft;
    _Bool _hasAttachments;
    int _importance;
    int _bodySize;
    int _lastVerb;
    int _bodyType;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_from;
    NSArray *_replyTo;
    NSDate *_date;
    NSString *_subject;
    NSString *_displayTo;
    NSString *_body;
    NSString *_messageClass;
    NSArray *_attachments;
    NSString *_threadTopic;
    NSData *_conversationId;
    NSData *_conversationIndex;
    NSString *_mimeData;
    NSString *_folderId;
    NSString *_longID;
    NSString *_sender;
    NSArray *_bcc;
    NSString *_preview;
    ASMeetingRequest *_meetingRequest;
}

@property (retain, nonatomic, setter=_setMeetingRequest:) ASMeetingRequest *meetingRequest;
@property (copy, nonatomic) NSArray *to;
@property (copy, nonatomic) NSArray *cc;
@property (copy, nonatomic) NSArray *from;
@property (copy, nonatomic) NSArray *replyTo;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *displayTo;
@property (nonatomic) int importance;
@property (nonatomic) _Bool read;
@property (nonatomic) _Bool flagged;
@property (retain, nonatomic) NSString *body;
@property (nonatomic) int bodySize;
@property (nonatomic) _Bool bodyTruncated;
@property (retain, nonatomic) NSString *messageClass;
@property (retain, nonatomic) NSArray *attachments;
@property (retain, nonatomic) NSString *threadTopic;
@property (retain, nonatomic) NSData *conversationId;
@property (retain, nonatomic) NSData *conversationIndex;
@property (retain, nonatomic) NSString *mimeData;
@property (retain, nonatomic) NSString *folderId;
@property (retain, nonatomic) NSString *longID;
@property (nonatomic) int lastVerb;
@property (retain, nonatomic) NSString *sender;
@property (nonatomic) _Bool readIsSet;
@property (nonatomic) _Bool flaggedIsSet;
@property (nonatomic) _Bool verbIsSet;
@property (nonatomic, readonly) NSString *meetingRequestUUID;
@property (nonatomic, readonly) NSData *meetingRequestMetaData;
@property (nonatomic, readonly) int meetingMessageType;
@property (nonatomic) int bodyType;
@property (copy, nonatomic) NSArray *bcc;
@property (nonatomic) _Bool isDraft;
@property (retain, nonatomic) NSString *preview;
@property (nonatomic) _Bool hasAttachments;

+ (_Bool)supportsSecureCoding;
+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_isSearchResult;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)postProcessApplicationData;
- (void)processAppDataForStream;
- (void)setToString:(id)arg1;
- (void)setCCString:(id)arg1;
- (void)setBCCString:(id)arg1;
- (void)setFromString:(id)arg1;
- (void)setReplyToString:(id)arg1;
- (void)_processApplicationData:(_Bool)arg1;

@end
