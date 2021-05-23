/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBIntentMetadata;

@protocol _INPBSetMessageAttributeIntent <Swift>

@property (nonatomic) int attribute;
@property (nonatomic) _Bool hasAttribute;
@property (copy, nonatomic) NSArray *identifiers;
@property (nonatomic, readonly) unsigned long long identifiersCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;

- (unsigned short)clearIdentifiers;
- (unsigned short)identifierAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)attributeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsAttribute: /* Error: Ran out of types for this method. */;

@end
