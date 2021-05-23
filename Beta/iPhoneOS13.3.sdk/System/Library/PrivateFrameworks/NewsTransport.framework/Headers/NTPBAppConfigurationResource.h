/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, NTPBDate;

@interface NTPBAppConfigurationResource : PBCodable

{
    long long _maxAge;
    NSString *_etag;
    NSData *_gzippedConfigurationData;
    NTPBDate *_lastFetchedDate;
    NTPBDate *_lastModifiedDate;
    NSString *_lastModifiedString;
    NSString *_resourceID;
    NSString *_sourceURL;
    struct {
        unsigned int maxAge:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasGzippedConfigurationData;
@property (retain, nonatomic) NSData *gzippedConfigurationData;
@property (nonatomic, readonly) _Bool hasSourceURL;
@property (retain, nonatomic) NSString *sourceURL;
@property (nonatomic, readonly) _Bool hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (nonatomic, readonly) _Bool hasLastFetchedDate;
@property (retain, nonatomic) NTPBDate *lastFetchedDate;
@property (nonatomic, readonly) _Bool hasLastModifiedDate;
@property (retain, nonatomic) NTPBDate *lastModifiedDate;
@property (nonatomic, readonly) _Bool hasLastModifiedString;
@property (retain, nonatomic) NSString *lastModifiedString;
@property (nonatomic) _Bool hasMaxAge;
@property (nonatomic) long long maxAge;
@property (nonatomic, readonly) _Bool hasResourceID;
@property (retain, nonatomic) NSString *resourceID;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
