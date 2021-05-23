/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3StatementCacheNode;

__attribute__((visibility("hidden")))
@interface ML3StatementCacheList : NSObject

{
    ML3StatementCacheNode *_firstNode;
    ML3StatementCacheNode *_lastNode;
}

@property (nonatomic, readonly) ML3StatementCacheNode *firstNode;
@property (nonatomic, readonly) ML3StatementCacheNode *lastNode;
@property (nonatomic, readonly) unsigned long long count;

- (id)description;
- (void)appendNode:(id)arg1;
- (void)promoteNodeWithDictionaryKey:(id)arg1;
- (id)oldestNode;
- (void)deleteOldestNode;
- (void)deleteAllNodes;

@end
