/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <ProtocolBuffer/PBCodable.h>

@class ACProtobufDate, ACProtobufURL, ACProtobufUUID, ACProtobufVariableValueDictionary, ACProtobufVariableValueList, NSData, NSString;

__attribute__((visibility("hidden")))
@interface ACProtobufVariableValue : PBCodable

{
    double _doubleValue;
    long long _integerValue;
    unsigned long long _unsignedIntegerValue;
    ACProtobufVariableValueList *_arrayValue;
    NSData *_dataValue;
    ACProtobufDate *_dateValue;
    ACProtobufVariableValueDictionary *_dictionaryValue;
    ACProtobufVariableValueList *_setValue;
    NSString *_stringValue;
    ACProtobufURL *_urlValue;
    ACProtobufUUID *_uuidValue;
    struct {
        unsigned int doubleValue:1;
        unsigned int integerValue:1;
        unsigned int unsignedIntegerValue:1;
    } _has;
}

@property (retain, nonatomic) id object;
@property (nonatomic, readonly) _Bool hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) _Bool hasIntegerValue;
@property (nonatomic) long long integerValue;
@property (nonatomic) _Bool hasUnsignedIntegerValue;
@property (nonatomic) unsigned long long unsignedIntegerValue;
@property (nonatomic) _Bool hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic, readonly) _Bool hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (nonatomic, readonly) _Bool hasUuidValue;
@property (retain, nonatomic) ACProtobufUUID *uuidValue;
@property (nonatomic, readonly) _Bool hasDateValue;
@property (retain, nonatomic) ACProtobufDate *dateValue;
@property (nonatomic, readonly) _Bool hasUrlValue;
@property (retain, nonatomic) ACProtobufURL *urlValue;
@property (nonatomic, readonly) _Bool hasArrayValue;
@property (retain, nonatomic) ACProtobufVariableValueList *arrayValue;
@property (nonatomic, readonly) _Bool hasSetValue;
@property (retain, nonatomic) ACProtobufVariableValueList *setValue;
@property (nonatomic, readonly) _Bool hasDictionaryValue;
@property (retain, nonatomic) ACProtobufVariableValueDictionary *dictionaryValue;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)_setObject:(id)arg1;
- (id)initWithObjectValue:(id)arg1;

@end
