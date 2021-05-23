/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSData, NSString;

@interface HDCodableFHIRResource : PBCodable <Swift>

{
    long long _extractionHints;
    long long _originVersionMajor;
    long long _originVersionMinor;
    long long _originVersionPatch;
    double _receivedDate;
    NSString *_accountIdentifier;
    NSString *_fhirVersion;
    NSString *_gatewayExternalID;
    NSString *_originVersionBuild;
    NSData *_rawContent;
    NSString *_receivedDateTimeZoneName;
    NSString *_resourceID;
    NSString *_resourceType;
    NSString *_sourceURL;
    struct {
        unsigned int extractionHints:1;
        unsigned int originVersionMajor:1;
        unsigned int originVersionMinor:1;
        unsigned int originVersionPatch:1;
        unsigned int receivedDate:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasGatewayExternalID;
@property (retain, nonatomic) NSString *gatewayExternalID;
@property (nonatomic, readonly) _Bool hasResourceID;
@property (retain, nonatomic) NSString *resourceID;
@property (nonatomic, readonly) _Bool hasRawContent;
@property (retain, nonatomic) NSData *rawContent;
@property (nonatomic) _Bool hasReceivedDate;
@property (nonatomic) double receivedDate;
@property (nonatomic, readonly) _Bool hasResourceType;
@property (retain, nonatomic) NSString *resourceType;
@property (nonatomic, readonly) _Bool hasFhirVersion;
@property (retain, nonatomic) NSString *fhirVersion;
@property (nonatomic, readonly) _Bool hasReceivedDateTimeZoneName;
@property (retain, nonatomic) NSString *receivedDateTimeZoneName;
@property (nonatomic, readonly) _Bool hasSourceURL;
@property (retain, nonatomic) NSString *sourceURL;
@property (nonatomic) _Bool hasExtractionHints;
@property (nonatomic) long long extractionHints;
@property (nonatomic, readonly) _Bool hasAccountIdentifier;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (nonatomic) _Bool hasOriginVersionMajor;
@property (nonatomic) long long originVersionMajor;
@property (nonatomic) _Bool hasOriginVersionMinor;
@property (nonatomic) long long originVersionMinor;
@property (nonatomic) _Bool hasOriginVersionPatch;
@property (nonatomic) long long originVersionPatch;
@property (nonatomic, readonly) _Bool hasOriginVersionBuild;
@property (retain, nonatomic) NSString *originVersionBuild;

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
