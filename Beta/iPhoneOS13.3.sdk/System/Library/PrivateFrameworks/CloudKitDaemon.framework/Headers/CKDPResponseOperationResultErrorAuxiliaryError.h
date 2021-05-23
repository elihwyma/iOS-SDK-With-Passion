/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface CKDPResponseOperationResultErrorAuxiliaryError : PBCodable

{
    int _code;
    NSString *_domain;
    NSMutableArray *_userInfos;
    CDStruct_9ab06576 _has;
}

@property (nonatomic, readonly) _Bool hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) _Bool hasCode;
@property (nonatomic) int code;
@property (retain, nonatomic) NSMutableArray *userInfos;

+ (Class)userInfoType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addUserInfo:(id)arg1;
- (id)userInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)userInfosCount;
- (void)clearUserInfos;

@end
