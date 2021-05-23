/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKCDPError : PBCodable

{
    int _auxiliaryCode;
    NSString *_auxiliaryDomain;
    NSMutableArray *_auxiliaryUserInfos;
    int _code;
    NSString *_message;
    struct {
        unsigned int auxiliaryCode:1;
        unsigned int code:1;
    } _has;
}

@property (nonatomic) _Bool hasCode;
@property (nonatomic) int code;
@property (nonatomic, readonly) _Bool hasMessage;
@property (retain, nonatomic) NSString *message;
@property (nonatomic, readonly) _Bool hasAuxiliaryDomain;
@property (retain, nonatomic) NSString *auxiliaryDomain;
@property (nonatomic) _Bool hasAuxiliaryCode;
@property (nonatomic) int auxiliaryCode;
@property (retain, nonatomic) NSMutableArray *auxiliaryUserInfos;

+ (Class)auxiliaryUserInfoType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)codeAsString:(int)arg1;
- (int)StringAsCode:(id)arg1;
- (unsigned long long)auxiliaryUserInfosCount;
- (void)addAuxiliaryUserInfo:(id)arg1;
- (void)clearAuxiliaryUserInfos;
- (id)auxiliaryUserInfoAtIndex:(unsigned long long)arg1;

@end
