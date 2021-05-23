/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEODataSetURLOverride : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_addressCorrectionInitURL;
    NSString *_addressCorrectionUpdateURL;
    NSString *_announcementsURL;
    NSString *_batchReverseGeocoderURL;
    NSString *_businessPortalBaseURL;
    NSString *_directionsURL;
    NSString *_dispatcherURL;
    NSString *_etaURL;
    NSString *_logMessageUsageURL;
    NSString *_problemCategoriesURL;
    NSString *_problemOptInURL;
    NSString *_problemStatusURL;
    NSString *_problemSubmissionURL;
    NSString *_simpleETAURL;
    NSString *_spatialLookupURL;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _dataSet;
    struct {
        unsigned int has_dataSet:1;
        unsigned int read_unknownFields:1;
        unsigned int read_addressCorrectionInitURL:1;
        unsigned int read_addressCorrectionUpdateURL:1;
        unsigned int read_announcementsURL:1;
        unsigned int read_batchReverseGeocoderURL:1;
        unsigned int read_businessPortalBaseURL:1;
        unsigned int read_directionsURL:1;
        unsigned int read_dispatcherURL:1;
        unsigned int read_etaURL:1;
        unsigned int read_logMessageUsageURL:1;
        unsigned int read_problemCategoriesURL:1;
        unsigned int read_problemOptInURL:1;
        unsigned int read_problemStatusURL:1;
        unsigned int read_problemSubmissionURL:1;
        unsigned int read_simpleETAURL:1;
        unsigned int read_spatialLookupURL:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addressCorrectionInitURL:1;
        unsigned int wrote_addressCorrectionUpdateURL:1;
        unsigned int wrote_announcementsURL:1;
        unsigned int wrote_batchReverseGeocoderURL:1;
        unsigned int wrote_businessPortalBaseURL:1;
        unsigned int wrote_directionsURL:1;
        unsigned int wrote_dispatcherURL:1;
        unsigned int wrote_etaURL:1;
        unsigned int wrote_logMessageUsageURL:1;
        unsigned int wrote_problemCategoriesURL:1;
        unsigned int wrote_problemOptInURL:1;
        unsigned int wrote_problemStatusURL:1;
        unsigned int wrote_problemSubmissionURL:1;
        unsigned int wrote_simpleETAURL:1;
        unsigned int wrote_spatialLookupURL:1;
        unsigned int wrote_dataSet:1;
    } _flags;
}

@property (nonatomic) _Bool hasDataSet;
@property (nonatomic) unsigned int dataSet;
@property (nonatomic, readonly) _Bool hasDirectionsURL;
@property (retain, nonatomic) NSString *directionsURL;
@property (nonatomic, readonly) _Bool hasEtaURL;
@property (retain, nonatomic) NSString *etaURL;
@property (nonatomic, readonly) _Bool hasBatchReverseGeocoderURL;
@property (retain, nonatomic) NSString *batchReverseGeocoderURL;
@property (nonatomic, readonly) _Bool hasSimpleETAURL;
@property (retain, nonatomic) NSString *simpleETAURL;
@property (nonatomic, readonly) _Bool hasAddressCorrectionInitURL;
@property (retain, nonatomic) NSString *addressCorrectionInitURL;
@property (nonatomic, readonly) _Bool hasAddressCorrectionUpdateURL;
@property (retain, nonatomic) NSString *addressCorrectionUpdateURL;
@property (nonatomic, readonly) _Bool hasProblemSubmissionURL;
@property (retain, nonatomic) NSString *problemSubmissionURL;
@property (nonatomic, readonly) _Bool hasProblemStatusURL;
@property (retain, nonatomic) NSString *problemStatusURL;
@property (nonatomic, readonly) _Bool hasProblemCategoriesURL;
@property (retain, nonatomic) NSString *problemCategoriesURL;
@property (nonatomic, readonly) _Bool hasAnnouncementsURL;
@property (retain, nonatomic) NSString *announcementsURL;
@property (nonatomic, readonly) _Bool hasDispatcherURL;
@property (retain, nonatomic) NSString *dispatcherURL;
@property (nonatomic, readonly) _Bool hasProblemOptInURL;
@property (retain, nonatomic) NSString *problemOptInURL;
@property (nonatomic, readonly) _Bool hasBusinessPortalBaseURL;
@property (retain, nonatomic) NSString *businessPortalBaseURL;
@property (nonatomic, readonly) _Bool hasLogMessageUsageURL;
@property (retain, nonatomic) NSString *logMessageUsageURL;
@property (nonatomic, readonly) _Bool hasSpatialLookupURL;
@property (retain, nonatomic) NSString *spatialLookupURL;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readDirectionsURL;
- (void)_readEtaURL;
- (void)_readBatchReverseGeocoderURL;
- (void)_readSimpleETAURL;
- (void)_readAddressCorrectionInitURL;
- (void)_readAddressCorrectionUpdateURL;
- (void)_readProblemSubmissionURL;
- (void)_readProblemStatusURL;
- (void)_readProblemCategoriesURL;
- (void)_readAnnouncementsURL;
- (void)_readDispatcherURL;
- (void)_readProblemOptInURL;
- (void)_readBusinessPortalBaseURL;
- (void)_readLogMessageUsageURL;
- (void)_readSpatialLookupURL;

@end
