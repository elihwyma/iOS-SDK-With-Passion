/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSData, NSString;

@interface HDCodableClinicalAccount : PBCodable <Swift>

{
    double _creationDate;
    double _lastFetchDate;
    double _lastFullFetchDate;
    double _modificationDate;
    NSString *_accountIdentifier;
    NSString *_gatewayExternalID;
    NSString *_patientHash;
    NSData *_syncIdentifier;
    _Bool _userEnabled;
    struct {
        unsigned int creationDate:1;
        unsigned int lastFetchDate:1;
        unsigned int lastFullFetchDate:1;
        unsigned int modificationDate:1;
        unsigned int userEnabled:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasGatewayExternalID;
@property (retain, nonatomic) NSString *gatewayExternalID;
@property (nonatomic) _Bool hasUserEnabled;
@property (nonatomic) _Bool userEnabled;
@property (nonatomic) _Bool hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) _Bool hasModificationDate;
@property (nonatomic) double modificationDate;
@property (nonatomic) _Bool hasLastFetchDate;
@property (nonatomic) double lastFetchDate;
@property (nonatomic, readonly) _Bool hasSyncIdentifier;
@property (retain, nonatomic) NSData *syncIdentifier;
@property (nonatomic) _Bool hasLastFullFetchDate;
@property (nonatomic) double lastFullFetchDate;
@property (nonatomic, readonly) _Bool hasAccountIdentifier;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (nonatomic, readonly) _Bool hasPatientHash;
@property (retain, nonatomic) NSString *patientHash;

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
