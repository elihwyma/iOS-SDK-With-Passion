/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSCache, SLFacebookAlbumManager, UIButton;

@protocol SLFacebookAlbumChooserViewControllerDelegate;

@interface SLFacebookAlbumChooserViewController : UITableViewController

{
    NSCache *_coverImageCache;
    UIButton *_flipBackButton;
    SLFacebookAlbumManager *_albumManager;
    NSArray *_albums;
    id <SLFacebookAlbumChooserViewControllerDelegate> _delegate;
}

@property (retain) UIButton *flipBackButton;
@property (retain) SLFacebookAlbumManager *albumManager;
@property (retain) NSArray *albums;
@property (weak) id <SLFacebookAlbumChooserViewControllerDelegate> delegate;

+ (id)_squareImageFromAlbumImage:(id)arg1;
+ (id)_blankSurrogateAlbumImage;

- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)albumManager:(id)arg1 didRefreshAlbums:(id)arg2;
- (void)albumManager:(id)arg1 didFailAlbumRefreshWithError:(id)arg2;
- (void)albumManager:(id)arg1 didLoadCoverImage:(id)arg2 forAlbum:(id)arg3;
- (void)albumManager:(id)arg1 didFailLoadingCoverImageForAlbum:(id)arg2 withError:(id)arg3;
- (id)initWithAlbumManager:(id)arg1;
- (void)flipBackTapped:(id)arg1;

@end
