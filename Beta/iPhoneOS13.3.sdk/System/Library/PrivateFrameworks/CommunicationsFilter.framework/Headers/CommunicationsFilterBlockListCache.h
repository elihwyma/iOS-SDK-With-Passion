/*
 Image: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CommunicationsFilterBlockListCache : NSObject

{
    NSMutableArray *_recentItems;
    int _notifyEmptyListToken;
    _Bool _listIsEmpty;
}

- (id)init;
- (void)removeItemFromCache:(id)arg1;
- (long long)cachedResponseForItem:(id)arg1;
- (void)setResponse:(_Bool)arg1 forItem:(id)arg2;
- (void)_blockListChanged:(id)arg1;
- (void)syncListEmptyState;

@end
