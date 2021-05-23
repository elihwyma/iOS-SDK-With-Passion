/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSDBCache.h>

@class NSPredicate;

@interface CLSContactCache : CLSDBCache

{
    NSPredicate *_entryPredicateWithContactIdentifier;
    NSPredicate *_entryPredicateWithContactIdentifiers;
    NSPredicate *_entryPredicateWithUpdateTimestamp;
}

@property (retain, nonatomic) NSPredicate *entryPredicateWithContactIdentifier;
@property (retain, nonatomic) NSPredicate *entryPredicateWithContactIdentifiers;
@property (retain, nonatomic) NSPredicate *entryPredicateWithUpdateTimestamp;

- (id)init;
- (id)lastHistoryToken;
- (_Bool)setLastHistoryToken:(id)arg1;
- (_Bool)insertFaceprintAnalysisResult:(id)arg1 forContactIdentifier:(id)arg2;
- (_Bool)insertContactWithNoProfilePicture:(id)arg1;
- (id)cachedContactForContactIdentifier:(id)arg1;
- (void)invalidateCacheItemsForContactIdentifiers:(id)arg1;
- (unsigned long long)numberOfCachedContacts;
- (id)dataModelName;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1;
- (void)invalidateCacheItemForContactIdentifier:(id)arg1;
- (void)enumerateCachedEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)_updateHasPicture:(_Bool)arg1 forEntry:(id)arg2;

@end
