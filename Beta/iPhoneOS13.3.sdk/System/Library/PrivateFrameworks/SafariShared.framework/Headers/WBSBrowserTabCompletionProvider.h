/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSOperationQueue, NSString, WBSBrowserTabCompletionInfo;

@protocol WBSBrowserTabCompletionProviderDelegate, WBSBrowserTabCompletionProviderSource;

@interface WBSBrowserTabCompletionProvider : NSObject

{
    NSOperationQueue *_queue;
    NSArray *_tabInfos;
    WBSBrowserTabCompletionInfo *_selectedTabInfo;
    id <WBSBrowserTabCompletionProviderSource> _dataSource;
    id <WBSBrowserTabCompletionProviderDelegate> _delegate;
    NSString *_currentQuery;
    NSArray *_currentTabCompletionMatches;
}

@property (weak, nonatomic) id <WBSBrowserTabCompletionProviderSource> dataSource;
@property (weak, nonatomic) id <WBSBrowserTabCompletionProviderDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *currentQuery;
@property (copy, nonatomic, readonly) NSArray *currentTabCompletionMatches;

- (id)init;
- (void)invalidate;
- (void)_performTabCompletionOperationForQuery:(id)arg1 tabInfos:(id)arg2 selectedTabInfo:(id)arg3 forQueryID:(long long)arg4;
- (id)bestTabCompletionMatchFromMatches:(id)arg1 withTopHitURL:(id)arg2 isBestMatchTopHit:(_Bool *)arg3;
- (long long)_compareTabMatch:(id)arg1 otherTabMatch:(id)arg2;
- (void)_tabCompletionOperationCompletedForQuery:(id)arg1 matches:(id)arg2 tabInfos:(id)arg3 selectedTabInfo:(id)arg4;
- (unsigned long long)_distanceFromSelectedTabForTabMatch:(id)arg1;
- (void)setCurrentQuery:(id)arg1 forQueryID:(long long)arg2;
- (id)bestTabCompletionMatchWithTopHitURL:(id)arg1 isBestMatchTopHit:(_Bool *)arg2;

@end
