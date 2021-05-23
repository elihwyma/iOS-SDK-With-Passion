/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBInteger, _INPBString;

@protocol _INPBOpenFileIntentResponse <Swift>

@property (copy, nonatomic) NSArray *entities;
@property (nonatomic, readonly) unsigned long long entitiesCount;
@property (retain, nonatomic) _INPBInteger *numResults;
@property (nonatomic, readonly) _Bool hasNumResults;
@property (retain, nonatomic) _INPBString *query;
@property (nonatomic, readonly) _Bool hasQuery;
@property (nonatomic) _Bool success;
@property (nonatomic) _Bool hasSuccess;

+ (unsigned short)entitiesType;

- (unsigned short)clearEntities;
- (unsigned short)addEntities: /* Error: Ran out of types for this method. */;
- (unsigned short)entitiesAtIndex: /* Error: Ran out of types for this method. */;

@end
