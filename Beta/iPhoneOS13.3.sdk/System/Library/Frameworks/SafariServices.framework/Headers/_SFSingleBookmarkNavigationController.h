/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UINavigationController.h>

@class NSString, WebBookmarkCollection, _SFBookmarkInfoViewController;

@protocol _SFSingleBookmarkNavigationControllerDelegate;

@interface _SFSingleBookmarkNavigationController : UINavigationController

{
    _SFBookmarkInfoViewController *_infoViewController;
    WebBookmarkCollection *_collection;
    _Bool _delegateNotifiedOfResult;
    id <_SFSingleBookmarkNavigationControllerDelegate> _bookmarkNavDelegate;
}

@property (weak, nonatomic) id <_SFSingleBookmarkNavigationControllerDelegate> bookmarkNavDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCollection:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)_lastSelectedFolder;
- (id)_initWithBookmark:(id)arg1 childBookmarks:(id)arg2 inCollection:(id)arg3 addingBookmark:(_Bool)arg4 toFavorites:(_Bool)arg5;
- (void)bookmarkInfoViewController:(id)arg1 didFinishWithResult:(_Bool)arg2;
- (_Bool)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1;
- (_Bool)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)arg1;
- (id)initWithBookmark:(id)arg1 inCollection:(id)arg2;
- (id)initWithFolderOfBookmarks:(id)arg1 inCollection:(id)arg2;
- (id)initForAddingToFavoritesInCollection:(id)arg1;
- (id)addBookmarkWithTitle:(id)arg1 address:(id)arg2 parentBookmark:(id)arg3;
- (_Bool)prepareForPresentationForAddingBookmark:(_Bool)arg1;

@end
