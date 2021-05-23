/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPRequestedFields : PBCodable

{
    NSMutableArray *_fields;
    NSMutableArray *_listFields;
}

@property (retain, nonatomic) NSMutableArray *fields;
@property (retain, nonatomic) NSMutableArray *listFields;

+ (Class)fieldsType;
+ (Class)listFieldType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addFields:(id)arg1;
- (unsigned long long)fieldsCount;
- (void)clearFields;
- (id)fieldsAtIndex:(unsigned long long)arg1;
- (void)addListField:(id)arg1;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (unsigned long long)listFieldsCount;
- (void)clearListFields;
- (id)listFieldAtIndex:(unsigned long long)arg1;

@end
