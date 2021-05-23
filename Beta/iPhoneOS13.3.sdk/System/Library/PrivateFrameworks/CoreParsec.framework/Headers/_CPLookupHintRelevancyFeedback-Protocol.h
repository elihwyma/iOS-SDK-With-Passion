/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSString, _CPRange;

@protocol _CPLookupHintRelevancyFeedback <Swift>

@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) _CPRange *hintRange;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) _Bool discarded;
@property (nonatomic) int grade;
@property (copy, nonatomic) NSString *context;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
