/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSString, _PARQueryFeatures_Stats;

@protocol _PARSearchResponse_QueryFeatures <Swift>

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) _PARQueryFeatures_Stats *stats;
@property (nonatomic) _Bool topDown;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
