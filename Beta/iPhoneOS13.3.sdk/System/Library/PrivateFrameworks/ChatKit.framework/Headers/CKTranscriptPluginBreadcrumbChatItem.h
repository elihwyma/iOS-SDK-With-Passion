/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMultilineStampChatItem.h>

@class CKTranscriptPluginChatItem, IMTranscriptPluginBreadcrumbChatItem, UIImage;

@interface CKTranscriptPluginBreadcrumbChatItem : CKMultilineStampChatItem

{
    CKTranscriptPluginChatItem *_previousPluginChatItem;
}

@property (nonatomic, readonly) IMTranscriptPluginBreadcrumbChatItem *IMChatItem;
@property (nonatomic, readonly) UIImage *iconImage;
@property (nonatomic, readonly) double iconWidthPlusPadding;
@property (retain, nonatomic) CKTranscriptPluginChatItem *previousPluginChatItem;

- (Class)cellClass;
- (id)loadTranscriptText;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (BOOL)transcriptOrientation;
- (_Bool)_wantsCenteredOrientation;
- (_Bool)_wantsIconImage;
- (unsigned long long)_breadcrumbOptionFlags;

@end
