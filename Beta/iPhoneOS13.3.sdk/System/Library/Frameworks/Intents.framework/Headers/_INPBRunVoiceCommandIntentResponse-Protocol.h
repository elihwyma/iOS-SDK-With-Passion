/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBArchivedObject, _INPBDictionary;

@protocol _INPBRunVoiceCommandIntentResponse <Swift>

@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic, readonly) _Bool hasAppBundleId;
@property (nonatomic) _Bool continueRunning;
@property (nonatomic) _Bool hasContinueRunning;
@property (nonatomic) _Bool customResponsesDisabled;
@property (nonatomic) _Bool hasCustomResponsesDisabled;
@property (nonatomic) int intentCategory;
@property (nonatomic) _Bool hasIntentCategory;
@property (nonatomic) _Bool interstitialDisabled;
@property (nonatomic) _Bool hasInterstitialDisabled;
@property (copy, nonatomic) NSString *localizedAppName;
@property (nonatomic, readonly) _Bool hasLocalizedAppName;
@property (retain, nonatomic) _INPBDictionary *parameters;
@property (nonatomic, readonly) _Bool hasParameters;
@property (nonatomic) _Bool prefersExecutionOnCompanion;
@property (nonatomic) _Bool hasPrefersExecutionOnCompanion;
@property (copy, nonatomic) NSString *responseTemplate;
@property (nonatomic, readonly) _Bool hasResponseTemplate;
@property (copy, nonatomic) NSArray *steps;
@property (nonatomic, readonly) unsigned long long stepsCount;
@property (nonatomic) int toggleState;
@property (nonatomic) _Bool hasToggleState;
@property (retain, nonatomic) _INPBArchivedObject *underlyingIntent;
@property (nonatomic, readonly) _Bool hasUnderlyingIntent;
@property (retain, nonatomic) _INPBArchivedObject *underlyingIntentResponse;
@property (nonatomic, readonly) _Bool hasUnderlyingIntentResponse;
@property (copy, nonatomic) NSString *underlyingIntentTitle;
@property (nonatomic, readonly) _Bool hasUnderlyingIntentTitle;
@property (copy, nonatomic) NSString *verb;
@property (nonatomic, readonly) _Bool hasVerb;

+ (unsigned short)stepType;

- (unsigned short)clearSteps;
- (unsigned short)stepAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addStep: /* Error: Ran out of types for this method. */;
- (unsigned short)intentCategoryAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsIntentCategory: /* Error: Ran out of types for this method. */;
- (unsigned short)toggleStateAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsToggleState: /* Error: Ran out of types for this method. */;

@end
