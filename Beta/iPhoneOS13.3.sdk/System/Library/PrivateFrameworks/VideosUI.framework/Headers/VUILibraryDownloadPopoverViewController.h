/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

@class NSString, VUILibraryListItemView;

@protocol VUILibraryDownloadPopoverViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryDownloadPopoverViewController : UIViewController

{
    id <VUILibraryDownloadPopoverViewControllerDelegate> _delegate;
    VUILibraryListItemView *_listView;
}

@property (retain, nonatomic) VUILibraryListItemView *listView;
@property (weak, nonatomic) id <VUILibraryDownloadPopoverViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)popoverPressed:(id)arg1;

@end
