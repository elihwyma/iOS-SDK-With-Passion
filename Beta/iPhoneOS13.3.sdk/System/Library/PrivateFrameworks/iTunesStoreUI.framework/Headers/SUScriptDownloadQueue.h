/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSString, SSPreorderManager, SUClientInterface, SUDownloadManager;

@interface SUScriptDownloadQueue : SUScriptObject

{
    SUClientInterface *_clientInterface;
    SUDownloadManager *_downloadManager;
    SSPreorderManager *_preorderManager;
    NSString *_queueType;
}

@property (readonly) NSArray *downloads;
@property (readonly) NSString *queueType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (id)attributeKeys;
- (void)finalizeForWebScript;
- (void)preorderManagerPreordersDidChange:(id)arg1;
- (id)scriptAttributeKeys;
- (void)_setupManagersWithClientInterface:(id)arg1 queueType:(id)arg2;
- (void)_tearDownQueues;
- (void)checkQueue;
- (id)initWithQueueType:(id)arg1 clientInterface:(id)arg2;

@end
