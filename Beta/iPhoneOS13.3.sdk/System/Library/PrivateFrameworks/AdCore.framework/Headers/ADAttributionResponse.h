/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface ADAttributionResponse : PBCodable

{
    NSMutableArray *_versionedAttributionDetails;
}

@property (retain, nonatomic) NSMutableArray *versionedAttributionDetails;

+ (id)options;
+ (Class)versionedAttributionDetailsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addVersionedAttributionDetails:(id)arg1;
- (unsigned long long)versionedAttributionDetailsCount;
- (void)clearVersionedAttributionDetails;
- (id)versionedAttributionDetailsAtIndex:(unsigned long long)arg1;

@end
