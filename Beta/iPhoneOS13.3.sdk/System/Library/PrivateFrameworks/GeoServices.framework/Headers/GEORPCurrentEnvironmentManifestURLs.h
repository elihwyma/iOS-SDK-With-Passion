/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEORPCurrentEnvironmentManifestURLs : PBCodable

{
    PBDataReader *_reader;
    NSString *_environmentDisplayName;
    NSString *_environmentReleaseName;
    NSMutableArray *_urls;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_environmentDisplayName:1;
        unsigned int read_environmentReleaseName:1;
        unsigned int read_urls:1;
        unsigned int wrote_environmentDisplayName:1;
        unsigned int wrote_environmentReleaseName:1;
        unsigned int wrote_urls:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasEnvironmentDisplayName;
@property (retain, nonatomic) NSString *environmentDisplayName;
@property (nonatomic, readonly) _Bool hasEnvironmentReleaseName;
@property (retain, nonatomic) NSString *environmentReleaseName;
@property (retain, nonatomic) NSMutableArray *urls;

+ (_Bool)isValid:(id)arg1;
+ (Class)urlType;

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
- (void)_readEnvironmentDisplayName;
- (void)_readEnvironmentReleaseName;
- (void)_readUrls;
- (void)_addNoFlagsUrl:(id)arg1;
- (unsigned long long)urlsCount;
- (void)clearUrls;
- (id)urlAtIndex:(unsigned long long)arg1;
- (void)addUrl:(id)arg1;

@end
