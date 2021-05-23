/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface BBObjectCache : NSObject

{
    NSHashTable *_cache;
}

- (id)init;
- (id)cacheObject:(id)arg1;

@end
