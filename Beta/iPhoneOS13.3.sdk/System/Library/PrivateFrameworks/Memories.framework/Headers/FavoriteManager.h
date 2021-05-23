/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FavoriteManager : NSObject

{
    _Bool _migrating;
    NSMutableDictionary *_favoriteDictionary;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_group> *_serialQueueGroup;
    NSRecursiveLock *_dictLock;
}

@property (retain, nonatomic) NSMutableDictionary *favoriteDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *serialQueueGroup;
@property (retain, nonatomic) NSRecursiveLock *dictLock;
@property (nonatomic, getter=isMigrating) _Bool migrating;

+ (id)sharedFavoriteManager;
+ (id)trimRanges:(id)arg1 toMovie:(id)arg2;
+ (id)subtractRange:(struct _NSRange)arg1 fromRange:(struct _NSRange)arg2;
+ (_Bool)favoriteRanges:(id)arg1 containRange:(struct _NSRange)arg2;
+ (id)collapseRanges:(id)arg1;

- (id)_init;
- (void)migrate;
- (id)favoriteRangesForMovie:(id)arg1;
- (void)loadFavoriteDictionary;
- (id)propertyListFileURL;
- (void)_setFavoriteInfo:(id)arg1 forURL:(id)arg2;
- (void)_removeFavoriteInfoForURL:(id)arg1;
- (_Bool)FAILSAFE_isInvalidRangesArray:(id)arg1;
- (void)saveFavoriteDictionary;
- (id)_favoriteInfoForURL:(id)arg1;
- (void)_setFavoriteRanges:(id)arg1 forURL:(id)arg2;
- (void)removeFavoriteRange:(struct _NSRange)arg1 forMovie:(id)arg2;
- (void)addFavoriteRange:(struct _NSRange)arg1 forMovie:(id)arg2 shouldCollapse:(_Bool)arg3;
- (void)waitForOutstandingWritingToComplete;
- (void)removeAllFavoritesForMovie:(id)arg1;
- (void)unfavoriteRange:(struct _NSRange)arg1 forMovie:(id)arg2;
- (void)addFavoriteRange:(struct _NSRange)arg1 forMovie:(id)arg2;
- (_Bool)favoriteRange:(struct _NSRange)arg1 existsForMovie:(id)arg2;
- (_Bool)favoritesExistInRange:(struct _NSRange)arg1 forMovie:(id)arg2;
- (id)_favoriteRangesForURL:(id)arg1;
- (id)combinedRCRangeArrayFromNSRangeArray:(id)arg1;

@end
