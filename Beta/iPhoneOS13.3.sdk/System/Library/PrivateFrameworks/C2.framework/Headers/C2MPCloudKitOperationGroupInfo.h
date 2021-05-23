/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface C2MPCloudKitOperationGroupInfo : PBCodable

{
    NSString *_operationGroupId;
    NSString *_operationGroupName;
    _Bool _operationGroupTriggered;
    struct {
        unsigned int operationGroupTriggered:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasOperationGroupId;
@property (retain, nonatomic) NSString *operationGroupId;
@property (nonatomic, readonly) _Bool hasOperationGroupName;
@property (retain, nonatomic) NSString *operationGroupName;
@property (nonatomic) _Bool hasOperationGroupTriggered;
@property (nonatomic) _Bool operationGroupTriggered;

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
