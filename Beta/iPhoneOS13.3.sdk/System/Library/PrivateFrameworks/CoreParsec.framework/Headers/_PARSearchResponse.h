/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData, NSDictionary, NSString, _PARSearchResponse_Error, _PARSearchResponse_QueryFeatures;

__attribute__((visibility("hidden")))
@interface _PARSearchResponse : PBCodable

{
    int _status;
    float _completionScore;
    int _maxAgeSeconds;
    NSString *_prefix;
    NSString *_query;
    NSArray *_suggestions;
    NSData *_feedback;
    _PARSearchResponse_Error *_error;
    long long _millisecondDuration;
    NSString *_partialClientAddress;
    _PARSearchResponse_QueryFeatures *_queryFeatures;
    NSDictionary *_blenderFeaturesL3;
    NSArray *_corrections;
    NSArray *_results;
    NSArray *_sections;
    NSData *_legacyJSON;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSArray *suggestions;
@property (nonatomic) float completionScore;
@property (copy, nonatomic) NSData *feedback;
@property (nonatomic) int maxAgeSeconds;
@property (retain, nonatomic) _PARSearchResponse_Error *error;
@property (nonatomic) long long millisecondDuration;
@property (copy, nonatomic) NSString *partialClientAddress;
@property (retain, nonatomic) _PARSearchResponse_QueryFeatures *queryFeatures;
@property (copy, nonatomic) NSDictionary *blenderFeaturesL3;
@property (copy, nonatomic) NSArray *corrections;
@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) NSArray *sections;
@property (copy, nonatomic) NSData *legacyJSON;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (unsigned long long)sectionsCount;
- (void)clearSections;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (void)addSections:(id)arg1;
- (unsigned long long)suggestionsCount;
- (id)initWithJSON:(id)arg1;
- (void)addResults:(id)arg1;
- (void)clearResults;
- (unsigned long long)resultsCount;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (void)addSuggestions:(id)arg1;
- (void)clearSuggestions;
- (id)suggestionsAtIndex:(unsigned long long)arg1;
- (void)setBlenderFeaturesL3:(float)arg1 forKey:(long long)arg2;
- (void)addCorrections:(id)arg1;
- (_Bool)getBlenderFeaturesL3:(float *)arg1 forKey:(long long)arg2;
- (void)clearCorrections;
- (unsigned long long)correctionsCount;
- (id)correctionsAtIndex:(unsigned long long)arg1;

@end
