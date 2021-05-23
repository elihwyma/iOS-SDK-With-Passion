/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@protocol _PARSearchResponse_QuerySuggestion <Swift>

@property (copy, nonatomic) NSString *suggestion;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSData *feedback;
@property (nonatomic) _Bool previouslyEngaged;
@property (nonatomic) float score;
@property (copy, nonatomic) NSArray *entities;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)clearEntities;
- (unsigned short)addEntities: /* Error: Ran out of types for this method. */;
- (unsigned short)entitiesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)entitiesCount;

@end
