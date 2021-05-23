/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSString, PXFeedInvitationSectionInfo, PXGadgetSpec, PXSharedAlbumHeaderView, PXSharedAlbumInvitationView;

@protocol PXGadgetDelegate;

@interface PXSharedAlbumInvitationGadget : UIViewController

{
    _Bool _loadedContentData;
    PXGadgetSpec *_gadgetSpec;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    PXFeedInvitationSectionInfo *_invitationSectionInfo;
    PXSharedAlbumHeaderView *_headerView;
    PXSharedAlbumInvitationView *_invitationView;
}

@property (retain, nonatomic) PXSharedAlbumHeaderView *headerView;
@property (retain, nonatomic) PXSharedAlbumInvitationView *invitationView;
@property (nonatomic) _Bool loadedContentData;
@property (retain, nonatomic) PXFeedInvitationSectionInfo *invitationSectionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id <PXGadgetDelegate> delegate;
@property (nonatomic, readonly) _Bool hasContentToDisplay;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) _Bool supportsHighlighting;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, readonly) _Bool supportsAssetsDrop;
@property (nonatomic, readonly) Class collectionViewItemClass;
@property (nonatomic) struct CGRect visibleContentRect;

+ (void)preloadResources;

- (id)init;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (struct NSObject *)contentViewController;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)uniqueGadgetIdentifier;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)sharedAlbumInvitationView:(id)arg1 didAccept:(_Bool)arg2;
- (void)sharedAlbumInvitationViewDidReportAsJunk:(id)arg1;
- (void)sharedAlbumInvitationView:(id)arg1 presentViewController:(id)arg2;
- (void)_updateInvitationView;
- (void)_attemptToNavigateToSharedAlbum:(id)arg1 hostingViewController:(id)arg2;

@end
