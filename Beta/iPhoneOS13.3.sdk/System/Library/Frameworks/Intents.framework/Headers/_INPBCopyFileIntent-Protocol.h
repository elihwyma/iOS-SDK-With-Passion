/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBIntentMetadata, _INPBString;

@protocol _INPBCopyFileIntent <Swift>

@property (retain, nonatomic) _INPBString *destinationName;
@property (nonatomic, readonly) _Bool hasDestinationName;
@property (nonatomic) int destinationType;
@property (nonatomic) _Bool hasDestinationType;
@property (retain, nonatomic) _INPBString *entityName;
@property (nonatomic, readonly) _Bool hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) _Bool hasEntityType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (copy, nonatomic) NSArray *properties;
@property (nonatomic, readonly) unsigned long long propertiesCount;
@property (retain, nonatomic) _INPBString *sourceName;
@property (nonatomic, readonly) _Bool hasSourceName;
@property (nonatomic) int sourceType;
@property (nonatomic) _Bool hasSourceType;

+ (unsigned short)propertiesType;

- (unsigned short)addProperties: /* Error: Ran out of types for this method. */;
- (unsigned short)clearProperties;
- (unsigned short)propertiesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)destinationTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsDestinationType: /* Error: Ran out of types for this method. */;
- (unsigned short)entityTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsEntityType: /* Error: Ran out of types for this method. */;
- (unsigned short)sourceTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsSourceType: /* Error: Ran out of types for this method. */;

@end
