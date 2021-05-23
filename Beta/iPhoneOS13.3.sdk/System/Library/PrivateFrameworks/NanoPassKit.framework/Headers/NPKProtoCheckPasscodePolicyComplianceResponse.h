/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NPKProtoCheckPasscodePolicyComplianceResponse : PBCodable

{
    NSData *_errorData;
    _Bool _passcodeMeetsPolicy;
    struct {
        unsigned int passcodeMeetsPolicy:1;
    } _has;
}

@property (nonatomic) _Bool hasPasscodeMeetsPolicy;
@property (nonatomic) _Bool passcodeMeetsPolicy;
@property (nonatomic, readonly) _Bool hasErrorData;
@property (retain, nonatomic) NSData *errorData;

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
