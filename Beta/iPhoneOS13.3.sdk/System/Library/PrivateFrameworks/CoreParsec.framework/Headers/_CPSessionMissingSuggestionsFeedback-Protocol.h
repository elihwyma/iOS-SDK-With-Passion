/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData;

@protocol _CPSessionMissingSuggestionsFeedback <Swift>

@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSArray *suggestions;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)suggestionsCount;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addSuggestions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearSuggestions;
- (unsigned short)suggestionsAtIndex: /* Error: Ran out of types for this method. */;

@end
