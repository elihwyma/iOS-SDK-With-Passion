/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _PARSearchResponse_Error, _PARSearchResponse_QueryFeatures;

@protocol _PARSearchResponse <Swift>

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

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)sectionsCount;
- (unsigned short)clearSections;
- (unsigned short)sectionsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addSections: /* Error: Ran out of types for this method. */;
- (unsigned short)suggestionsCount;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addResults: /* Error: Ran out of types for this method. */;
- (unsigned short)clearResults;
- (unsigned short)resultsCount;
- (unsigned short)resultsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addSuggestions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearSuggestions;
- (unsigned short)suggestionsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setBlenderFeaturesL3:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)addCorrections: /* Error: Ran out of types for this method. */;
- (unsigned short)getBlenderFeaturesL3:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)clearCorrections;
- (unsigned short)correctionsCount;
- (unsigned short)correctionsAtIndex: /* Error: Ran out of types for this method. */;

@end
