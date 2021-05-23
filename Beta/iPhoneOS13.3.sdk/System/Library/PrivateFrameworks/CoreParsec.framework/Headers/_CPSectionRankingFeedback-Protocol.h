/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData, _CPResultSectionForFeedback;

@protocol _CPSectionRankingFeedback <Swift>

@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSArray *results;
@property (retain, nonatomic) _CPResultSectionForFeedback *section;
@property (nonatomic) unsigned int localSectionPosition;
@property (nonatomic) double personalizationScore;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addResults: /* Error: Ran out of types for this method. */;
- (unsigned short)clearResults;
- (unsigned short)resultsCount;
- (unsigned short)resultsAtIndex: /* Error: Ran out of types for this method. */;

@end
