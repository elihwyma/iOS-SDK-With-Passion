/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NSData, NSString;

@interface NRPBMigrationDeviceInfo : PBCodable <Swift>

{
    NSString *_advertisedName;
    NSData *_iD;
    NSString *_name;
}

@property (nonatomic, readonly) _Bool hasID;
@property (retain, nonatomic) NSData *iD;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasAdvertisedName;
@property (retain, nonatomic) NSString *advertisedName;

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
