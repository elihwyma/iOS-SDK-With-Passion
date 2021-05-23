/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData;

@protocol _CPListValue <Swift>

@property (copy, nonatomic) NSArray *values;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)valuesCount;
- (unsigned short)clearValues;
- (unsigned short)valuesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addValues: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
