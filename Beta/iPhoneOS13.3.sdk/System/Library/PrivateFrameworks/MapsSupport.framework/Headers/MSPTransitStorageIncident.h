/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSDate, NSMutableArray, NSString, PBUnknownFields;

@interface MSPTransitStorageIncident : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    NSMutableArray *_affectedEntities;
    unsigned int _creationDatetime;
    unsigned int _endDatetime;
    NSString *_fullDescription;
    int _iconType;
    unsigned int _lastUpdatedDatetime;
    NSString *_messageForNonRoutable;
    NSString *_messageForRoutePlanning;
    NSString *_messageForRouteStepping;
    unsigned int _startDatetime;
    NSString *_summary;
    NSString *_title;
    _Bool _blockingIncident;
    struct {
        unsigned int muid:1;
        unsigned int creationDatetime:1;
        unsigned int endDatetime:1;
        unsigned int iconType:1;
        unsigned int lastUpdatedDatetime:1;
        unsigned int startDatetime:1;
        unsigned int blockingIncident:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, readonly) NSString *fullDescription;
@property (nonatomic, readonly) NSString *messageForRoutePlanning;
@property (nonatomic, readonly) NSString *messageForRouteStepping;
@property (nonatomic, readonly) NSString *messageForNonRoutable;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) int iconType;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *lastUpdated;
@property (nonatomic, readonly, getter=isBlockingIncident) _Bool blockingIncident;
@property (nonatomic, readonly) NSArray *affectedEntities;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasSummary;
@property (retain, nonatomic) NSString *summary;
@property (nonatomic, readonly) _Bool hasFullDescription;
@property (retain, nonatomic) NSString *fullDescription;
@property (nonatomic, readonly) _Bool hasMessageForRoutePlanning;
@property (retain, nonatomic) NSString *messageForRoutePlanning;
@property (nonatomic, readonly) _Bool hasMessageForRouteStepping;
@property (retain, nonatomic) NSString *messageForRouteStepping;
@property (nonatomic, readonly) _Bool hasMessageForNonRoutable;
@property (retain, nonatomic) NSString *messageForNonRoutable;
@property (nonatomic) _Bool hasStartDatetime;
@property (nonatomic) unsigned int startDatetime;
@property (nonatomic) _Bool hasEndDatetime;
@property (nonatomic) unsigned int endDatetime;
@property (nonatomic) _Bool hasIconType;
@property (nonatomic) int iconType;
@property (nonatomic) _Bool hasCreationDatetime;
@property (nonatomic) unsigned int creationDatetime;
@property (nonatomic) _Bool hasLastUpdatedDatetime;
@property (nonatomic) unsigned int lastUpdatedDatetime;
@property (nonatomic) _Bool hasBlockingIncident;
@property (nonatomic) _Bool blockingIncident;
@property (retain, nonatomic) NSMutableArray *affectedEntities;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)affectedEntitiesType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)initWithIncident:(id)arg1;
- (id)iconTypeAsString:(int)arg1;
- (int)StringAsIconType:(id)arg1;
- (void)addAffectedEntities:(id)arg1;
- (unsigned long long)affectedEntitiesCount;
- (void)clearAffectedEntities;
- (id)affectedEntitiesAtIndex:(unsigned long long)arg1;

@end
