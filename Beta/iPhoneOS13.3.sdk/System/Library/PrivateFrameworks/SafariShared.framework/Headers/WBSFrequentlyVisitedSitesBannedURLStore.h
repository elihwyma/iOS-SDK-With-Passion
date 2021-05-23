/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURL;

@protocol OS_dispatch_queue;

@interface WBSFrequentlyVisitedSitesBannedURLStore : NSObject

{
    NSURL *_storeURL;
    NSObject<OS_dispatch_queue> *_storeQueue;
    NSMutableDictionary *_bannedURLStringsToEntriesMap;
}

- (void)dealloc;
- (id)urlStrings;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_historyWasCleared:(id)arg1;
- (void)addURLString:(id)arg1;
- (_Bool)containsURLString:(id)arg1;
- (id)_bannedURLStringsToEntriesMap;
- (void)_writeOutBannedURLStringsAsynchronously;
- (void)removeAllURLStrings;
- (void)removeURLStrings:(id)arg1;
- (id)initWithStoreURL:(id)arg1 history:(id)arg2;

@end
