/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSNumber, NSString;

@interface CLSMessage : NSObject

{
    _Bool _hasAttachments;
    NSDate *_date;
    NSString *_recipientHandle;
    struct _IMDMessageRecordStruct *_messageRecord;
    long long _type;
    long long _rowID;
    long long _replaceID;
    NSString *_fzGuid;
    long long _fzDate;
    long long _fzDateRead;
    long long _fzDateDelivered;
    long long _fzDatePlayed;
    NSString *_fzBody;
    NSData *_fzAttributedBody;
    NSNumber *_fzFlags;
    NSString *_fzService;
    NSString *_fzAccount;
    NSString *_fzAccountGUID;
    long long _handleID;
    NSString *_fzSubject;
    long long _fzError;
    long long _fzType;
    NSString *_roomnames;
    long long _otherHandleID;
    NSString *_groupTitle;
    long long _groupActionType;
    long long _shareStatus;
    long long _shareDirection;
    long long _expireState;
    long long _messageActionType;
    NSString *_associatedMessageGUID;
    long long _associatedMessageType;
    NSString *_balloonBundleID;
    NSData *_payloadData;
    NSString *_expressiveSendStyleID;
    long long _timeExpressiveSendPlayed;
    NSData *_messageSummaryInfo;
    NSString *_destinationCallerID;
    struct _NSRange _associatedMessageRange;
}

@property (nonatomic, readonly) struct _IMDMessageRecordStruct *messageRecord;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *recipientHandle;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) _Bool hasAttachments;
@property (nonatomic, readonly) long long rowID;
@property (nonatomic, readonly) long long replaceID;
@property (nonatomic, readonly) long long fzDate;
@property (nonatomic, readonly) long long fzDateRead;
@property (nonatomic, readonly) long long fzDateDelivered;
@property (nonatomic, readonly) long long fzDatePlayed;
@property (nonatomic, readonly) long long handleID;
@property (nonatomic, readonly) long long fzError;
@property (nonatomic, readonly) long long fzType;
@property (nonatomic, readonly) long long otherHandleID;
@property (nonatomic, readonly) long long groupActionType;
@property (nonatomic, readonly) long long shareStatus;
@property (nonatomic, readonly) long long shareDirection;
@property (nonatomic, readonly) long long expireState;
@property (nonatomic, readonly) long long messageActionType;
@property (nonatomic, readonly) long long associatedMessageType;
@property (nonatomic, readonly) long long timeExpressiveSendPlayed;
@property (nonatomic, readonly) struct _NSRange associatedMessageRange;
@property (nonatomic, readonly) NSData *fzAttributedBody;
@property (nonatomic, readonly) NSData *payloadData;
@property (nonatomic, readonly) NSData *messageSummaryInfo;
@property (nonatomic, readonly) NSNumber *fzFlags;
@property (nonatomic, readonly) NSString *fzGuid;
@property (nonatomic, readonly) NSString *fzBody;
@property (nonatomic, readonly) NSString *fzService;
@property (nonatomic, readonly) NSString *fzAccount;
@property (nonatomic, readonly) NSString *fzAccountGUID;
@property (nonatomic, readonly) NSString *fzSubject;
@property (nonatomic, readonly) NSString *roomnames;
@property (nonatomic, readonly) NSString *groupTitle;
@property (nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) NSString *balloonBundleID;
@property (nonatomic, readonly) NSString *expressiveSendStyleID;
@property (nonatomic, readonly) NSString *destinationCallerID;

+ (void)enumerateAllMessagesWithBlock:(CDUnknownBlockType)arg1;

- (id)debugDescription;
- (id)attachments;
- (_Bool)fromMe;
- (id)initWithMessageRecord:(struct _IMDMessageRecordStruct *)arg1;
- (_Bool)isMessage;

@end
