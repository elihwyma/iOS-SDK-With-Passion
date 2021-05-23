/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBIntentMetadata;

@protocol _INPBPlayMessageSoundIntent <Swift>

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (copy, nonatomic) NSString *messageIdentifier;
@property (nonatomic, readonly) _Bool hasMessageIdentifier;
@property (nonatomic) int soundType;
@property (nonatomic) _Bool hasSoundType;

- (unsigned short)soundTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsSoundType: /* Error: Ran out of types for this method. */;

@end
