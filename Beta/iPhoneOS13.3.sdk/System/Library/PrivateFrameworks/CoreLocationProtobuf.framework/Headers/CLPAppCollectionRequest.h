/*
 Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

#import <PBRequest.h>

@class CLPMeta, NSData, NSMutableArray;

@interface CLPAppCollectionRequest : PBRequest

{
    NSMutableArray *_appLocations;
    CLPMeta *_meta;
    NSData *_signature;
}

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *appLocations;
@property (nonatomic, readonly) _Bool hasSignature;
@property (retain, nonatomic) NSData *signature;

+ (Class)appLocationType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)addAppLocation:(id)arg1;
- (unsigned long long)appLocationsCount;
- (void)clearAppLocations;
- (id)appLocationAtIndex:(unsigned long long)arg1;

@end
