/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBIntentMetadata, _INPBString;

@protocol _INPBMoveFileIntent <Swift>

@property (retain, nonatomic) _INPBString *destinationName;
@property (nonatomic, readonly) _Bool hasDestinationName;
@property (nonatomic) int destinationType;
@property (nonatomic) _Bool hasDestinationType;
@property (copy, nonatomic) NSArray *entityNames;
@property (nonatomic, readonly) unsigned long long entityNamesCount;
@property (nonatomic, readonly) int *entityTypes;
@property (nonatomic, readonly) unsigned long long entityTypesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (copy, nonatomic) NSArray *properties;
@property (nonatomic, readonly) unsigned long long propertiesCount;
@property (retain, nonatomic) _INPBString *sourceName;
@property (nonatomic, readonly) _Bool hasSourceName;
@property (nonatomic) int sourceType;
@property (nonatomic) _Bool hasSourceType;

+ (unsigned short)propertiesType;
+ (unsigned short)entityNameType;

- (unsigned short)addProperties: /* Error: Ran out of types for this method. */;
- (unsigned short)clearProperties;
- (unsigned short)propertiesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)destinationTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsDestinationType: /* Error: Ran out of types for this method. */;
- (unsigned short)clearEntityNames;
- (unsigned short)addEntityName: /* Error: Ran out of types for this method. */;
- (unsigned short)entityNameAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearEntityTypes;
- (unsigned short)addEntityType: /* Error: Ran out of types for this method. */;
- (unsigned short)entityTypeAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setEntityTypes:count: /* Error: Ran out of types for this method. */;
- (unsigned short)entityTypesAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsEntityTypes: /* Error: Ran out of types for this method. */;
- (unsigned short)sourceTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsSourceType: /* Error: Ran out of types for this method. */;

@end
