/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/Swift-Protocol.h>

@class NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSString;

@interface IMMessageItem <Swift>

{
    _Bool _blockingRichLinks;
    _Bool _isBeingRetried;
    _Bool _updatingDataSourcePayload;
    _Bool _backwardsCompatibleVersion;
    _Bool _isSOS;
    _Bool _NicknameRequested;
    _Bool _shouldSendMeCard;
    unsigned int _error;
    NSString *_subject;
    NSString *_plainBody;
    NSArray *_fileTransferGUIDs;
    unsigned long long _flags;
    NSAttributedString *_body;
    NSData *_bodyData;
    long long _replaceID;
    NSDate *_timeRead;
    NSDate *_timeDelivered;
    NSDate *_timePlayed;
    long long _expireState;
    NSData *_payloadData;
    NSData *_contactsAvatarRecipeData;
    NSString *_expressiveSendStyleID;
    NSDate *_timeExpressiveSendPlayed;
    NSData *_typingIndicatorIcon;
    NSDictionary *_messageSummaryInfo;
    NSDictionary *_bizIntent;
    NSString *_locale;
    NSString *_retryToParticipant;
    NSString *_notificationIDSTokenURI;
    NSString *_suggestedAuthorName;
    NSString *_suggestedAuthorAvatarPath;
}

@property (nonatomic) _Bool backwardsCompatibleVersion;
@property (nonatomic) _Bool isCorrupt;
@property (nonatomic) _Bool isSpam;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSAttributedString *body;
@property (retain, nonatomic) NSData *bodyData;
@property (retain, nonatomic) NSData *payloadData;
@property (retain, nonatomic) NSString *expressiveSendStyleID;
@property (retain, nonatomic) NSDate *timeExpressiveSendPlayed;
@property (retain, nonatomic) NSDate *timeRead;
@property (retain, nonatomic) NSDate *timeDelivered;
@property (retain, nonatomic) NSDate *timePlayed;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) long long expireState;
@property (retain, nonatomic) NSArray *fileTransferGUIDs;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) long long replaceID;
@property (nonatomic) _Bool hasDataDetectorResults;
@property (nonatomic) _Bool blockingRichLinks;
@property (nonatomic, readonly) _Bool isDelivered;
@property (nonatomic, readonly) _Bool isSent;
@property (nonatomic, readonly) _Bool isRead;
@property (nonatomic, readonly) _Bool isPlayed;
@property (nonatomic, readonly) _Bool isFinished;
@property (nonatomic, readonly) _Bool isEmpty;
@property (nonatomic, readonly) _Bool isAlert;
@property (nonatomic, readonly) _Bool wasDataDetected;
@property (nonatomic, readonly) _Bool wasDowngraded;
@property (nonatomic, readonly) _Bool isPrepared;
@property (nonatomic, readonly) _Bool isTypingMessage;
@property (nonatomic, readonly) _Bool isLocatingMessage;
@property (nonatomic, readonly) _Bool isEmote;
@property (nonatomic, readonly) _Bool isAudioMessage;
@property (nonatomic, readonly) _Bool isExpirable;
@property (nonatomic, readonly) _Bool isFromExternalSource;
@property (nonatomic) _Bool isBeingRetried;
@property (retain, nonatomic) NSString *retryToParticipant;
@property (retain, nonatomic) NSString *notificationIDSTokenURI;
@property (copy, nonatomic, readonly) NSAttributedString *breadcrumbText;
@property (retain, nonatomic) NSString *plainBody;
@property (retain, nonatomic) NSData *typingIndicatorIcon;
@property (retain, nonatomic) NSData *contactsAvatarRecipeData;
@property (nonatomic, getter=isUpdatingDataSourcePayload) _Bool updatingDataSourcePayload;
@property (retain, nonatomic) NSDictionary *messageSummaryInfo;
@property (retain, nonatomic) NSDictionary *bizIntent;
@property (retain, nonatomic) NSString *locale;
@property (nonatomic) _Bool isSOS;
@property (nonatomic) _Bool NicknameRequested;
@property (nonatomic) _Bool shouldSendMeCard;
@property (copy, nonatomic) NSString *suggestedAuthorName;
@property (copy, nonatomic) NSString *suggestedAuthorAvatarPath;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)sender;
- (id)copyDictionaryRepresentation;
- (_Bool)isFromMe;
- (id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4;
- (_Bool)isFirstMessageCandidate;
- (_Bool)isLastMessageCandidate;
- (void)_updateFlags:(unsigned long long)arg1;
- (void)_generateBodyDataIfNeeded;
- (id)initWithDictionary:(id)arg1 hint:(id)arg2;
- (id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 type:(long long)arg9;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 bizIntent:(id)arg26 locale:(id)arg27 errorType:(unsigned int)arg28 type:(long long)arg29;
- (void)adjustIsEmptyFlag;
- (void)_regenerateBodyData;
- (void)_regenerateBodyText;
- (void)_generateBodyTextIfNeeded;
- (void)_clearBodyData;
- (id)copyWithFlags:(unsigned long long)arg1;
- (id)copyForBackwardsCompatibility;
- (void)enumerateAttachmentGUIDsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 bizIntent:(id)arg26 locale:(id)arg27 errorType:(unsigned int)arg28;
- (void)setWasDataDetected:(_Bool)arg1;
- (id)_localizedBackwardsCompatibleExpressiveSendText;

@end
