/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBIntentMetadata;

@protocol _INPBConfigureHomeIntent <Swift>

@property (copy, nonatomic) NSArray *entities;
@property (nonatomic, readonly) unsigned long long entitiesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;

+ (unsigned short)entitiesType;

- (unsigned short)clearEntities;
- (unsigned short)addEntities: /* Error: Ran out of types for this method. */;
- (unsigned short)entitiesAtIndex: /* Error: Ran out of types for this method. */;

@end
