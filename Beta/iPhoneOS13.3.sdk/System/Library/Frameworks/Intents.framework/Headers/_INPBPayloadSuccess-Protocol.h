/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBIntentSlotValue;

@protocol _INPBPayloadSuccess <Swift>

@property (copy, nonatomic) NSString *resolvedKeyPath;
@property (nonatomic, readonly) _Bool hasResolvedKeyPath;
@property (retain, nonatomic) _INPBIntentSlotValue *resolvedValue;
@property (nonatomic, readonly) _Bool hasResolvedValue;

@end
