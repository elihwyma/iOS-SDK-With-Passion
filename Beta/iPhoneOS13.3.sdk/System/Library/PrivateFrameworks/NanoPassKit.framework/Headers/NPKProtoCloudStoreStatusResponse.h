/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NPKProtoCloudStoreStatusResponse : PBCodable

{
    NSData *_accountInfoData;
    NSData *_errorData;
    _Bool _cloudStoreIsSetup;
    _Bool _pending;
    struct {
        unsigned int cloudStoreIsSetup:1;
        unsigned int pending:1;
    } _has;
}

@property (nonatomic) _Bool hasPending;
@property (nonatomic) _Bool pending;
@property (nonatomic, readonly) _Bool hasAccountInfoData;
@property (retain, nonatomic) NSData *accountInfoData;
@property (nonatomic) _Bool hasCloudStoreIsSetup;
@property (nonatomic) _Bool cloudStoreIsSetup;
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
