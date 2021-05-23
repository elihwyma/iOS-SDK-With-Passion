/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOMapsLaunchFeedbackCollection : PBCodable

{
    PBDataReader *_reader;
    struct GEOSessionID _sessionId;
    NSString *_sourceAppBundleId;
    NSString *_uriScheme;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_sessionId:1;
        unsigned int read_sourceAppBundleId:1;
        unsigned int read_uriScheme:1;
        unsigned int wrote_sessionId:1;
        unsigned int wrote_sourceAppBundleId:1;
        unsigned int wrote_uriScheme:1;
    } _flags;
}

@property (nonatomic) _Bool hasSessionId;
@property (nonatomic) struct GEOSessionID sessionId;
@property (nonatomic, readonly) _Bool hasSourceAppBundleId;
@property (retain, nonatomic) NSString *sourceAppBundleId;
@property (nonatomic, readonly) _Bool hasUriScheme;
@property (retain, nonatomic) NSString *uriScheme;

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
- (void)_readSourceAppBundleId;
- (void)_readUriScheme;

@end
