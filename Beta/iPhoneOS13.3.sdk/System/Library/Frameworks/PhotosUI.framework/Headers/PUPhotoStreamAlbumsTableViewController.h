/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewController.h>

@class NSMutableSet, NSOrderedSet;

@protocol PUPhotoStreamsAlbumsTableViewControllerDelegate;

@interface PUPhotoStreamAlbumsTableViewController : UITableViewController

{
    NSOrderedSet *_albumsOrderedSet;
    NSMutableSet *_selectedAlbumGuids;
    _Bool _allowsMutlipleSelection;
    id <PUPhotoStreamsAlbumsTableViewControllerDelegate> _pickerDelegate;
}

@property (nonatomic) _Bool allowsMutlipleSelection;
@property (weak, nonatomic) id <PUPhotoStreamsAlbumsTableViewControllerDelegate> pickerDelegate;

+ (struct NSObject *)albumListForContentMode:(int)arg1;
+ (CDUnknownBlockType)_albumsComparator;

- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (struct CGSize)contentSizeForViewInPopover;
- (void)didReceiveMemoryWarning;
- (void)addSelectedCloudGuid:(id)arg1;
- (void)reloadActions;
- (id)posterImageForAlbum:(struct NSObject *)arg1 imageView:(id)arg2;

@end
