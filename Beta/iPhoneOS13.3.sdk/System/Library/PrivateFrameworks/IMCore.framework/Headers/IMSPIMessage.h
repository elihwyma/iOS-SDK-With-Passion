/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class IMSPIChat, IMSPIHandle, LPLinkMetadata, NSArray, NSAttributedString, NSDate, NSString, NSURL, PKCurrencyAmount;

@interface IMSPIMessage : NSObject

{
    NSString *_guid;
    NSArray *_chatGuids;
    NSString *_text;
    NSAttributedString *_attributedText;
    NSString *_subject;
    NSString *_effect;
    NSArray *_recipients;
    NSDate *_date;
    NSDate *_dateRead;
    NSDate *_dateForLastReadMessageInChat;
    IMSPIHandle *_sender;
    long long _messageID;
    NSArray *_attachments;
    _Bool _isOutgoing;
    _Bool _isRead;
    _Bool _isAudioMessage;
    _Bool _isGroupChat;
    _Bool _hasDataDetectedResults;
    long long _itemType;
    NSString *_groupID;
    NSString *_chatIdentifier;
    NSString *_body;
    NSString *_summary;
    NSString *_displayName;
    NSString *_service;
    IMSPIMessage *_referencedMessage;
    NSString *_bundleId;
    long long _messageType;
    NSString *_displayAppName;
    LPLinkMetadata *_richLinkMetadata;
    PKCurrencyAmount *_peerPaymentAmount;
}

@property (readonly) _Bool allowedByScreenTime;
@property (retain) NSString *guid;
@property long long messageID;
@property long long itemType;
@property (retain) NSArray *chatGuids;
@property (retain) NSString *groupID;
@property (retain) NSString *chatIdentifier;
@property _Bool isGroupChat;
@property (retain) NSString *service;
@property (retain) NSString *text;
@property (retain) NSString *body;
@property (retain) NSString *summary;
@property (retain) NSAttributedString *attributedText;
@property (retain) NSString *subject;
@property (retain) NSString *effect;
@property (retain) NSString *displayName;
@property (retain) IMSPIHandle *sender;
@property (retain) NSArray *recipients;
@property (retain) NSDate *date;
@property (retain) NSDate *dateRead;
@property (retain) NSDate *dateForLastReadMessageInChat;
@property _Bool isOutgoing;
@property _Bool isRead;
@property _Bool isAudioMessage;
@property (retain) IMSPIMessage *referencedMessage;
@property (retain) NSString *bundleId;
@property long long messageType;
@property (retain) NSString *displayAppName;
@property (retain) LPLinkMetadata *richLinkMetadata;
@property (retain) PKCurrencyAmount *peerPaymentAmount;
@property (retain) NSArray *attachments;
@property _Bool hasDataDetectedResults;
@property (readonly) NSDate *lastReadDate;
@property (readonly) NSURL *url;
@property (readonly) IMSPIChat *spiChat;

- (void)dealloc;
- (id)description;

@end
