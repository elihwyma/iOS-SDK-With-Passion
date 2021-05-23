/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PARSearchResponse_QuerySuggestion : PBCodable

{
    _Bool _previouslyEngaged;
    float _score;
    NSString *_suggestion;
    NSString *_query;
    NSData *_feedback;
    NSArray *_entities;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *suggestion;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSData *feedback;
@property (nonatomic) _Bool previouslyEngaged;
@property (nonatomic) float score;
@property (copy, nonatomic) NSArray *entities;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)clearEntities;
- (void)addEntities:(id)arg1;
- (id)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;

@end
