/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFActivity.h>

@class _SFSingleBookmarkNavigationController;

@interface _SFAddBookmarkActivity : _SFActivity

{
    _SFSingleBookmarkNavigationController *_bookmarkNavigationController;
}

@property (nonatomic, readonly) _SFSingleBookmarkNavigationController *bookmarkNavigationController;

- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityViewController;
- (id)_embeddedActivityViewController;
- (void)addBookmarkNavController:(id)arg1 didFinishWithResult:(_Bool)arg2 bookmark:(id)arg3;
- (_Bool)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1;

@end
