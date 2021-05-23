/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSString;

@protocol _PARSuggestion <Swift>

@property (copy, nonatomic) NSString *suggestion;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *topic;
@property (nonatomic) float score;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
