/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBString;

@interface _INPBActivity : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSArray *_activityDescriptors;
    _INPBString *_activityType;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *activityDescriptors;
@property (nonatomic, readonly) unsigned long long activityDescriptorsCount;
@property (retain, nonatomic) _INPBString *activityType;
@property (nonatomic, readonly) _Bool hasActivityType;

+ (_Bool)supportsSecureCoding;
+ (Class)activityDescriptorsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearActivityDescriptors;
- (void)addActivityDescriptors:(id)arg1;
- (id)activityDescriptorsAtIndex:(unsigned long long)arg1;

@end
