/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTransitAppLaunchFeedbackCollection : PBCodable

{
    PBDataReader *_reader;
    NSString *_bundleIdentifier;
    GEOLatLng *_destination;
    GEOLatLng *_source;
    double _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    CDStruct_ea2c3af7 _flags;
}

@property (nonatomic, readonly) _Bool hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, readonly) _Bool hasSource;
@property (retain, nonatomic) GEOLatLng *source;
@property (nonatomic, readonly) _Bool hasDestination;
@property (retain, nonatomic) GEOLatLng *destination;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;

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
- (void)_readSource;
- (void)readAll:(_Bool)arg1;
- (void)_readDestination;
- (void)_readBundleIdentifier;

@end
