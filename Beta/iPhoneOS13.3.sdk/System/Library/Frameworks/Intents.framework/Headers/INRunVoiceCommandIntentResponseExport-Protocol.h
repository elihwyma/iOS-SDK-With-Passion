/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INArchivedObject, NSArray, NSDictionary, NSNumber, NSString;

@protocol INRunVoiceCommandIntentResponseExport <Swift>

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

@end
