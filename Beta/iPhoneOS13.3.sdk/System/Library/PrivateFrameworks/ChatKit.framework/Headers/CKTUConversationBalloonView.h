/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKColoredBalloonView.h>

@class NSString, NSUUID, UIButton, UIImageView, UILabel;

@interface CKTUConversationBalloonView : CKColoredBalloonView

{
    _Bool _animating;
    NSUUID *_tuConversationUUID;
    unsigned long long _state;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_statusLabel;
    UILabel *_durationLabel;
    UIButton *_joinButton;
    NSString *_joinButtonText_TestingOverride;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIButton *joinButton;
@property (nonatomic) _Bool animating;
@property (nonatomic, readonly) _Bool shouldRenderJoinButtonAsIcon;
@property (copy, nonatomic) NSString *joinButtonText_TestingOverride;
@property (retain, nonatomic) NSUUID *tuConversationUUID;

+ (struct CGSize)facetimeIconSize;
+ (id)facetimeImageForSize:(struct CGSize)arg1;

- (void)prepareForReuse;
- (BOOL)color;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)_joinButtonTapped:(id)arg1;
- (id)_joinButtonText;
- (void)_updateStatusLabelForDuration;
- (id)tuConversation;
- (void)configureForCurrentState;
- (id)_joinStateStatusString;
- (id)_currentCall;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (_Bool)wantsGradient;
- (_Bool)joinButtonIsShowingImageContent;
- (_Bool)joinButtonIsShowingTextContent;
- (void)configureForTUConversationChatItem:(id)arg1;

@end
