/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSNumber, NSString, SAMediaContentRatingRestrictions, SAVoice, SAWatchData;

@interface SASetAssistantData : SABaseCommand <Swift>

@property (copy, nonatomic) NSArray *abSources;
@property (copy, nonatomic) NSNumber *allowUserGeneratedContent;
@property (copy, nonatomic) NSString *anchor;
@property (nonatomic) _Bool censorSpeech;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSNumber *debugFlags;
@property (copy, nonatomic) NSArray *deviceCapabilities;
@property (copy, nonatomic) NSString *deviceColor;
@property (copy, nonatomic) NSString *deviceEnclosure;
@property (copy, nonatomic) NSString *deviceVersion;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *fullStorefrontId;
@property (nonatomic) _Bool handsFree;
@property (copy, nonatomic) NSNumber *holdToTalkThresholdInMilliseconds;
@property (nonatomic) _Bool inRetailStoreDemoMode;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSArray *meCards;
@property (retain, nonatomic) SAMediaContentRatingRestrictions *mediaContentRatingRestrictions;
@property (nonatomic) _Bool mediaPlayerExplicitContentDisallowed;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSArray *parentalRestrictions;
@property (copy, nonatomic) NSString *preferredLanguage;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSNumber *storefront;
@property (copy, nonatomic) NSString *temperatureUnit;
@property (copy, nonatomic) NSString *timeZoneId;
@property (retain, nonatomic) SAVoice *ttsVoice;
@property (copy, nonatomic) NSNumber *twentyFourHourTimeDisplay;
@property (copy, nonatomic) NSNumber *uiScale;
@property (copy, nonatomic) NSString *userInterfaceIdiom;
@property (nonatomic) _Bool voiceOver;
@property (copy, nonatomic) NSNumber *voiceTriggerEnabled;
@property (retain, nonatomic) SAWatchData *watchData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)setAssistantData;
+ (id)setAssistantDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
