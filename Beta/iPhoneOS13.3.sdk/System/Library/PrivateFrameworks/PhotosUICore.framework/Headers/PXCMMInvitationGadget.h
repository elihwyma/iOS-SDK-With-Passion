/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSManagedObjectID, NSString, PXCMMInvitationView, PXCMMInvitationViewModel, PXGadgetSpec, PXMomentShareStatusPresentation;

@protocol PXCMMInvitation, PXCMMInvitationGadgetDelegate, PXCMMWorkflowPresenting, PXGadgetDelegate;

@interface PXCMMInvitationGadget : NSObject <Swift>

{
    id <PXCMMInvitation> _invitation;
    _Bool _didLoadInvitation;
    PXCMMInvitationViewModel *_invitationViewModel;
    PXCMMInvitationView *_invitationView;
    struct CGSize _requestedPosterImageSize;
    double _requestedWidth;
    _Bool _didRequestCachingOfPosterImage;
    PXGadgetSpec *_gadgetSpec;
    id <PXGadgetDelegate> _delegate;
    id <PXCMMWorkflowPresenting> _workflowPresenter;
    NSManagedObjectID *_objectID;
    id <PXCMMInvitationGadgetDelegate> _invitationGadgetDelegate;
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
}

@property (retain, nonatomic) PXMomentShareStatusPresentation *momentShareStatusPresentation;
@property (nonatomic, readonly) id <PXCMMWorkflowPresenting> workflowPresenter;
@property (retain, nonatomic) NSManagedObjectID *objectID;
@property (retain, nonatomic) id <PXCMMInvitation> invitation;
@property (weak, nonatomic) id <PXCMMInvitationGadgetDelegate> invitationGadgetDelegate;
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

+ (id)_imageRequestOptions;
+ (id)sharedUserInitiatedQueue;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)commitPreviewViewController:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateTitle:(id)arg1;
- (struct NSObject *)previewViewControllerAtLocation:(struct CGPoint)arg1 fromSourceView:(struct NSObject *)arg2;
- (void)prepareCollectionViewItem:(struct UICollectionViewCell *)arg1;
- (id)uniqueGadgetIdentifier;
- (void)contentHasBeenSeen;
- (void)prefetchDuringScrollingForWidth:(double)arg1;
- (struct NSObject *)targetPreviewViewForLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)invitationViewSizeThatFitsDidChange:(id)arg1;
- (void)presentDetailViewForInvitationView:(id)arg1 animated:(_Bool)arg2;
- (id)initWithWorkflowPresenter:(id)arg1;
- (void)presentDetailViewAnimated:(_Bool)arg1;
- (void)_loadInvitationIfNecessary;
- (void)_lastExitedForYouDateDidChange:(id)arg1;
- (void)_registerMomentShareStatusPresentation;
- (void)_updateStatusString:(id)arg1;
- (void)_updateExpirationTitle:(id)arg1;
- (void)_presentDetailViewAnimated:(_Bool)arg1;
- (void)_cachePosterImageWithWidth:(double)arg1;
- (void)_clearPosterImageCache;

@end
