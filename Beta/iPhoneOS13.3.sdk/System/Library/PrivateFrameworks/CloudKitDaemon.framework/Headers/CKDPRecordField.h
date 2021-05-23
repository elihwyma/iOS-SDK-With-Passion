/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecordFieldIdentifier, CKDPRecordFieldValue, NSMutableArray;

@interface CKDPRecordField : PBCodable

{
    NSMutableArray *_actions;
    CKDPRecordFieldIdentifier *_identifier;
    CKDPRecordFieldValue *_value;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *identifier;
@property (nonatomic, readonly) _Bool hasValue;
@property (retain, nonatomic) CKDPRecordFieldValue *value;
@property (retain, nonatomic) NSMutableArray *actions;

+ (Class)actionType;
+ (id)emptyFieldWithKey:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addAction:(id)arg1;
- (unsigned long long)actionsCount;
- (void)clearActions;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (id)actionAtIndex:(unsigned long long)arg1;

@end
