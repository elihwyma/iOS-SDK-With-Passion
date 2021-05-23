/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PPPBFeedbackMetadata : PBCodable

{
    unsigned long long _unixTimestampSec;
    NSString *_clientBundleId;
    NSString *_clientIdentifier;
    NSString *_mappingId;
    _Bool _isMapped;
    struct {
        unsigned int unixTimestampSec:1;
        unsigned int isMapped:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasClientBundleId;
@property (retain, nonatomic) NSString *clientBundleId;
@property (nonatomic, readonly) _Bool hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic, readonly) _Bool hasMappingId;
@property (retain, nonatomic) NSString *mappingId;
@property (nonatomic) _Bool hasUnixTimestampSec;
@property (nonatomic) unsigned long long unixTimestampSec;
@property (nonatomic) _Bool hasIsMapped;
@property (nonatomic) _Bool isMapped;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
