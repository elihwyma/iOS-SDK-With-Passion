/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface C2MPError : PBCodable

{
    long long _errorCode;
    NSString *_errorDescription;
    NSString *_errorDomain;
    C2MPError *_underlyingError;
    struct {
        unsigned int errorCode:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) long long errorCode;
@property (nonatomic, readonly) _Bool hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (nonatomic, readonly) _Bool hasUnderlyingError;
@property (retain, nonatomic) C2MPError *underlyingError;

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
