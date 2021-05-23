/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDataString, _INPBIntentMetadata;

@protocol _INPBGetCarLockStatusIntent <Swift>

@property (retain, nonatomic) _INPBDataString *carName;
@property (nonatomic, readonly) _Bool hasCarName;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;

@end
