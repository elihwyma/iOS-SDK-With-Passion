/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSString;

@protocol _PARSearchResponse_Correction <Swift>

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *completion;
@property (nonatomic) float score;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
