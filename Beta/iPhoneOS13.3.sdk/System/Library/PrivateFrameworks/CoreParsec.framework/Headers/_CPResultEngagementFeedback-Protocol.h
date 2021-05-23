/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSString, _CPSearchResultForFeedback;

@protocol _CPResultEngagementFeedback <Swift>

@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool actionEngaged;
@property (nonatomic) int triggerEvent;
@property (nonatomic) int destination;
@property (nonatomic) int actionTarget;
@property (retain, nonatomic) _CPSearchResultForFeedback *result;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) _Bool matchesUnengagedSuggestion;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
