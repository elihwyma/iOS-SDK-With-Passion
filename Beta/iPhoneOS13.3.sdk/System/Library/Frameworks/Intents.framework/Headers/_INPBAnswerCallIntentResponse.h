/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface _INPBAnswerCallIntentResponse : PBCodable <Swift>

{
    CDStruct_bcb1eac0 _has;
    _Bool __encodeLegacyGloryData;
    int _statusCode;
    NSArray *_callRecords;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *callRecords;
@property (nonatomic, readonly) unsigned long long callRecordsCount;
@property (nonatomic) int statusCode;
@property (nonatomic) _Bool hasStatusCode;

+ (_Bool)supportsSecureCoding;
+ (Class)callRecordsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
- (int)StringAsStatusCode:(id)arg1;
- (void)clearCallRecords;
- (void)addCallRecords:(id)arg1;
- (id)callRecordsAtIndex:(unsigned long long)arg1;

@end
