/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPDetails, GEORPNotification, GEORPResolution, NSString, PBDataReader;

@interface GEORPProblemStatus : PBCodable

{
    PBDataReader *_reader;
    double _creationDate;
    GEORPDetails *_details;
    GEORPNotification *_notification;
    NSString *_problemId;
    GEORPResolution *_problemResolution;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _problemState;
    struct {
        unsigned int has_creationDate:1;
        unsigned int has_problemState:1;
        unsigned int read_details:1;
        unsigned int read_notification:1;
        unsigned int read_problemId:1;
        unsigned int read_problemResolution:1;
        unsigned int wrote_creationDate:1;
        unsigned int wrote_details:1;
        unsigned int wrote_notification:1;
        unsigned int wrote_problemId:1;
        unsigned int wrote_problemResolution:1;
        unsigned int wrote_problemState:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasProblemId;
@property (retain, nonatomic) NSString *problemId;
@property (nonatomic) _Bool hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) _Bool hasProblemState;
@property (nonatomic) int problemState;
@property (nonatomic, readonly) _Bool hasProblemResolution;
@property (retain, nonatomic) GEORPResolution *problemResolution;
@property (nonatomic, readonly) _Bool hasNotification;
@property (retain, nonatomic) GEORPNotification *notification;
@property (nonatomic, readonly) _Bool hasDetails;
@property (retain, nonatomic) GEORPDetails *details;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)_readDetails;
- (void)_readProblemId;
- (void)_readProblemResolution;
- (void)_readNotification;
- (id)problemStateAsString:(int)arg1;
- (int)StringAsProblemState:(id)arg1;

@end
