/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPIdentifier, CKDPRecordZoneIdentifier, CKDPSubscriptionNotification, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPSubscription : PBCodable

{
    struct {
        int *list;
        unsigned long long count;
        unsigned long long size;
    } _mutationTriggers;
    int _evaluationType;
    NSMutableArray *_filters;
    CKDPIdentifier *_identifier;
    CKDPSubscriptionNotification *_notification;
    int _owner;
    NSMutableArray *_recordTypes;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
    _Bool _fireOnce;
    struct {
        unsigned int evaluationType:1;
        unsigned int owner:1;
        unsigned int fireOnce:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) CKDPIdentifier *identifier;
@property (nonatomic) _Bool hasEvaluationType;
@property (nonatomic) int evaluationType;
@property (nonatomic) _Bool hasOwner;
@property (nonatomic) int owner;
@property (nonatomic, readonly) unsigned long long mutationTriggersCount;
@property (nonatomic, readonly) int *mutationTriggers;
@property (nonatomic, readonly) _Bool hasNotification;
@property (retain, nonatomic) CKDPSubscriptionNotification *notification;
@property (retain, nonatomic) NSMutableArray *filters;
@property (retain, nonatomic) NSMutableArray *recordTypes;
@property (nonatomic) _Bool hasFireOnce;
@property (nonatomic) _Bool fireOnce;
@property (nonatomic, readonly) _Bool hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;

+ (Class)filtersType;
+ (Class)recordTypesType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)filtersCount;
- (void)clearFilters;
- (void)addFilters:(id)arg1;
- (id)filtersAtIndex:(unsigned long long)arg1;
- (void)addRecordTypes:(id)arg1;
- (void)clearMutationTriggers;
- (int)mutationTriggersAtIndex:(unsigned long long)arg1;
- (void)addMutationTriggers:(int)arg1;
- (unsigned long long)recordTypesCount;
- (void)clearRecordTypes;
- (id)recordTypesAtIndex:(unsigned long long)arg1;
- (id)evaluationTypeAsString:(int)arg1;
- (int)StringAsEvaluationType:(id)arg1;
- (id)ownerAsString:(int)arg1;
- (int)StringAsOwner:(id)arg1;
- (void)setMutationTriggers:(int *)arg1 count:(unsigned long long)arg2;
- (id)mutationTriggersAsString:(int)arg1;
- (int)StringAsMutationTriggers:(id)arg1;

@end
