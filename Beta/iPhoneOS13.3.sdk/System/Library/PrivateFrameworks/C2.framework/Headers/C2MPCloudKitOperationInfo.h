/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface C2MPCloudKitOperationInfo : PBCodable

{
    unsigned int _operationGroupIndex;
    NSString *_operationId;
    NSString *_operationType;
    _Bool _operationTriggered;
    struct {
        unsigned int operationGroupIndex:1;
        unsigned int operationTriggered:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasOperationId;
@property (retain, nonatomic) NSString *operationId;
@property (nonatomic, readonly) _Bool hasOperationType;
@property (retain, nonatomic) NSString *operationType;
@property (nonatomic) _Bool hasOperationTriggered;
@property (nonatomic) _Bool operationTriggered;
@property (nonatomic) _Bool hasOperationGroupIndex;
@property (nonatomic) unsigned int operationGroupIndex;

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
