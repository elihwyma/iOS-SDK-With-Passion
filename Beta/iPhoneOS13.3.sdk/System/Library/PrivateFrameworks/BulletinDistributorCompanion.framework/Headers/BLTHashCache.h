/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface BLTHashCache : NSObject

{
    NSMutableDictionary *_cacheBySectionID;
}

- (id)init;
- (void)updateCacheWithItems:(id)arg1 forSectionID:(id)arg2 matchID:(id)arg3 result:(CDUnknownBlockType)arg4;

@end
