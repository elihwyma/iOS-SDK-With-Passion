/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCFeedEdition, NSArray, NSDate, NSDictionary, NSSet, NSString;

@protocol FCFeedRefreshSessionForYouConfig;

@interface FCFeedRefreshSession : NSObject

{
    _Bool _reachedEnd;
    _Bool _isOffline;
    _Bool _isNewEdition;
    NSString *_identifier;
    NSDate *_refreshDate;
    NSDate *_modificationDate;
    NSDictionary *_cursorsByGroupEmitterID;
    NSArray *_pendingGroups;
    NSSet *_activeGroupEmitterIDs;
    FCFeedEdition *_lastCompletedEdition;
    id <FCFeedRefreshSessionForYouConfig> _forYouConfig;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *refreshDate;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (copy, nonatomic, readonly) NSDictionary *cursorsByGroupEmitterID;
@property (copy, nonatomic, readonly) NSArray *pendingGroups;
@property (copy, nonatomic, readonly) NSSet *activeGroupEmitterIDs;
@property (nonatomic, readonly) FCFeedEdition *lastCompletedEdition;
@property (nonatomic, readonly) _Bool reachedEnd;
@property (nonatomic, readonly) _Bool isOffline;
@property (copy, nonatomic, readonly) id <FCFeedRefreshSessionForYouConfig> forYouConfig;
@property (nonatomic, readonly) _Bool isNewEdition;

+ (id)currentEditionWithRefreshDate:(id)arg1 lastCompletedEdition:(id)arg2 fromPaginator:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithAllGroupEmittersExhausted;
- (id)initWithIdentifier:(id)arg1 refreshDate:(id)arg2 modificationDate:(id)arg3 lastCompletedEdition:(id)arg4 cursorsByGroupEmitterID:(id)arg5 pendingGroups:(id)arg6 activeGroupEmitterIDs:(id)arg7 reachedEnd:(_Bool)arg8 isOffline:(_Bool)arg9 forYouConfig:(id)arg10;
- (id)copyByRemovingPendingGroupIdenticalTo:(id)arg1;
- (id)initWithRefreshDate:(id)arg1 activeGroupEmitterIDs:(id)arg2 isOffline:(_Bool)arg3 forYouConfig:(id)arg4;
- (id)currentEditionFromPaginator:(id)arg1;
- (id)copyWithModificationDate:(id)arg1 lastCompletedEdition:(id)arg2 cursorsByGroupEmitterID:(id)arg3 pendingGroups:(id)arg4 activeGroupEmitterIDs:(id)arg5 reachedEnd:(_Bool)arg6 isOffline:(_Bool)arg7;
- (id)copyWithExhaustedGroupEmitterID:(id)arg1 cursors:(id)arg2;
- (id)copyWithAdditionalPendingGroups:(id)arg1 cursors:(id)arg2;
- (id)copyByRemovingPendingGroupsAtIndexes:(id)arg1;

@end
