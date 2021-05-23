/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class NSData, NSString;

@interface SYErrorInfo : PBCodable

{
    int _code;
    NSString *_domain;
    NSData *_userInfo;
}

@property (retain, nonatomic) NSString *domain;
@property (nonatomic) int code;
@property (nonatomic, readonly) _Bool hasUserInfo;
@property (retain, nonatomic) NSData *userInfo;

+ (void)initialize;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)_usefulDescription;

@end
