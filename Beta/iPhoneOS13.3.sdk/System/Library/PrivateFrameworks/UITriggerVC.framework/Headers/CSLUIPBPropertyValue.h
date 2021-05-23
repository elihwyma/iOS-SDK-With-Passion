/*
 Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

#import <ProtocolBuffer/PBCodable.h>

@class CSLUIPBNumber, CSLUIPBSize, NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CSLUIPBPropertyValue : PBCodable

{
    NSMutableArray *_arrayValues;
    NSData *_dataValue;
    CSLUIPBPropertyValue *_dictionaryKey;
    CSLUIPBNumber *_numberValue;
    CSLUIPBSize *_sizeValue;
    NSString *_stringValue;
    NSData *_uUIDValue;
}

@property (nonatomic, readonly) _Bool hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic, readonly) _Bool hasNumberValue;
@property (retain, nonatomic) CSLUIPBNumber *numberValue;
@property (nonatomic, readonly) _Bool hasUUIDValue;
@property (retain, nonatomic) NSData *uUIDValue;
@property (nonatomic, readonly) _Bool hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (nonatomic, readonly) _Bool hasSizeValue;
@property (retain, nonatomic) CSLUIPBSize *sizeValue;
@property (nonatomic, readonly) _Bool hasDictionaryKey;
@property (retain, nonatomic) CSLUIPBPropertyValue *dictionaryKey;
@property (retain, nonatomic) NSMutableArray *arrayValues;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addArrayValues:(id)arg1;
- (unsigned long long)arrayValuesCount;
- (void)clearArrayValues;
- (id)arrayValuesAtIndex:(unsigned long long)arg1;

@end
