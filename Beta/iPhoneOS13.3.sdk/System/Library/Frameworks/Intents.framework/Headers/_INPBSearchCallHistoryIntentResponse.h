/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface _INPBSearchCallHistoryIntentResponse : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSArray *_callRecords;
    NSString *_dateCreated;
    NSString *_status;
    NSString *_targetContact;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *callRecords;
@property (nonatomic, readonly) unsigned long long callRecordsCount;
@property (copy, nonatomic) NSString *dateCreated;
@property (nonatomic, readonly) _Bool hasDateCreated;
@property (copy, nonatomic) NSString *status;
@property (nonatomic, readonly) _Bool hasStatus;
@property (copy, nonatomic) NSString *targetContact;
@property (nonatomic, readonly) _Bool hasTargetContact;

+ (_Bool)supportsSecureCoding;
+ (Class)callRecordsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearCallRecords;
- (void)addCallRecords:(id)arg1;
- (id)callRecordsAtIndex:(unsigned long long)arg1;

@end
