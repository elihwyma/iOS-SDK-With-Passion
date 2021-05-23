/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBDataString, _INPBImageValue;

@protocol _INPBShortcutOverview <Swift>

@property (retain, nonatomic) _INPBDataString *descriptiveText;
@property (nonatomic, readonly) _Bool hasDescriptiveText;
@property (retain, nonatomic) _INPBImageValue *icon;
@property (nonatomic, readonly) _Bool hasIcon;
@property (retain, nonatomic) _INPBDataString *name;
@property (nonatomic, readonly) _Bool hasName;
@property (copy, nonatomic) NSArray *steps;
@property (nonatomic, readonly) unsigned long long stepsCount;
@property (retain, nonatomic) _INPBDataString *voiceCommand;
@property (nonatomic, readonly) _Bool hasVoiceCommand;

+ (unsigned short)stepsType;

- (unsigned short)stepsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearSteps;
- (unsigned short)addSteps: /* Error: Ran out of types for this method. */;

@end
