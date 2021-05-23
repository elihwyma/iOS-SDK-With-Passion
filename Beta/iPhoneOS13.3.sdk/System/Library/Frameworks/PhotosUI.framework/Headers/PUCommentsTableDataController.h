/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSCache, NSString, PHAsset, PLCloudSharedComment, PLManagedAsset, PUPhotoCommentEntryView, UITableView;

@protocol PUCommentsTableDataControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUCommentsTableDataController : NSObject

{
    NSCache *_commentsHeightCache;
    PUPhotoCommentEntryView *_entryView;
    _Bool _editing;
    _Bool _shouldUseCompactCommentSeparators;
    UITableView *_tableView;
    PHAsset *_asset;
    id <PUCommentsTableDataControllerDelegate> _delegate;
    PLManagedAsset *_managedAsset;
    PLCloudSharedComment *_justInsertedComment;
}

@property (retain, nonatomic) PLManagedAsset *managedAsset;
@property (retain, nonatomic) PLCloudSharedComment *justInsertedComment;
@property (nonatomic, readonly) UITableView *tableView;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (nonatomic) _Bool shouldUseCompactCommentSeparators;
@property (weak, nonatomic) id <PUCommentsTableDataControllerDelegate> delegate;
@property (nonatomic, readonly) double minimumHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)initWithTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)cloudCommentsDidChange:(id)arg1;
- (id)_commentText;
- (_Bool)photoCommentEntryViewShouldEndEditing:(id)arg1;
- (void)photoCommentEntryViewDidBeginEditing:(id)arg1;
- (void)photoCommentEntryViewHeightDidChange:(id)arg1;
- (void)photoCommentEntryViewWillBeginEditing:(id)arg1;
- (void)photoCommentEntryViewDidEndEditing:(id)arg1;
- (void)_updateFirstResponder;
- (_Bool)_isAssetOwnerSectionVisible;
- (long long)_smileCommentSection;
- (long long)_assetOwnerCommentSection;
- (long long)_postCommentSection;
- (long long)_textCommentSection;
- (id)_currentEntryView;
- (void)_scrollToComment:(id)arg1 animated:(_Bool)arg2;
- (double)_heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;
- (_Bool)_canPostCommentWithText:(id)arg1 localizedFailureDescription:(id *)arg2;
- (void)_postCommentWithText:(id)arg1;
- (void)_fontCacheDidChange:(id)arg1;
- (void)_validateAndPostComment:(id)arg1;

@end
