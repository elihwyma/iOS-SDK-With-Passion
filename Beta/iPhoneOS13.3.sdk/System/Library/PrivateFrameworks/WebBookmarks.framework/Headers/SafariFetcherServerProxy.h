/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class NSString, WebBookmarksXPCConnection;

@protocol WebBookmarksClientDelegateProtocol;

@interface SafariFetcherServerProxy : NSObject

{
    WebBookmarksXPCConnection *_connection;
    id <WebBookmarksClientDelegateProtocol> _delegate;
}

@property (weak, nonatomic) id <WebBookmarksClientDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;
- (void)startReadingListFetcher;
- (void)clearReadingListArchiveWithUUID:(id)arg1;
- (void)clearAllReadingListArchives;
- (void)didFinishFetching;
- (void)didUpdateProgressWithMessage:(id)arg1;
- (void)didStartFetchingReadingListItemWithMessage:(id)arg1;
- (void)didStopFetchingReadingListItemWithMessage:(id)arg1;

@end
