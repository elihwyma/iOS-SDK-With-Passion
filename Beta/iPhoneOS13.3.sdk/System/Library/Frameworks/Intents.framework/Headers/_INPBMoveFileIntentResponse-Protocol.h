/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBString;

@protocol _INPBMoveFileIntentResponse <Swift>

@property (retain, nonatomic) _INPBString *destinationName;
@property (nonatomic, readonly) _Bool hasDestinationName;
@property (copy, nonatomic) NSArray *entityNames;
@property (nonatomic, readonly) unsigned long long entityNamesCount;
@property (nonatomic, readonly) int *entityTypes;
@property (nonatomic, readonly) unsigned long long entityTypesCount;
@property (nonatomic) _Bool overwrite;
@property (nonatomic) _Bool hasOverwrite;
@property (retain, nonatomic) _INPBString *sourceName;
@property (nonatomic, readonly) _Bool hasSourceName;
@property (nonatomic) _Bool success;
@property (nonatomic) _Bool hasSuccess;

+ (unsigned short)entityNameType;

- (unsigned short)clearEntityNames;
- (unsigned short)addEntityName: /* Error: Ran out of types for this method. */;
- (unsigned short)entityNameAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearEntityTypes;
- (unsigned short)addEntityType: /* Error: Ran out of types for this method. */;
- (unsigned short)entityTypeAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setEntityTypes:count: /* Error: Ran out of types for this method. */;
- (unsigned short)entityTypesAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsEntityTypes: /* Error: Ran out of types for this method. */;

@end
