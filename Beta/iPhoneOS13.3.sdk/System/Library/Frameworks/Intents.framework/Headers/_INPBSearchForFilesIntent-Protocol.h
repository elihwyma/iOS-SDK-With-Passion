/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBIntentMetadata, _INPBString;

@protocol _INPBSearchForFilesIntent <Swift>

@property (retain, nonatomic) _INPBString *appId;
@property (nonatomic, readonly) _Bool hasAppId;
@property (retain, nonatomic) _INPBString *entityName;
@property (nonatomic, readonly) _Bool hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) _Bool hasEntityType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (copy, nonatomic) NSArray *properties;
@property (nonatomic, readonly) unsigned long long propertiesCount;
@property (nonatomic) int scope;
@property (nonatomic) _Bool hasScope;
@property (retain, nonatomic) _INPBString *scopeEntityName;
@property (nonatomic, readonly) _Bool hasScopeEntityName;

+ (unsigned short)propertiesType;

- (unsigned short)addProperties: /* Error: Ran out of types for this method. */;
- (unsigned short)clearProperties;
- (unsigned short)propertiesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)entityTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsEntityType: /* Error: Ran out of types for this method. */;
- (unsigned short)scopeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsScope: /* Error: Ran out of types for this method. */;

@end
