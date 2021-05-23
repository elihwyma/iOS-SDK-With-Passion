/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUFeedCell.h>

@class NSString, PXFeedInvitationSectionInfo, PXSharedAlbumHeaderView, PXSharedAlbumInvitationView, UILabel;

__attribute__((visibility("hidden")))
@interface PUFeedInvitationCell : PUFeedCell

{
    _Bool _useInPopover;
    _Bool _showHeader;
    _Bool _showFooter;
    PXFeedInvitationSectionInfo *_invitationSectionInfo;
    PXSharedAlbumHeaderView *_headerView;
    PXSharedAlbumInvitationView *_invitationView;
    UILabel *_dateLabel;
}

@property (retain, nonatomic) PXSharedAlbumHeaderView *headerView;
@property (retain, nonatomic) PXSharedAlbumInvitationView *invitationView;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) PXFeedInvitationSectionInfo *invitationSectionInfo;
@property (nonatomic) _Bool useInPopover;
@property (nonatomic) _Bool showHeader;
@property (nonatomic) _Bool showFooter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_delegate;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateColors;
- (void)_updateDate;
- (void)_updateFooter;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)_updateHeaderView;
- (void)sharedAlbumInvitationView:(id)arg1 didAccept:(_Bool)arg2;
- (void)sharedAlbumInvitationViewDidReportAsJunk:(id)arg1;
- (void)sharedAlbumInvitationView:(id)arg1 presentViewController:(id)arg2;
- (void)_updateInvitationView;

@end
