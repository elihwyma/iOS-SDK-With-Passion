/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBString;

@interface _INPBEvent : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSArray *_eventDescriptors;
    _INPBString *_eventType;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *eventDescriptors;
@property (nonatomic, readonly) unsigned long long eventDescriptorsCount;
@property (retain, nonatomic) _INPBString *eventType;
@property (nonatomic, readonly) _Bool hasEventType;

+ (_Bool)supportsSecureCoding;
+ (Class)eventDescriptorsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearEventDescriptors;
- (void)addEventDescriptors:(id)arg1;
- (id)eventDescriptorsAtIndex:(unsigned long long)arg1;

@end
