/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBIntentMetadata;

@protocol _INPBShareFileIntent <Swift>

@property (copy, nonatomic) NSArray *entityNames;
@property (nonatomic, readonly) unsigned long long entityNamesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (copy, nonatomic) NSArray *recipients;
@property (nonatomic, readonly) unsigned long long recipientsCount;
@property (nonatomic) int shareMode;
@property (nonatomic) _Bool hasShareMode;

+ (unsigned short)entityNameType;
+ (unsigned short)recipientsType;

- (unsigned short)clearEntityNames;
- (unsigned short)addEntityName: /* Error: Ran out of types for this method. */;
- (unsigned short)entityNameAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearRecipients;
- (unsigned short)addRecipients: /* Error: Ran out of types for this method. */;
- (unsigned short)recipientsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)shareModeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsShareMode: /* Error: Ran out of types for this method. */;

@end
