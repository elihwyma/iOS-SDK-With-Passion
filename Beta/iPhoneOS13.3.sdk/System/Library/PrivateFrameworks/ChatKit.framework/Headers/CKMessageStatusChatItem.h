/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKChatItem.h>

@class NSAttributedString;

@interface CKMessageStatusChatItem : CKChatItem

{
    _Bool _buttonSizeLoaded;
    _Bool _labelSizeLoaded;
    NSAttributedString *_transcriptButtonText;
    struct CGSize _buttonSize;
    struct CGSize _labelSize;
    struct UIEdgeInsets _buttonTextAlignmentInsets;
    struct UIEdgeInsets _labelTextAlignmentInsets;
}

@property (copy, nonatomic) NSAttributedString *transcriptButtonText;
@property (nonatomic, getter=isButtonSizeLoaded) _Bool buttonSizeLoaded;
@property (nonatomic, getter=isLabelSizeLoaded) _Bool labelSizeLoaded;
@property (nonatomic, readonly) struct CGSize buttonSize;
@property (nonatomic, readonly) struct CGSize labelSize;
@property (nonatomic, readonly) struct UIEdgeInsets buttonTextAlignmentInsets;
@property (nonatomic, readonly) struct UIEdgeInsets labelTextAlignmentInsets;
@property (nonatomic, readonly) long long buttonType;
@property (nonatomic, readonly) BOOL statusAlignment;
@property (nonatomic, readonly) _Bool allowsEffectAutoPlayback;

+ (id)thePastDateFormatter;
+ (id)thisWeekRelativeDateFormatter;
+ (id)todayDateFormatter;
+ (id)createImageAsTextAttachment;

- (unsigned long long)count;
- (id)now;
- (struct CGSize)size;
- (id)time;
- (struct UIEdgeInsets)contentInsets;
- (_Bool)isFromMe;
- (Class)cellClass;
- (long long)statusType;
- (id)loadTranscriptText;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (BOOL)transcriptOrientation;
- (struct UIEdgeInsets)transcriptTextAlignmentInsets;
- (void)unloadTranscriptText;
- (void)unloadSize;
- (_Bool)wantsDrawerLayout;
- (long long)expireStatusType;
- (struct CGSize)loadLabelSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (struct CGSize)loadButtonSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (id)loadTranscriptButtonText;
- (id)effectsControlStatusTextForEffectStyleID:(id)arg1;

@end
