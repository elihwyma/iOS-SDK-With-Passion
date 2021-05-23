/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@protocol _CPResultSectionForFeedback <Swift>

@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double rankingScore;
@property (copy, nonatomic) NSData *fallbackResultSection;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) int knownBundleIdentifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichBundleid;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addResults: /* Error: Ran out of types for this method. */;
- (unsigned short)clearResults;
- (unsigned short)resultsCount;
- (unsigned short)resultsAtIndex: /* Error: Ran out of types for this method. */;

@end
