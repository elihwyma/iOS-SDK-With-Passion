/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebUI/WBSBookmarkFolderTouchIconProvider.h>

@class NSObject, WebBookmarkCollection;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _SFBookmarkFolderTouchIconProvider : WBSBookmarkFolderTouchIconProvider

{
    WebBookmarkCollection *_collection;
    NSObject<OS_dispatch_queue> *_bookmarkCollectionAccessQueue;
}

- (id)init;
- (_Bool)canHandleRequest:(id)arg1;
- (id)backgroundColor;
- (void)_folderContentsDidChange:(id)arg1;
- (id)defaultFolderIconForRequest:(id)arg1;
- (id)bookmarkUUIDForRequest:(id)arg1;
- (id)displayableFolderContentsForRequest:(id)arg1;
- (id)touchIconRequestForBookmark:(id)arg1 inFolderWithRequest:(id)arg2;

@end
