/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class CKCNSharingProfileAvatarItemProvider, CKTextBalloonView, CNContact, CNSharingProfileAvatarItemProviderConfiguration, NSArray, UILabel;

@interface CKNicknamePreviewView : UIView

{
    _Bool _shouldStopAnimation;
    UILabel *_senderLabel;
    NSArray *_avatarViews;
    CKTextBalloonView *_balloonView;
    NSArray *_senderStrings;
    CKCNSharingProfileAvatarItemProvider *_avatarItemProvider;
    CNContact *_contact;
}

@property (retain, nonatomic) UILabel *senderLabel;
@property (retain, nonatomic) NSArray *avatarViews;
@property (retain, nonatomic) CKTextBalloonView *balloonView;
@property (retain, nonatomic) NSArray *senderStrings;
@property (retain, nonatomic) CKCNSharingProfileAvatarItemProvider *avatarItemProvider;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic, readonly) CNSharingProfileAvatarItemProviderConfiguration *avatarItemProviderConfiguration;
@property (nonatomic) _Bool shouldStopAnimation;

- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)beginAnimation;
- (id)initWithContact:(id)arg1 avatarRecord:(id)arg2;
- (id)imageForAvatarType:(long long)arg1;
- (id)senderStringForAvatarType:(long long)arg1;
- (void)updateBalloonTraitCollection;
- (id)balloonText;
- (void)avatarDidFinishTransitionToAvatarAtIndex:(unsigned long long)arg1;
- (void)runFlipAnimationOnAvatarView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSenderLabelVisible:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)flipAnimation;

@end
