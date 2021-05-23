/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceRequestOperationGroup : PBCodable

{
    long long _operationGroupQuantity;
    NSString *_operationGroupId;
    NSString *_operationGroupName;
    NSString *_operationId;
    struct {
        unsigned int operationGroupQuantity:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasOperationId;
@property (retain, nonatomic) NSString *operationId;
@property (nonatomic, readonly) _Bool hasOperationGroupId;
@property (retain, nonatomic) NSString *operationGroupId;
@property (nonatomic, readonly) _Bool hasOperationGroupName;
@property (retain, nonatomic) NSString *operationGroupName;
@property (nonatomic) _Bool hasOperationGroupQuantity;
@property (nonatomic) long long operationGroupQuantity;

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
