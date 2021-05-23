/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface _INPBDeleteTimerIntentResponse : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSArray *_deletedTimers;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *deletedTimers;
@property (nonatomic, readonly) unsigned long long deletedTimersCount;

+ (_Bool)supportsSecureCoding;
+ (Class)deletedTimersType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearDeletedTimers;
- (void)addDeletedTimers:(id)arg1;
- (id)deletedTimersAtIndex:(unsigned long long)arg1;

@end
