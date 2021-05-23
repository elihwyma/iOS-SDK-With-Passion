/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBIntentMetadata, _INPBString;

@protocol _INPBUncompressFileIntent <Swift>

@property (retain, nonatomic) _INPBString *entityName;
@property (nonatomic, readonly) _Bool hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) _Bool hasEntityType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;

- (unsigned short)entityTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsEntityType: /* Error: Ran out of types for this method. */;

@end
