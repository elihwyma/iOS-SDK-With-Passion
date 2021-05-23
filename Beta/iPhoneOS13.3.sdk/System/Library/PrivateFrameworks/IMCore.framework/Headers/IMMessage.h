/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class IMHandle, IMMessageItem, NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSError, NSString;

@interface IMMessage : NSObject

{
    IMHandle *_sender;
    IMHandle *_subject;
    NSAttributedString *_text;
    NSString *_plainBody;
    NSDate *_time;
    NSDate *_timeDelivered;
    NSDate *_timeRead;
    NSDate *_timePlayed;
    NSString *_guid;
    NSAttributedString *_messageSubject;
    NSArray *_fileTransferGUIDs;
    NSError *_error;
    NSString *_balloonBundleID;
    NSData *_payloadData;
    NSString *_expressiveSendStyleID;
    NSDate *_timeExpressiveSendPlayed;
    unsigned long long _flags;
    _Bool _isInvitationMessage;
    long long _messageID;
    NSDictionary *_bizIntent;
    NSString *_locale;
    _Bool _isSOS;
    NSString *_associatedMessageGUID;
    long long _associatedMessageType;
    NSDictionary *_messageSummaryInfo;
    NSString *_associatedBalloonBundleID;
    NSString *_sourceApplicationID;
    NSData *_customTypingIndicatorIcon;
    NSString *_notificationIDSTokenURI;
    unsigned long long _sortID;
    struct _NSRange _associatedMessageRange;
}

@property (copy, nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) _Bool isAssociatedMessage;
@property (nonatomic, readonly) long long associatedMessageType;
@property (copy, nonatomic, readonly) NSDictionary *messageSummaryInfo;
@property (retain, nonatomic, setter=_updateSender:) IMHandle *sender;
@property (retain, nonatomic, setter=_updateError:) NSError *error;
@property (nonatomic, setter=_updateFlags:) unsigned long long flags;
@property (retain, nonatomic, setter=_updateTime:) NSDate *time;
@property (retain, nonatomic, setter=_updateTimeRead:) NSDate *timeRead;
@property (retain, nonatomic, setter=_updateTimeDelivered:) NSDate *timeDelivered;
@property (retain, nonatomic, setter=_updateTimePlayed:) NSDate *timePlayed;
@property (nonatomic, setter=_updateMessageID:) long long messageID;
@property (retain, nonatomic, setter=_updateGUID:) NSString *guid;
@property (copy, nonatomic, setter=_associatedMessageGUID:) NSString *associatedMessageGUID;
@property (nonatomic, setter=_associatedMessageType:) long long associatedMessageType;
@property (nonatomic, setter=_associatedMessageRange:) struct _NSRange associatedMessageRange;
@property (copy, nonatomic, setter=_messageSummaryInfo:) NSDictionary *messageSummaryInfo;
@property (retain, nonatomic, setter=_updateBizIntent:) NSDictionary *bizIntent;
@property (retain, nonatomic, setter=_updateLocale:) NSString *locale;
@property (retain, nonatomic, setter=_updateText:) NSAttributedString *text;
@property (nonatomic) _Bool isInvitationMessage;
@property (nonatomic, readonly) IMMessageItem *_imMessageItem;
@property (copy, nonatomic, setter=_updateFileTransferGUIDs:) NSArray *fileTransferGUIDs;
@property (nonatomic) unsigned long long sortID;
@property (nonatomic, readonly) IMHandle *subject;
@property (nonatomic, readonly) NSAttributedString *messageSubject;
@property (nonatomic, readonly) NSString *plainBody;
@property (nonatomic, readonly) NSString *senderName;
@property (nonatomic, readonly) NSString *summaryString;
@property (retain, nonatomic) NSString *balloonBundleID;
@property (retain, nonatomic) NSData *payloadData;
@property (retain, nonatomic) NSString *associatedBalloonBundleID;
@property (retain, nonatomic) NSString *sourceApplicationID;
@property (retain, nonatomic) NSString *expressiveSendStyleID;
@property (retain, nonatomic) NSDate *timeExpressiveSendPlayed;
@property (nonatomic, readonly) _Bool hasInlineAttachments;
@property (nonatomic, readonly) NSArray *inlineAttachmentAttributesArray;
@property (nonatomic, readonly) _Bool isSent;
@property (nonatomic, readonly) _Bool isFinished;
@property (nonatomic, readonly) _Bool isTypingMessage;
@property (nonatomic, readonly) _Bool isLocatingMessage;
@property (nonatomic, readonly) _Bool isEmote;
@property (nonatomic, readonly) _Bool isFromMe;
@property (nonatomic, readonly) _Bool isEmpty;
@property (nonatomic, readonly) _Bool isDelayed;
@property (nonatomic, readonly) _Bool isAutoReply;
@property (nonatomic, readonly) _Bool isDelivered;
@property (nonatomic, readonly) _Bool isRead;
@property (nonatomic, readonly) _Bool isAudioMessage;
@property (nonatomic, readonly) _Bool isPlayed;
@property (nonatomic, readonly) _Bool isAddressedToMe;
@property (nonatomic, readonly) _Bool isAlert;
@property (nonatomic, readonly) _Bool isSystemMessage;
@property (nonatomic, readonly) _Bool hasDataDetectorResults;
@property (nonatomic, readonly) _Bool wasDowngraded;
@property (nonatomic, readonly) _Bool wasDataDetected;
@property (retain, nonatomic) NSData *customTypingIndicatorIcon;
@property (retain, nonatomic) NSString *notificationIDSTokenURI;
@property (nonatomic) _Bool isSOS;

