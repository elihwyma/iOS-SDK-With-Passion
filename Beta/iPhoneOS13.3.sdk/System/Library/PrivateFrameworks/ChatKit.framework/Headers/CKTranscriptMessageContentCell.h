/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKPhoneTranscriptMessageCell.h>

@class NSAttributedString, UILabel, UIView;

@interface CKTranscriptMessageContentCell : CKPhoneTranscriptMessageCell

{
    _Bool _drawerWasVisible;
    _Bool _drawerTextChanged;
    NSAttributedString *_drawerText;
    long long _animationPauseReasons;
    UILabel *_drawerLabel;
    struct CGSize _messageDisplayViewRequestedSize;
    struct CGSize _drawerTextSize;
}

@property (retain, nonatomic) UILabel *drawerLabel;
@property (nonatomic) _Bool drawerWasVisible;
@property (nonatomic) _Bool drawerTextChanged;
@property (nonatomic) struct CGSize drawerTextSize;
@property (readonly) struct CGRect drawerLabelFrame;
@property (copy, nonatomic) NSAttributedString *drawerText;
@property (nonatomic) struct CGSize messageDisplayViewRequestedSize;
@property (nonatomic) long long animationPauseReasons;
@property (readonly) UIView *messageDisplayView;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)willLayoutDrawerLabelFrame:(struct CGRect *)arg1;
- (void)layoutSubviewsForDrawer;
- (void)layoutSubviewsForAlignmentContents;
- (struct CGRect)messageDisplayViewFrame:(struct CGRect)arg1 inContainerFrame:(struct CGRect)arg2;
- (void)configureForChatItem:(id)arg1;

@end
