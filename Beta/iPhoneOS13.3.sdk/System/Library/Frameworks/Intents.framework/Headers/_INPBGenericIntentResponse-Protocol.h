/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBIntentMetadata;

@protocol _INPBGenericIntentResponse <Swift>

@property (retain, nonatomic) _INPBIntentMetadata *metadata;
@property (nonatomic, readonly) _Bool hasMetadata;
@property (copy, nonatomic) NSArray *properties;
@property (nonatomic, readonly) unsigned long long propertiesCount;

+ (unsigned short)propertiesType;

- (unsigned short)addProperties: /* Error: Ran out of types for this method. */;
- (unsigned short)clearProperties;
- (unsigned short)propertiesAtIndex: /* Error: Ran out of types for this method. */;

@end
