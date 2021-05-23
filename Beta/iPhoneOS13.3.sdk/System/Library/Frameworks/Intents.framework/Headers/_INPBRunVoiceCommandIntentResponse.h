/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBArchivedObject, _INPBDictionary;

@interface _INPBRunVoiceCommandIntentResponse : PBCodable <Swift>

{
    struct {
        unsigned int continueRunning:1;
        unsigned int customResponsesDisabled:1;
        unsigned int intentCategory:1;
        unsigned int interstitialDisabled:1;
        unsigned int prefersExecutionOnCompanion:1;
        unsigned int toggleState:1;
    } _has;
    _Bool _continueRunning;
    _Bool _customResponsesDisabled;
    _Bool _interstitialDisabled;
    _Bool _prefersExecutionOnCompanion;
    _Bool __encodeLegacyGloryData;
    int _intentCategory;
    int _toggleState;
    NSString *_appBundleId;
    NSString *_localizedAppName;
    _INPBDictionary *_parameters;
    NSString *_responseTemplate;
    NSArray *_steps;
    _INPBArchivedObject *_underlyingIntent;
    _INPBArchivedObject *_underlyingIntentResponse;
    NSString *_underlyingIntentTitle;
    NSString *_verb;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

+ (_Bool)supportsSecureCoding;
+ (Class)stepType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearSteps;
- (id)stepAtIndex:(unsigned long long)arg1;
- (void)addStep:(id)arg1;
- (id)intentCategoryAsString:(int)arg1;
- (int)StringAsIntentCategory:(id)arg1;
- (id)toggleStateAsString:(int)arg1;
- (int)StringAsToggleState:(id)arg1;

@end
