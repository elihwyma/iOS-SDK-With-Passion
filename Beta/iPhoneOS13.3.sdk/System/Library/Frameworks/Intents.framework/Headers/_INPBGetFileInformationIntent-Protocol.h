/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBIntentMetadata, _INPBString;

@protocol _INPBGetFileInformationIntent <Swift>

@property (retain, nonatomic) _INPBString *entityName;
@property (nonatomic, readonly) _Bool hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) _Bool hasEntityType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int propertyName;
@property (nonatomic) _Bool hasPropertyName;
@property (nonatomic) int qualifier;
@property (nonatomic) _Bool hasQualifier;

- (unsigned short)entityTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsEntityType: /* Error: Ran out of types for this method. */;
- (unsigned short)qualifierAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsQualifier: /* Error: Ran out of types for this method. */;
- (unsigned short)propertyNameAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsPropertyName: /* Error: Ran out of types for this method. */;

@end
