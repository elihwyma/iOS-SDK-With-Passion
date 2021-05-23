/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTimezone, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMessageLink : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_hoursOfOperations;
    NSString *_messageId;
    NSString *_messageUrl;
    NSString *_navBackgroundColor;
    NSString *_navTintColor;
    GEOTimezone *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _responseTime;
    _Bool _isVerified;
    struct {
        unsigned int has_responseTime:1;
        unsigned int has_isVerified:1;
        unsigned int read_unknownFields:1;
        unsigned int read_hoursOfOperations:1;
        unsigned int read_messageId:1;
        unsigned int read_messageUrl:1;
        unsigned int read_navBackgroundColor:1;
        unsigned int read_navTintColor:1;
        unsigned int read_timezone:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_hoursOfOperations:1;
        unsigned int wrote_messageId:1;
        unsigned int wrote_messageUrl:1;
        unsigned int wrote_navBackgroundColor:1;
        unsigned int wrote_navTintColor:1;
        unsigned int wrote_timezone:1;
        unsigned int wrote_responseTime:1;
        unsigned int wrote_isVerified:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasMessageId;
@property (retain, nonatomic) NSString *messageId;
@property (nonatomic, readonly) _Bool hasMessageUrl;
@property (retain, nonatomic) NSString *messageUrl;
@property (nonatomic) _Bool hasResponseTime;
@property (nonatomic) int responseTime;
@property (retain, nonatomic) NSMutableArray *hoursOfOperations;
@property (nonatomic, readonly) _Bool hasTimezone;
@property (retain, nonatomic) GEOTimezone *timezone;
@property (nonatomic) _Bool hasIsVerified;
@property (nonatomic) _Bool isVerified;
@property (nonatomic, readonly) _Bool hasNavBackgroundColor;
@property (retain, nonatomic) NSString *navBackgroundColor;
@property (nonatomic, readonly) _Bool hasNavTintColor;
@property (retain, nonatomic) NSString *navTintColor;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)hoursOfOperationType;
+ (id)messageLinkForPlaceData:(id)arg1;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readMessageId;
- (void)_readMessageUrl;
- (void)_readHoursOfOperations;
- (void)_addNoFlagsHoursOfOperation:(id)arg1;
- (void)_readTimezone;
- (void)_readNavBackgroundColor;
- (void)_readNavTintColor;
- (unsigned long long)hoursOfOperationsCount;
- (void)clearHoursOfOperations;
- (id)hoursOfOperationAtIndex:(unsigned long long)arg1;
- (void)addHoursOfOperation:(id)arg1;
- (id)responseTimeAsString:(int)arg1;
- (int)StringAsResponseTime:(id)arg1;

@end
