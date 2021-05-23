/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData, _CPSearchResultForFeedback;

@protocol _CPResultRankingFeedback <Swift>

@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) _CPSearchResultForFeedback *result;
@property (copy, nonatomic) NSArray *hiddenResults;
@property (copy, nonatomic) NSArray *duplicateResults;
@property (nonatomic) unsigned int localResultPosition;
@property (nonatomic) double personalizationScore;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addHiddenResults: /* Error: Ran out of types for this method. */;
- (unsigned short)addDuplicateResults: /* Error: Ran out of types for this method. */;
- (unsigned short)clearHiddenResults;
- (unsigned short)hiddenResultsCount;
- (unsigned short)hiddenResultsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearDuplicateResults;
- (unsigned short)duplicateResultsCount;
- (unsigned short)duplicateResultsAtIndex: /* Error: Ran out of types for this method. */;

@end
