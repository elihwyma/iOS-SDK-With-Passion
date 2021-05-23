/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class DDScannerResult, IMChat, IMMessage, IMPluginPayload, LPLinkMetadata, NSArray, NSAttributedString, NSData, NSMutableSet, NSString, NSURL;

@interface IMBalloonPluginDataSource : NSObject

{
    _Bool _payloadInShelf;
    _Bool _initialMessageIsFromMe;
    _Bool _allowedByScreenTime;
    _Bool _isLast;
    _Bool _isShowingLatestMessageAsBreadcrumb;
    _Bool _hasInvalidatedSize;
    _Bool _parentChatHasAllUnknownRecipients;
    _Bool _showingLatestMessageAsBreadcrumb;
    IMChat *_chat;
    IMPluginPayload *_pluginPayload;
    NSURL *_url;
    DDScannerResult *_dataDetectedResult;
    NSArray *_attachmentGUIDs;
    NSURL *_URLToOpenOnTapAction;
    NSArray *_pendingAttachmentData;
    NSMutableSet *_temporaryAttachmentURLs;
    NSString *__imMessageGUID;
    NSString *_messageGUID;
    NSString *_sessionGUID;
    NSString *_bundleID;
    NSArray *_consumedPayloads;
    NSString *_guidOfLastMessageInSession;
    long long _messageIDOfLastMessageInSession;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) DDScannerResult *dataDetectedResult;
@property (retain, nonatomic) NSArray *attachmentGUIDs;
@property (retain, nonatomic) IMPluginPayload *pluginPayload;
@property (retain, nonatomic) NSArray *pendingAttachmentData;
@property (retain, nonatomic) NSMutableSet *temporaryAttachmentURLs;
@property (retain, nonatomic) NSString *_imMessageGUID;
@property (nonatomic, setter=setShowingLatestMessageAsBreadcrumb:) _Bool isShowingLatestMessageAsBreadcrumb;
@property (nonatomic) _Bool allowedByScreenTime;
@property (retain, nonatomic) NSString *messageGUID;
@property (retain, nonatomic) NSString *sessionGUID;
@property (retain, nonatomic, readonly) NSString *bundleID;
@property (nonatomic) _Bool hasInvalidatedSize;
@property (nonatomic) _Bool payloadInShelf;
@property (nonatomic, readonly) IMMessage *imMessage;
@property (retain, nonatomic) IMChat *chat;
@property (retain, nonatomic) NSArray *consumedPayloads;
@property (nonatomic) _Bool initialMessageIsFromMe;
@property (nonatomic) _Bool parentChatHasAllUnknownRecipients;
@property (nonatomic, readonly) LPLinkMetadata *richLinkMetadata;
@property (retain, nonatomic, readonly) NSData *messagePayloadDataForSending;
@property (nonatomic, setter=setLast:) _Bool isLast;
@property (nonatomic, readonly, getter=isShowingLatestMessageAsBreadcrumb) _Bool showingLatestMessageAsBreadcrumb;
@property (retain, nonatomic, readonly) NSString *guidOfLastMessageInSession;
@property (nonatomic, readonly) long long messageIDOfLastMessageInSession;
@property (nonatomic, readonly) _Bool supportsDynamicSize;
@property (retain, nonatomic) NSData *payload;
@property (nonatomic, readonly) _Bool wantsStatusItem;
@property (retain, nonatomic, readonly) NSString *statusString;
@property (retain, nonatomic, readonly) NSAttributedString *statusAttributedString;
@property (nonatomic, readonly) _Bool wantsReplyFromContentView;
@property (nonatomic, readonly) NSURL *URLToOpenOnTapAction;
@property (nonatomic, readonly) NSArray *allPayloads;
@property (nonatomic, readonly) _Bool isFromMe;
@property (nonatomic, readonly) _Bool isPlayed;

+ (_Bool)supportsURL:(id)arg1;
+ (id)previewSummary;
+ (id)individualPreviewSummaryForPluginPayload:(id)arg1;
+ (id)previewSummaryForPluginBundle:(id)arg1;
+ (_Bool)supportsIndividualPreviewSummaries;
+ (id)previewSummaryForPluginPayload:(id)arg1 withBundleID:(id)arg2 previewAttachmentURL:(id *)arg3 previewAttachmentUTI:(id *)arg4;
+ (id)replaceHandleWithContactNameInString:(id)arg1 forAccount:(id)arg2 additionalHandles:(id)arg3;
+ (id)unlocalizedPreviewSummaryForPluginBundle:(id)arg1 pluginDisplayName:(id)arg2;

- (id)description;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_replaceHandleWithContactNameInString:(id)arg1;
- (id)initWithPluginPayload:(id)arg1;
- (id)individualPreviewSummary;
- (void)sendPayload:(id)arg1;
- (unsigned long long)playbackType;
- (void)endShowingLastConsumedBreadcrumb;
- (void)didTapStatusItem;
- (void)payloadWillSendFromShelf;
- (void)markAsPlayed;
- (void)playbackWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)stopPlayback;
- (void)payloadWillEnterShelf;
- (void)beginShowingLastConsumedBreadcrumbForOutgoingPayload:(id)arg1;
- (void)datasourceWasMovedToNewGuid:(id)arg1;
- (id)initWithMessageGUID:(id)arg1 payload:(id)arg2 dataDetectedResult:(id)arg3 url:(id)arg4;
- (void)_updateTemporaryAttachmentURLsForPluginPayload;
- (void)checkForAllowedByScreenTime;
- (void)sendPayload:(id)arg1 attachments:(id)arg2;
- (void)updatePayload:(id)arg1 attachments:(id)arg2;
- (unsigned long long)_updateWithPluginPayload:(id)arg1 messageID:(long long)arg2 messageGUID:(id)arg3;
- (void)pluginPayloadDidChange:(unsigned long long)arg1;
- (void)payloadDidChange;
- (_Bool)_senderIsSameBetweenPayload:(id)arg1 andOtherPayload:(id)arg2;
- (void)_removeTemporaryAttachmentURLs;
- (id)individualPreviewAttachmentFileAndUTI:(id *)arg1;
- (id)_summaryText;
- (void)_reloadLatestUnconsumedBreadcrumb;
- (void)setPayload:(id)arg1 attachments:(id)arg2;
- (void)updatePayload:(id)arg1;
- (void)_updatePayload:(id)arg1 messageID:(long long)arg2 messageGUID:(id)arg3;
- (void)thumbnailURLWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)statusStringNeedsUpdate;
- (void)needsResize;

@end
