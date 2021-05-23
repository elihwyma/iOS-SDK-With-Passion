/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKCDPErrorUserInfoValue : PBCodable

{
    double _doubleValue;
    long long _int64Value;
    NSData *_bytesValue;
    NSString *_stringValue;
    _Bool _boolValue;
    CDStruct_f7459c01 _has;
}

@property (nonatomic) _Bool hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) _Bool hasInt64Value;
@property (nonatomic) long long int64Value;
@property (nonatomic) _Bool hasBoolValue;
@property (nonatomic) _Bool boolValue;
@property (nonatomic, readonly) _Bool hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic, readonly) _Bool hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;

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
