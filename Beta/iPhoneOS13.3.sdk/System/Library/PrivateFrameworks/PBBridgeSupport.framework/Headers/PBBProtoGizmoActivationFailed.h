/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PBBProtoGizmoActivationFailed : PBCodable

{
    NSString *_failureDescription;
}

@property (retain, nonatomic) NSString *failureDescription;

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
