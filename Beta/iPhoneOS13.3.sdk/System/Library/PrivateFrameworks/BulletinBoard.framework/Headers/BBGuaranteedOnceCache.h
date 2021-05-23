/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface BBGuaranteedOnceCache : NSObject

{
    NSMapTable *_guaranteedCache;
    NSMapTable *_bestEffortCache;
}

- (id)init;
- (void)removeObjectUsingKey:(id)arg1;
- (_Bool)attemptToGuaranteeObjectUsingKey:(id)arg1;
- (id)objectUsingKeyRemovingGuarantee:(id)arg1;
- (void)cacheObject:(id)arg1 usingKey:(id)arg2;

@end
