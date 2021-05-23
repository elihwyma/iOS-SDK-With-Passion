/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary;

@interface BBDismissalSyncCache : NSObject

{
    NSMutableDictionary *_cache;
    NSDate *_timeToCheck;
}

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSDate *timeToCheck;

- (id)init;
- (id)description;
- (id)findBulletinMatch:(id)arg1;
- (void)removeBulletinMatch:(id)arg1;
- (void)_checkCache;
- (_Bool)_isTimeToCheck;
- (void)cacheDismissalDictionaries:(id)arg1 dismissalIDs:(id)arg2 inSection:(id)arg3 forFeeds:(unsigned long long)arg4;

@end
