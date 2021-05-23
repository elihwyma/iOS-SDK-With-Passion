/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUILibraryFetchControllerViewController.h>

@class NSString, UITapGestureRecognizer, VUIEpisodeDetailView, VUIMediaItem;

@protocol VUIEpisodeDetailViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUIEpisodeDetailViewController : VUILibraryFetchControllerViewController

{
    VUIMediaItem *_mediaItem;
    id <VUIEpisodeDetailViewControllerDelegate> _delegate;
    VUIEpisodeDetailView *_detailView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (retain, nonatomic) VUIMediaItem *mediaItem;
@property (retain, nonatomic) VUIEpisodeDetailView *detailView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (weak, nonatomic) id <VUIEpisodeDetailViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dismissPopover;
- (id)initWithMediaItem:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)_configureNavigationBar;
- (void)dismissTapped:(id)arg1;
- (void)reportMetricsPageEvent;
- (void)didTapPlay;

@end
