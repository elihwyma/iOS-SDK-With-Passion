/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface BBDismissalSyncCacheItem : NSObject

{
    NSMutableArray *_dismissalDictionariesAndFeeds;
    NSMutableDictionary *_dismissalIDToFeeds;
}

@property (nonatomic, readonly) NSMutableArray *dismissalDictionariesAndFeeds;
@property (nonatomic, readonly) NSMutableDictionary *dismissalIDToFeeds;

- (id)init;
- (id)description;
- (void)cacheDismissalDictionaries:(id)arg1 dismissalIDs:(id)arg2 forFeeds:(unsigned long long)arg3;
- (id)findBulletinMatch:(id)arg1;
- (void)removeBulletinMatch:(id)arg1;
- (id)purgeExpired;

@end
