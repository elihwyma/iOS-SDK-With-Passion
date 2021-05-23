/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBDateTimeRange, _INPBHomeUserTask, _INPBIntentMetadata;

@interface _INPBControlHomeIntent : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSArray *_contents;
    NSArray *_filters;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDateTimeRange *_time;
    _INPBHomeUserTask *_userTask;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *contents;
@property (nonatomic, readonly) unsigned long long contentsCount;
@property (copy, nonatomic) NSArray *filters;
@property (nonatomic, readonly) unsigned long long filtersCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBDateTimeRange *time;
@property (nonatomic, readonly) _Bool hasTime;
@property (retain, nonatomic) _INPBHomeUserTask *userTask;
@property (nonatomic, readonly) _Bool hasUserTask;

+ (_Bool)supportsSecureCoding;
+ (Class)contentsType;
+ (Class)filtersType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearFilters;
- (void)clearContents;
- (void)addContents:(id)arg1;
- (id)contentsAtIndex:(unsigned long long)arg1;
- (void)addFilters:(id)arg1;
- (id)filtersAtIndex:(unsigned long long)arg1;

@end
