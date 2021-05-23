/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface _INPBActivateCarSignalIntentResponse : PBCodable <Swift>

{
    CDStruct_95bda58d _signals;
    struct _has;
    _Bool __encodeLegacyGloryData;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int *signals;
@property (nonatomic, readonly) unsigned long long signalsCount;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearSignals;
- (void)addSignals:(int)arg1;
- (int)signalsAtIndex:(unsigned long long)arg1;
- (void)setSignals:(int *)arg1 count:(unsigned long long)arg2;
- (id)signalsAsString:(int)arg1;
- (int)StringAsSignals:(id)arg1;

@end
