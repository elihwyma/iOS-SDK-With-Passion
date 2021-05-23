/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMessagePartChatItem.h>

@class IMTranscriptPluginChatItem, NSArray, NSString, UIView, UIViewController;

@protocol CKTranscriptBalloonPluginController, CKTranscriptPluginView;

@interface CKTranscriptPluginChatItem : CKMessagePartChatItem

{
    _Bool _isAppearing;
    _Bool _isHandwriting;
    _Bool _isBusiness;
    id <CKTranscriptBalloonPluginController> _balloonController;
    IMTranscriptPluginChatItem *_imTranscriptPluginChatItem;
    NSString *_conversationID;
    NSArray *_recipients;
}

@property (weak, nonatomic) id <CKTranscriptBalloonPluginController> balloonController;
@property (retain, nonatomic) IMTranscriptPluginChatItem *imTranscriptPluginChatItem;
@property (nonatomic, readonly) _Bool isHandwriting;
@property (retain, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSArray *recipients;
@property (nonatomic) _Bool isBusiness;
@property (nonatomic, readonly) UIView<CKTranscriptPluginView> *extensableView;
@property (nonatomic, readonly) UIViewController *extensibleViewController;
@property (nonatomic, readonly) _Bool isInteractive;
@property (nonatomic, readonly) _Bool wantsTranscriptGroupMonograms;
@property (nonatomic, readonly) _Bool wantsBalloonGradient;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) _Bool wantsOutline;
@property (nonatomic, readonly) IMTranscriptPluginChatItem *IMChatItem;
@property (nonatomic, readonly) UIViewController *contentViewController;
@property (nonatomic, readonly) _Bool isPlayed;
@property (nonatomic, readonly) _Bool isSaved;
@property (nonatomic) _Bool isAppearing;

- (id)message;
- (id)contact;
- (id)sender;
- (struct UIEdgeInsets)contentInsets;
- (id)menuTitle;
- (_Bool)canCopy;
- (id)composition;
- (id)cellIdentifier;
- (Class)cellClass;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (Class)balloonViewClass;
- (_Bool)handlePresentationAction;
- (id)pasteboardItems;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (struct UIEdgeInsets)textAlignmentInsets;
- (BOOL)transcriptOrientation;
- (void)performHostAppResume;
- (_Bool)canForward;
- (id)dragItemProvider;
- (_Bool)wantsDrawerLayout;
- (id)loadTranscriptDrawerText;
- (void)pluginContentViewWillDisappear;
- (void)pluginContentViewDidDisappear;
- (void)relinquishBalloonController;
- (void)pluginContentViewWillAppear;
- (void)configureWithConversationID:(id)arg1 recipients:(id)arg2 isBusiness:(_Bool)arg3;
- (void)releaseBalloonControllerIfNeeded;
- (id)pluginDisplayContainer;
- (void)_configureBalloonController:(id)arg1 conversationID:(id)arg2 recipients:(id)arg3 isBusiness:(_Bool)arg4;
- (void)_cacheConversationID:(id)arg1 recipients:(id)arg2 isBusiness:(_Bool)arg3;
- (id)snapshotGUIDForPluginPayload:(id)arg1;
- (_Bool)shouldSnapshot;

@end
