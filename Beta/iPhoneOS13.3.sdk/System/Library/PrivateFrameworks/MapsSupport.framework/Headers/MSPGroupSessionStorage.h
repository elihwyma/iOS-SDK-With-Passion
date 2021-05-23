/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOSharedNavState, NSMutableArray, NSString, PBUnknownFields;

@interface MSPGroupSessionStorage : PBCodable

{
    PBUnknownFields *_unknownFields;
    double _lastUpdateTimestamp;
    NSString *_fromID;
    NSString *_groupIdentifier;
    NSMutableArray *_liveStrategyIdentifiers;
    NSMutableArray *_messageStrategyIdentifiers;
    NSMutableArray *_minimalStrategyIdentifiers;
    NSString *_originatorIdentifier;
    NSString *_receivingAccountIdentifier;
    NSString *_receivingHandle;
    GEOSharedNavState *_state;
    struct {
        unsigned int lastUpdateTimestamp:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasGroupIdentifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (nonatomic, readonly) _Bool hasOriginatorIdentifier;
@property (retain, nonatomic) NSString *originatorIdentifier;
@property (nonatomic, readonly) _Bool hasState;
@property (retain, nonatomic) GEOSharedNavState *state;
@property (nonatomic) _Bool hasLastUpdateTimestamp;
@property (nonatomic) double lastUpdateTimestamp;
@property (nonatomic, readonly) _Bool hasFromID;
@property (retain, nonatomic) NSString *fromID;
@property (retain, nonatomic) NSMutableArray *minimalStrategyIdentifiers;
@property (retain, nonatomic) NSMutableArray *liveStrategyIdentifiers;
@property (retain, nonatomic) NSMutableArray *messageStrategyIdentifiers;
@property (nonatomic, readonly) _Bool hasReceivingHandle;
@property (retain, nonatomic) NSString *receivingHandle;
@property (nonatomic, readonly) _Bool hasReceivingAccountIdentifier;
@property (retain, nonatomic) NSString *receivingAccountIdentifier;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)groupStorageWithIdentifier:(id)arg1 originator:(id)arg2 receivingHandle:(id)arg3 receivingAccountIdentifier:(id)arg4;
+ (Class)minimalStrategyIdentifierType;
+ (Class)liveStrategyIdentifierType;
+ (Class)messageStrategyIdentifierType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)updateWithState:(id)arg1;
- (unsigned long long)minimalStrategyIdentifiersCount;
- (unsigned long long)liveStrategyIdentifiersCount;
- (unsigned long long)messageStrategyIdentifiersCount;
- (void)addMinimalStrategyIdentifier:(id)arg1;
- (void)addLiveStrategyIdentifier:(id)arg1;
- (void)addMessageStrategyIdentifier:(id)arg1;
- (void)clearMinimalStrategyIdentifiers;
- (id)minimalStrategyIdentifierAtIndex:(unsigned long long)arg1;
- (void)clearLiveStrategyIdentifiers;
- (id)liveStrategyIdentifierAtIndex:(unsigned long long)arg1;
- (void)clearMessageStrategyIdentifiers;
- (id)messageStrategyIdentifierAtIndex:(unsigned long long)arg1;

@end
