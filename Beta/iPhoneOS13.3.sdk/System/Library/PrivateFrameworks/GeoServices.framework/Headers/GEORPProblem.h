/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPProblemContext, GEORPProblemCorrections, PBDataReader;

@interface GEORPProblem : PBCodable

{
    PBDataReader *_reader;
    CDStruct_95bda58d _userPaths;
    GEORPProblemContext *_problemContext;
    GEORPProblemCorrections *_problemCorrections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _problemType;
    unsigned int _protocolVersion;
    struct {
        unsigned int has_problemType:1;
        unsigned int has_protocolVersion:1;
        unsigned int read_userPaths:1;
        unsigned int read_problemContext:1;
        unsigned int read_problemCorrections:1;
        unsigned int wrote_userPaths:1;
        unsigned int wrote_problemContext:1;
        unsigned int wrote_problemCorrections:1;
        unsigned int wrote_problemType:1;
        unsigned int wrote_protocolVersion:1;
    } _flags;
}

@property (nonatomic) _Bool hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic, readonly) unsigned long long userPathsCount;
@property (nonatomic, readonly) int *userPaths;
@property (nonatomic) _Bool hasProblemType;
@property (nonatomic) int problemType;
@property (nonatomic, readonly) _Bool hasProblemCorrections;
@property (retain, nonatomic) GEORPProblemCorrections *problemCorrections;
@property (nonatomic, readonly) _Bool hasProblemContext;
@property (retain, nonatomic) GEORPProblemContext *problemContext;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (void)dealloc;
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
- (void)_readUserPaths;
- (void)_addNoFlagsUserPath:(int)arg1;
- (void)_readProblemCorrections;
- (void)_readProblemContext;
- (void)clearUserPaths;
- (int)userPathAtIndex:(unsigned long long)arg1;
- (void)addUserPath:(int)arg1;
- (void)setUserPaths:(int *)arg1 count:(unsigned long long)arg2;
- (id)userPathsAsString:(int)arg1;
- (int)StringAsUserPaths:(id)arg1;
- (id)problemTypeAsString:(int)arg1;
- (int)StringAsProblemType:(id)arg1;
- (id)initWithMerchantIndustryCode:(long long)arg1 mapsIdentifier:(unsigned long long)arg2 merchantName:(id)arg3 merchantRawName:(id)arg4 merchantIndustryCategory:(id)arg5 merchantURL:(id)arg6 merchantFormattedAddress:(id)arg7 transactionTime:(double)arg8 transactionType:(id)arg9 transactionLocation:(CDStruct_c3b9c2ee)arg10;

@end
