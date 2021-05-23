/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBContact;

@protocol _INPBContactEventTrigger <Swift>

@property (retain, nonatomic) _INPBContact *triggerContact;
@property (nonatomic, readonly) _Bool hasTriggerContact;

@end
