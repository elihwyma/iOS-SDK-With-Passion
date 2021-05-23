/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class SASBulletinCacheNode;

@interface SASBulletinCache : NSObject

{
    unsigned long long _count;
    SASBulletinCacheNode *_oldestNode;
    SASBulletinCacheNode *_newestNode;
}

- (id)init;
- (id)allBulletins;
- (id)cachedBulletinForID:(id)arg1;
- (void)insertBulletin:(id)arg1 fromFeed:(unsigned long long)arg2;
- (_Bool)removeBulletinForID:(id)arg1;
- (_Bool)_isFeedRelevant:(unsigned long long)arg1;
- (id)_findNodeForBulletinID:(id)arg1;
- (void)_deleteNode:(id)arg1;
- (void)_purgeOldestNodes;

@end
