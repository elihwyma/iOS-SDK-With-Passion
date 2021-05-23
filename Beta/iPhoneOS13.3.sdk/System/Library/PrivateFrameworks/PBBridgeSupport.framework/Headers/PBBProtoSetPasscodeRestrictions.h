/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface PBBProtoSetPasscodeRestrictions : PBCodable

{
    NSData *_restrictions;
    _Bool _wristDetectionDisabled;
    struct {
        unsigned int wristDetectionDisabled:1;
    } _has;
}

@property (retain, nonatomic) NSData *restrictions;
@property (nonatomic) _Bool hasWristDetectionDisabled;
@property (nonatomic) _Bool wristDetectionDisabled;

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
