/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData;

@protocol _SFPBProductAvailability <Swift>

@property (copy, nonatomic) NSArray *results;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addResults: /* Error: Ran out of types for this method. */;
- (unsigned short)clearResults;
- (unsigned short)resultsCount;
- (unsigned short)resultsAtIndex: /* Error: Ran out of types for this method. */;

@end
