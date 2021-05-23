/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMMessageChatItem.h>

@class NSArray, NSAttributedString, NSString;

@interface IMMessagePartChatItem : IMMessageChatItem

{
    NSAttributedString *_text;
    NSAttributedString *_fallbackCorruptText;
    long long _index;
    struct _NSRange _messagePartRange;
    NSArray *_visibleAssociatedMessageChatItems;
    NSArray *_messageEditChatItems;
    _Bool _isBusiness;
    _Bool _chatInScrutinyMode;
    _Bool _whitelistedRichLinkSender;
}

@property (nonatomic) long long index;
@property (nonatomic) struct _NSRange messagePartRange;
@property (nonatomic) _Bool chatInScrutinyMode;
@property (nonatomic, getter=isWhitelistedRichLinkSender) _Bool whitelistedRichLinkSender;
@property (copy, nonatomic, readonly) NSAttributedString *text;
@property (copy, nonatomic, readonly) NSAttributedString *fallbackCorruptText;
@property (nonatomic, readonly) NSArray *messageEditChatItems;
@property (nonatomic) _Bool isBusiness;
@property (nonatomic, readonly) _Bool isCorrupt;
@property (nonatomic, readonly) _Bool requiresSiriAttribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, setter=_setVisibleAssociatedMessageChatItems:) NSArray *visibleAssociatedMessageChatItems;

+ (id)_newMessagePartsForMessageItem:(id)arg1;
+ (id)_newMessagePartsForMessageItem:(id)arg1 shouldDisplayLink:(_Bool)arg2 isBusiness:(_Bool)arg3 parentChatIsSpam:(_Bool)arg4 hasKnownParticipants:(_Bool)arg5;
+ (id)_defaultRichLinkWhiteList;
+ (id)_additionalSupportedRichLinkSchemesForWhitelistedSender:(id)arg1;
+ (_Bool)_isWhitelistedRichLinkSender:(id)arg1 isBusiness:(_Bool)arg2;
+ (id)_richLinkRangesForMessageText:(id)arg1 sender:(id)arg2 isWhitelistedRichLinkSender:(_Bool)arg3;
+ (_Bool)_isWhiteListedURL:(id)arg1;
+ (_Bool)_supportsRichLinkURL:(id)arg1 forSender:(id)arg2 isWhitelistedRichLinkSender:(_Bool)arg3;
+ (id)_guidForMessage:(id)arg1 url:(id)arg2;
+ (_Bool)_shouldAggregateForTransferType:(id)arg1;
+ (_Bool)isSiriEnabled;
+ (id)_messageItemWithPartsDeleted:(id)arg1 fromMessageItem:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)canDelete;
- (id)transcriptText;
- (_Bool)canSendMessageAcknowledgment;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 visibleAssociatedMessageChatItems:(id)arg5;
- (id)_initWithItem:(id)arg1 messagePartRange:(struct _NSRange)arg2;
- (void)_setMessageEditChatItems:(id)arg1;

@end
