/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NPKProtoMarkAllAppletsForDeletionResponse : PBCodable

{
    NSData *_errorData;
    _Bool _pending;
    _Bool _success;
    CDStruct_5ee4970e _has;
}

@property (nonatomic) _Bool hasPending;
@property (nonatomic) _Bool pending;
@property (nonatomic) _Bool hasSuccess;
@property (nonatomic) _Bool success;
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
