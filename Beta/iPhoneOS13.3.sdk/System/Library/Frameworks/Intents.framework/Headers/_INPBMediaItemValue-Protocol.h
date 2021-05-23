/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBImageValue, _INPBValueMetadata;

@protocol _INPBMediaItemValue <Swift>

@property (copy, nonatomic) NSString *artist;
@property (nonatomic, readonly) _Bool hasArtist;
@property (retain, nonatomic) _INPBImageValue *artwork;
@property (nonatomic, readonly) _Bool hasArtwork;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (copy, nonatomic) NSArray *namedEntities;
@property (nonatomic, readonly) unsigned long long namedEntitiesCount;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasTitle;
@property (copy, nonatomic) NSArray *topics;
@property (nonatomic, readonly) unsigned long long topicsCount;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

+ (unsigned short)namedEntitiesType;
+ (unsigned short)topicsType;

- (unsigned short)typeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsType: /* Error: Ran out of types for this method. */;
- (unsigned short)clearNamedEntities;
- (unsigned short)addNamedEntities: /* Error: Ran out of types for this method. */;
- (unsigned short)namedEntitiesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearTopics;
- (unsigned short)addTopics: /* Error: Ran out of types for this method. */;
- (unsigned short)topicsAtIndex: /* Error: Ran out of types for this method. */;

@end
