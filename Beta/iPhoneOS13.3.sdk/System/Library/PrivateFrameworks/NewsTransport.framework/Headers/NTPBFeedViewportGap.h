/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, NTPBDate, NTPBFeedRefreshSessionForYouConfig, NTPBFeedViewportEdition;

@interface NTPBFeedViewportGap : PBCodable

{
    CDStruct_95bda58d _activeGroupEmitterIDRefs;
    CDStruct_95bda58d _groupEmitterIDRefs;
    NSMutableArray *_cursors;
    NTPBFeedRefreshSessionForYouConfig *_forYouConfig;
    NSString *_identifier;
    NTPBFeedViewportEdition *_lastCompletedEdition;
    NTPBDate *_modificationDate;
    NSMutableArray *_pendingGroups;
    NTPBDate *_refreshDate;
    _Bool _isOffline;
    _Bool _reachedEnd;
    struct {
        unsigned int isOffline:1;
        unsigned int reachedEnd:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasRefreshDate;
@property (retain, nonatomic) NTPBDate *refreshDate;
@property (nonatomic, readonly) _Bool hasModificationDate;
@property (retain, nonatomic) NTPBDate *modificationDate;
@property (nonatomic) _Bool hasReachedEnd;
@property (nonatomic) _Bool reachedEnd;
@property (nonatomic, readonly) unsigned long long groupEmitterIDRefsCount;
@property (nonatomic, readonly) int *groupEmitterIDRefs;
@property (retain, nonatomic) NSMutableArray *cursors;
@property (nonatomic, readonly) _Bool hasLastCompletedEdition;
@property (retain, nonatomic) NTPBFeedViewportEdition *lastCompletedEdition;
@property (retain, nonatomic) NSMutableArray *pendingGroups;
@property (nonatomic, readonly) unsigned long long activeGroupEmitterIDRefsCount;
@property (nonatomic, readonly) int *activeGroupEmitterIDRefs;
@property (nonatomic) _Bool hasIsOffline;
@property (nonatomic) _Bool isOffline;
@property (nonatomic, readonly) _Bool hasForYouConfig;
@property (retain, nonatomic) NTPBFeedRefreshSessionForYouConfig *forYouConfig;

+ (Class)cursorsType;
+ (Class)pendingGroupsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (unsigned long long)cursorsCount;
- (id)cursorsAtIndex:(unsigned long long)arg1;
- (int)groupEmitterIDRefAtIndex:(unsigned long long)arg1;
- (int)activeGroupEmitterIDRefsAtIndex:(unsigned long long)arg1;
- (void)addGroupEmitterIDRef:(int)arg1;
- (void)addCursors:(id)arg1;
- (void)addPendingGroups:(id)arg1;
- (void)addActiveGroupEmitterIDRefs:(int)arg1;
- (void)clearGroupEmitterIDRefs;
- (void)setGroupEmitterIDRefs:(int *)arg1 count:(unsigned long long)arg2;
- (void)clearCursors;
- (void)clearPendingGroups;
- (unsigned long long)pendingGroupsCount;
- (id)pendingGroupsAtIndex:(unsigned long long)arg1;
- (void)clearActiveGroupEmitterIDRefs;
- (void)setActiveGroupEmitterIDRefs:(int *)arg1 count:(unsigned long long)arg2;

@end
