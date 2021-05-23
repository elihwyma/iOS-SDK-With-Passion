/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBIntentSlotValue;

@protocol _INPBProperty <Swift>

@property (retain, nonatomic) _INPBIntentSlotValue *payload;
@property (nonatomic, readonly) _Bool hasPayload;
@property (copy, nonatomic) NSString *role;
@property (nonatomic, readonly) _Bool hasRole;

@end
