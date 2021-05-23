/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData;

@protocol _CPVisibleResultsFeedback <Swift>

@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSArray *results;
@property (nonatomic) int triggerEvent;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addResults: /* Error: Ran out of types for this method. */;
- (unsigned short)clearResults;
- (unsigned short)resultsCount;
- (unsigned short)resultsAtIndex: /* Error: Ran out of types for this method. */;

@end
