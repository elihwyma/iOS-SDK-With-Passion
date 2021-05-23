/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBString;

@protocol _INPBCreateFileIntentResponse <Swift>

@property (retain, nonatomic) _INPBString *destinationName;
@property (nonatomic, readonly) _Bool hasDestinationName;
@property (retain, nonatomic) _INPBString *entityName;
@property (nonatomic, readonly) _Bool hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) _Bool hasEntityType;
@property (nonatomic) _Bool overwrite;
@property (nonatomic) _Bool hasOverwrite;
@property (nonatomic) _Bool success;
@property (nonatomic) _Bool hasSuccess;

- (unsigned short)entityTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsEntityType: /* Error: Ran out of types for this method. */;

@end