+ (Class)richLinksDataSourceClass;
+ (id)breadcrumbMessageWithText:(id)arg1 associatedMessageGUID:(id)arg2 balloonBundleID:(id)arg3 fileTransferGUIDs:(id)arg4 payloadData:(id)arg5;
+ (id)instantMessageWithAssociatedMessageContent:(id)arg1 flags:(unsigned long long)arg2 associatedMessageGUID:(id)arg3 associatedMessageType:(long long)arg4 associatedMessageRange:(struct _NSRange)arg5 messageSummaryInfo:(id)arg6;
+ (id)determineRichLinksInMessage:(id)arg1 additionalSupportedSchemes:(id)arg2;
+ (id)locatingMessageWithGuid:(id)arg1 error:(id)arg2;
+ (id)messageWithLocation:(id)arg1 flags:(unsigned long long)arg2 error:(id)arg3 guid:(id)arg4;
+ (id)defaultInvitationMessageFromSender:(id)arg1 flags:(unsigned long long)arg2;
+ (id)messageFromIMMessageItem:(id)arg1 sender:(id)arg2 subject:(id)arg3;
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 flags:(unsigned long long)arg3;
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 flags:(unsigned long long)arg3 expressiveSendStyleID:(id)arg4;
+ (_Bool)hasKnownSchemesForRichLinkURL:(id)arg1 additionalSupportedSchemes:(id)arg2;
+ (_Bool)supportedRichLinkURL:(id)arg1 additionalSupportedSchemes:(id)arg2;
+ (id)determineRichLinksInMessage:(id)arg1;
+ (id)instantMessageWithText:(id)arg1 flags:(unsigned long long)arg2;
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4;
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4 balloonBundleID:(id)arg5 payloadData:(id)arg6 expressiveSendStyleID:(id)arg7;
+ (id)fromMeIMHandle:(id)arg1 withText:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4;
+ (id)messageFromIMMessageItemDictionary:(id)arg1 body:(id)arg2 sender:(id)arg3 subject:(id)arg4;
+ (_Bool)hasKnownSchemesForRichLinkURL:(id)arg1;
+ (id)_vCardDataWithCLLocation:(id)arg1;
+ (id)editedMessageWithOriginalMessage:(id)arg1 originalPrefixedGUID:(id)arg2 newBody:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9 associatedMessageGUID:(id)arg10 associatedMessageType:(long long)arg11 associatedMessageRange:(struct _NSRange)arg12 associatedMessageInfo:(id)arg13;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(unsigned long long)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9 balloonBundleID:(id)arg10 payloadData:(id)arg11 expressiveSendStyleID:(id)arg12;
- (long long)compare:(id)arg1 comparisonType:(long long)arg2;
- (id)_copyWithFlags:(unsigned long long)arg1;
- (id)messagesBySeparatingRichLinks;
- (id)descriptionForPurpose:(long long)arg1 inChat:(id)arg2;
- (id)descriptionForPurpose:(long long)arg1;
- (id)descriptionForPurpose:(long long)arg1 inChat:(id)arg2 senderDisplayName:(id)arg3;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9;
- (id)_initWithSender:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 plainText:(id)arg6 text:(id)arg7 messageSubject:(id)arg8 fileTransferGUIDs:(id)arg9 flags:(unsigned long long)arg10 error:(id)arg11 guid:(id)arg12 messageID:(long long)arg13 subject:(id)arg14 balloonBundleID:(id)arg15 payloadData:(id)arg16 expressiveSendStyleID:(id)arg17 timeExpressiveSendPlayed:(id)arg18 associatedMessageGUID:(id)arg19 associatedMessageType:(long long)arg20 associatedMessageRange:(struct _NSRange)arg21 messageSummaryInfo:(id)arg22;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9 associatedMessageGUID:(id)arg10 associatedMessageType:(long long)arg11 associatedMessageRange:(struct _NSRange)arg12 messageSummaryInfo:(id)arg13;
- (id)initWithSender:(id)arg1 fileTransfer:(id)arg2;
- (void)setIsAddressedToMe:(_Bool)arg1;
- (void)_ovverrideGUIDForTest:(id)arg1;

@end
