/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSData, NSString;

@interface HDCodableFHIRResourceForAPI : PBCodable <Swift>

{
    double _lastUpdatedDate;
    NSData *_data;
    NSString *_identifier;
    NSString *_resourceType;
    NSString *_sourceURL;
    struct {
        unsigned int lastUpdatedDate:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasResourceType;
@property (retain, nonatomic) NSString *resourceType;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasData;
@property (retain, nonatomic) NSData *data;
@property (nonatomic, readonly) _Bool hasSourceURL;
@property (retain, nonatomic) NSString *sourceURL;
@property (nonatomic) _Bool hasLastUpdatedDate;
@property (nonatomic) double lastUpdatedDate;

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
