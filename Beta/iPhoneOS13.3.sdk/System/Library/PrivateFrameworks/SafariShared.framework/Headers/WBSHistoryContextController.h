/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class CKContextClient, CKContextResponse, NSURL, WBSHistory;

@protocol OS_dispatch_queue;

@interface WBSHistoryContextController : NSObject

{
    CKContextResponse *_cachedResponse;
    NSURL *_pageURLForCachedResponse;
    NSObject<OS_dispatch_queue> *_internalQueue;
    CKContextClient *_client;
    WBSHistory *_history;
}

@property (nonatomic, readonly) WBSHistory *history;

- (id)initWithHistory:(id)arg1 contextClient:(id)arg2;
- (void)_persistTopicsFromContextResult:(id)arg1 forPageURL:(id)arg2;
- (void)cachedResponseForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidateCachedResults;
- (void)contextForPageURL:(id)arg1 content:(id)arg2 contentType:(long long)arg3 metadata:(id)arg4 isPrivate:(_Bool)arg5 isReaderAvailable:(_Bool)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;

@end
