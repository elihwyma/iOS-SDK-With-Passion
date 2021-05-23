/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

@interface LOGMSGEVENTLogMsgEventTableBookedSession : PBCodable

{
    PBDataReader *_reader;
    NSString *_bookedTableSessionId;
    NSMutableArray *_bookedTables;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_bookedTableSessionId:1;
        unsigned int read_bookedTables:1;
        unsigned int wrote_bookedTableSessionId:1;
        unsigned int wrote_bookedTables:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasBookedTableSessionId;
@property (retain, nonatomic) NSString *bookedTableSessionId;
@property (retain, nonatomic) NSMutableArray *bookedTables;

+ (_Bool)isValid:(id)arg1;
+ (Class)bookedTableType;

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
- (void)_readBookedTableSessionId;
- (void)_readBookedTables;
- (void)_addNoFlagsBookedTable:(id)arg1;
- (unsigned long long)bookedTablesCount;
- (void)clearBookedTables;
- (id)bookedTableAtIndex:(unsigned long long)arg1;
- (void)addBookedTable:(id)arg1;

@end
