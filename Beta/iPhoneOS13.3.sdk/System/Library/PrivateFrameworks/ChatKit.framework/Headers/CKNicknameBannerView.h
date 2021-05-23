/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

#import <ChatKit/Swift-Protocol.h>

@class CKAvatarView, NSArray, NSDictionary, NSString, UIButton, UIImageView, UITextView, UIVisualEffectView;

@protocol CKNicknameBannerViewDelegate;

@interface CKNicknameBannerView : UIView <Swift>

{
    _Bool _useNamedTitles;
    _Bool _useNamedSubtitles;
    _Bool _inUpdatesMode;
    id <CKNicknameBannerViewDelegate> _delegate;
    unsigned long long _style;
    NSArray *_nicknameUpdates;
    UITextView *_titleLabel;
    UITextView *_subtitleLabel;
    NSDictionary *_contactMap;
    UIVisualEffectView *_blurView;
    CKAvatarView *_avatarView;
    CKAvatarView *_secondaryAvatarView;
    UIView *_avatarCutoutView;
    UIImageView *_contactsIconView;
    UIButton *_cancelButton;
}

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) NSArray *nicknameUpdates;
@property (retain, nonatomic) NSDictionary *contactMap;
@property (nonatomic) _Bool useNamedTitles;
@property (nonatomic) _Bool inUpdatesMode;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) CKAvatarView *avatarView;
@property (retain, nonatomic) CKAvatarView *secondaryAvatarView;
@property (retain, nonatomic) UIView *avatarCutoutView;
@property (retain, nonatomic) UIImageView *contactsIconView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UITextView *titleLabel;
@property (retain, nonatomic) UITextView *subtitleLabel;
@property (nonatomic) id <CKNicknameBannerViewDelegate> delegate;
@property (nonatomic, readonly) _Bool useNamedSubtitles;
@property (nonatomic, readonly) double titleLabelAlignmentX;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)layoutMargins;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)contactStore;
- (void)setupViews;
- (void)cancelButtonTapped:(id)arg1;
- (void)_updateTitleLabel;
- (double)maxLabelWidthForSize:(struct CGSize)arg1;
- (id)cancelGlyph;
- (void)_updateAvatarView;
- (void)_updateSubtitleLabel;
- (id)_avatarContactForUpdate:(id)arg1;
- (id)createContactForOutgoingShare;
- (id)createContactFromNickname:(id)arg1;
- (id)nicknameController;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2 updates:(id)arg3 useNamedTitles:(_Bool)arg4 inUpdatesMode:(_Bool)arg5;

@end
