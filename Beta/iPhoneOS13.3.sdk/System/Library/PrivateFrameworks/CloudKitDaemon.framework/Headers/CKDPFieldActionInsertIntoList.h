/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPListPosition, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPFieldActionInsertIntoList : PBCodable

{
    CKDPListPosition *_position;
    NSMutableArray *_values;
    _Bool _insertAfter;
    struct {
        unsigned int insertAfter:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasPosition;
@property (retain, nonatomic) CKDPListPosition *position;
@property (nonatomic) _Bool hasInsertAfter;
@property (nonatomic) _Bool insertAfter;
@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valueType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addValue:(id)arg1;
- (unsigned long long)valuesCount;
- (void)clearValues;

@end
