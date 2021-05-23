/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSError, NSMutableOrderedSet, NSString, UISearchController, WFRemoteFileListView, WFRemoteFileStatusView;

@protocol WFFileStorageService;

__attribute__((visibility("hidden")))
@interface WFFilePickerViewController : UIViewController

{
    _Bool _hideSearchBar;
    _Bool _allowsMultipleSelection;
    _Bool _loading;
    id <WFFileStorageService> _service;
    NSString *_path;
    long long _mode;
    CDUnknownBlockType _pickCompletionHandler;
    CDUnknownBlockType _saveCompletionHandler;
    NSArray *_files;
    NSError *_error;
    NSMutableOrderedSet *_selectedFiles;
    UISearchController *_searchController;
    WFRemoteFileListView *_fileListView;
    WFRemoteFileStatusView *_statusView;
}

@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) _Bool allowsMultipleSelection;
@property (nonatomic, readonly) CDUnknownBlockType pickCompletionHandler;
@property (nonatomic, readonly) CDUnknownBlockType saveCompletionHandler;
@property (copy, nonatomic) NSArray *files;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) _Bool loading;
@property (copy, nonatomic) NSMutableOrderedSet *selectedFiles;
@property (nonatomic, readonly) UISearchController *searchController;
@property (weak, nonatomic, readonly) WFRemoteFileListView *fileListView;
@property (weak, nonatomic, readonly) WFRemoteFileStatusView *statusView;
@property (nonatomic, readonly) id <WFFileStorageService> service;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic) _Bool hideSearchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)finish;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint)arg2;
- (id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(struct CGPoint)arg2 withSuggestedActions:(id)arg3;
- (void)didPresentSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateToolbar;
- (void)statusViewDidPressRecoveryButton:(id)arg1;
- (void)fileListView:(id)arg1 didSelectFile:(id)arg2;
- (_Bool)fileListView:(id)arg1 shouldSelectFile:(id)arg2;
- (_Bool)fileListView:(id)arg1 shouldDisplayCheckmarkForFile:(id)arg2;
- (id)initForPickingFilesAtPath:(id)arg1 service:(id)arg2 allowsMultipleSelection:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initForSavingFilesAtPath:(id)arg1 service:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithPath:(id)arg1 selectedFiles:(id)arg2 service:(id)arg3 mode:(long long)arg4 allowsMultipleSelection:(_Bool)arg5 pickCompletionHandler:(CDUnknownBlockType)arg6 saveCompletionHandler:(CDUnknownBlockType)arg7;
- (void)loadFiles;
- (void)updateStatusViewAnimated:(_Bool)arg1;
- (_Bool)caseInsensitiveArray:(id)arg1 isEqualToArray:(id)arg2;
- (void)navigateToSubdirectoryAtPath:(id)arg1;

@end
