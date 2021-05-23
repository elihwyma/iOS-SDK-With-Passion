/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface FCCKPConfigurationFieldValue : PBCodable <Swift>

{
    double _doubleValue;
    long long _longValue;
    NSData *_bytesValue;
    NSMutableArray *_fieldValues;
    NSMutableArray *_listValues;
    NSString *_stringValue;
    int _type;
    _Bool _boolValue;
    struct {
        unsigned int doubleValue:1;
        unsigned int longValue:1;
        unsigned int type:1;
        unsigned int boolValue:1;
    } _has;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (nonatomic) _Bool hasBoolValue;
@property (nonatomic) _Bool boolValue;
@property (nonatomic) _Bool hasLongValue;
@property (nonatomic) long long longValue;
@property (nonatomic) _Bool hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic, readonly) _Bool hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSMutableArray *fieldValues;
@property (retain, nonatomic) NSMutableArray *listValues;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addFieldValues:(id)arg1;
- (void)addListValues:(id)arg1;
- (unsigned long long)fieldValuesCount;
- (void)clearFieldValues;
- (id)fieldValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)listValuesCount;
- (void)clearListValues;
- (id)listValuesAtIndex:(unsigned long long)arg1;

@end
