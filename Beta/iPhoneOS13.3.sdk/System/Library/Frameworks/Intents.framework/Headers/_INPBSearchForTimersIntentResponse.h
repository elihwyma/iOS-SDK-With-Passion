/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface _INPBSearchForTimersIntentResponse : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSArray *_matchedTimers;
    NSArray *_timers;
    NSArray *_unmatchedTimers;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *matchedTimers;
@property (nonatomic, readonly) unsigned long long matchedTimersCount;
@property (copy, nonatomic) NSArray *timers;
@property (nonatomic, readonly) unsigned long long timersCount;
@property (copy, nonatomic) NSArray *unmatchedTimers;
@property (nonatomic, readonly) unsigned long long unmatchedTimersCount;

+ (_Bool)supportsSecureCoding;
+ (Class)matchedTimersType;
+ (Class)timersType;
+ (Class)unmatchedTimersType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearTimers;
- (void)clearMatchedTimers;
- (void)addMatchedTimers:(id)arg1;
- (id)matchedTimersAtIndex:(unsigned long long)arg1;
- (void)addTimers:(id)arg1;
- (id)timersAtIndex:(unsigned long long)arg1;
- (void)clearUnmatchedTimers;
- (void)addUnmatchedTimers:(id)arg1;
- (id)unmatchedTimersAtIndex:(unsigned long long)arg1;

@end
