/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, UIColor;

@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSBookmarkFolderTouchIconProvider : NSObject

{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_requestsToRequestInfos;
    NSMutableDictionary *_folderUUIDsToTouchIconInfo;
    id <WBSSiteMetadataProviderDelegate> _providerDelegate;
}

@property (nonatomic, readonly) NSArray *allFolderUUIDs;
@property (readonly) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <WBSSiteMetadataProviderDelegate> providerDelegate;
@property (nonatomic, readonly) _Bool providesFavicons;

+ (_Bool)_appUsesLeftToRightLayout;

- (id)init;
- (_Bool)canHandleRequest:(id)arg1;
- (void)removeInfoForFolderWithUUID:(id)arg1;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (void)removeInfoForFoldersWithUUIDs:(id)arg1;
- (id)defaultFolderIconForRequest:(id)arg1;
- (id)bookmarkUUIDForRequest:(id)arg1;
- (id)displayableFolderContentsForRequest:(id)arg1;
- (id)touchIconRequestForBookmark:(id)arg1 inFolderWithRequest:(id)arg2;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(_Bool *)arg2;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(_Bool)arg2;
- (void)_prepareResponseForRequest:(id)arg1 allowDelayedResponse:(_Bool)arg2;
- (CDUnknownBlockType)_responseHandlerForRequest:(id)arg1 thumbnailIndex:(unsigned long long)arg2;
- (void)_coalesceResponseDispatchForRequest:(id)arg1;
- (void)_dispatchResponseForRequest:(id)arg1;
- (void)_dispatchResponseForRequest:(id)arg1 touchIcon:(id)arg2;
- (id)_drawTouchIconForRequest:(id)arg1;
- (void)didCreateTouchIcon:(id)arg1;

@end
