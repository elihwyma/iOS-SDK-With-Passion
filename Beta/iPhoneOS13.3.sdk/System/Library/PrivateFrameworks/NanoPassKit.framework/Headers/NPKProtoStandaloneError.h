/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NPKProtoStandaloneError : PBCodable

{
    long long _code;
    NSString *_domain;
    NSMutableArray *_userInfos;
}

@property (nonatomic, readonly) _Bool hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) long long code;
@property (retain, nonatomic) NSMutableArray *userInfos;

+ (Class)userInfosType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)userInfosCount;
- (void)clearUserInfos;
- (void)addUserInfos:(id)arg1;
- (id)userInfosAtIndex:(unsigned long long)arg1;

@end
