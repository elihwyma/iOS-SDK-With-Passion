/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResponse.h>

@class INArchivedObject, NSArray, NSDictionary, NSNumber, NSString;

@interface INRunVoiceCommandIntentResponse : INIntentResponse

@property (nonatomic, readonly) long long code;
@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) long long intentCategory;
@property (copy, nonatomic) NSNumber *customResponsesDisabled;
@property (copy, nonatomic) NSString *responseTemplate;
@property (copy, nonatomic) NSDictionary *parameters;
@property (copy, nonatomic) NSString *verb;
@property (copy, nonatomic) INArchivedObject *underlyingIntent;
@property (copy, nonatomic) NSString *localizedAppName;
@property (copy, nonatomic) INArchivedObject *underlyingIntentResponse;
@property (nonatomic) long long toggleState;
@property (copy, nonatomic) NSNumber *continueRunning;
@property (copy, nonatomic) NSNumber *interstitialDisabled;
@property (copy, nonatomic) NSString *underlyingIntentTitle;
@property (copy, nonatomic) NSArray *steps;
@property (copy, nonatomic) NSNumber *prefersExecutionOnCompanion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;
+ (int)_typeFromCode:(long long)arg1;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)propertiesByName;
- (id)_dictionaryRepresentation;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithBackingStore:(id)arg1;
- (long long)_intentResponseCode;
- (long long)_codeWithName:(id)arg1;
- (void)setPropertiesByName:(id)arg1;

@end
