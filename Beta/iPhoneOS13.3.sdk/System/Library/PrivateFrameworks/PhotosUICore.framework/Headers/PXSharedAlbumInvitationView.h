/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSString, PXCapsuleButton, PXFeedInvitationSectionInfo, PXRoundedCornerOverlayView, UIImageView, UILabel;

@protocol PLCloudSharedAlbumProtocol, PXSharedAlbumInvitationViewDelegate;

@interface PXSharedAlbumInvitationView : UIView

{
    _Bool _useInPopover;
    id <PXSharedAlbumInvitationViewDelegate> _delegate;
    PXFeedInvitationSectionInfo *_invitationSectionInfo;
    double _cornerRadius;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    unsigned long long _avatarImageTag;
    UIImageView *_avatarView;
    UILabel *_infoLabel;
    UILabel *_albumTitleLabel;
    PXCapsuleButton *_acceptButton;
    PXCapsuleButton *_declineButton;
    UILabel *_reportJunkLabel;
    id <PLCloudSharedAlbumProtocol> _sharedAlbum;
    struct UIEdgeInsets _contentInsets;
}

@property (retain, nonatomic) PXRoundedCornerOverlayView *roundedCornerOverlayView;
@property (nonatomic) unsigned long long avatarImageTag;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UILabel *albumTitleLabel;
@property (retain, nonatomic) PXCapsuleButton *acceptButton;
@property (retain, nonatomic) PXCapsuleButton *declineButton;
@property (retain, nonatomic) UILabel *reportJunkLabel;
@property (retain, nonatomic) id <PLCloudSharedAlbumProtocol> sharedAlbum;
@property (weak, nonatomic) id <PXSharedAlbumInvitationViewDelegate> delegate;
@property (retain, nonatomic) PXFeedInvitationSectionInfo *invitationSectionInfo;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) double cornerRadius;
@property (nonatomic) _Bool useInPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)preloadResources;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateColors;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_updateUI;
- (void)_updateRoundedCornerOverlayView;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;
- (id)_parentViewBackgroundColor;
- (id)_declineButtonColor;
- (id)_roundedCornerViewBackgroundColor;
- (void)_updateAvatarImage:(unsigned long long)arg1;
- (void)_handlePersonImage:(id)arg1 imageTag:(unsigned long long)arg2;
- (void)_updateInfoLabel;
- (void)_updateAlbumTitleLabel;
- (void)_updateReportJunkLabel;
- (id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 buttonColor:(id)arg3 titleColor:(id)arg4;
- (void)_openiCloudSettings;
- (void)_showOutOfNetworkInvitationMessageForSharedAlbum:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_enableUserInteractions:(_Bool)arg1;
- (void)_presentToastWithTitle:(id)arg1;
- (void)_acceptButtonTapped:(id)arg1;
- (void)_declineButtonTapped:(id)arg1;
- (void)_reportJunk;
- (void)_reportJunkLabelTapped:(id)arg1;

@end
