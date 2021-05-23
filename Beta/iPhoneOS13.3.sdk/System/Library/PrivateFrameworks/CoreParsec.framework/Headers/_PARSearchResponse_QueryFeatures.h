/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, _PARQueryFeatures_Stats;

__attribute__((visibility("hidden")))
@interface _PARSearchResponse_QueryFeatures : PBCodable

{
    _Bool _topDown;
    NSString *_prefix;
    NSString *_query;
    _PARQueryFeatures_Stats *_stats;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) _PARQueryFeatures_Stats *stats;
@property (nonatomic) _Bool topDown;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
