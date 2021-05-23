/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBImageValue, _INPBString;

@interface _INPBIntentMetadata : PBCodable <Swift>

{
    CDStruct_95bda58d _requiredEntitlements;
    struct {
        unsigned int executionContext:1;
        unsigned int intentCategory:1;
        unsigned int backgroundLaunch:1;
        unsigned int confirmed:1;
        unsigned int idiom:1;
        unsigned int isOwnedByCurrentUser:1;
        unsigned int isPrimaryDisplayDisabled:1;
        unsigned int triggerMethod:1;
        unsigned int userConfirmationRequired:1;
    } _has;
    _Bool _backgroundLaunch;
    _Bool _confirmed;
    _Bool _isOwnedByCurrentUser;
    _Bool _isPrimaryDisplayDisabled;
    _Bool _userConfirmationRequired;
    _Bool __encodeLegacyGloryData;
    int _executionContext;
    int _intentCategory;
    int _idiom;
    int _triggerMethod;
    NSString *_categoryVerb;
    _INPBImageValue *_defaultImageValue;
    NSString *_launchId;
    NSString *_nanoLaunchId;
    NSString *_systemExtensionBundleId;
    NSString *_systemUIExtensionBundleId;
    NSArray *_forceNeedsValueForParameters;
    NSString *_intentDescription;
    NSString *_intentId;
    NSString *_originatingDeviceIdsIdentifier;
    NSString *_originatingDeviceRapportEffectiveId;
    NSString *_originatingDeviceRapportMediaSystemId;
    NSArray *_parameterImages;
    NSString *_suggestedInvocationPhrase;
    _INPBString *_userUtterance;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *categoryVerb;
@property (nonatomic, readonly) _Bool hasCategoryVerb;
@property (retain, nonatomic) _INPBImageValue *defaultImageValue;
@property (nonatomic, readonly) _Bool hasDefaultImageValue;
@property (nonatomic) int executionContext;
@property (nonatomic) _Bool hasExecutionContext;
@property (nonatomic) int intentCategory;
@property (nonatomic) _Bool hasIntentCategory;
@property (copy, nonatomic) NSString *launchId;
@property (nonatomic, readonly) _Bool hasLaunchId;
@property (copy, nonatomic) NSString *nanoLaunchId;
@property (nonatomic, readonly) _Bool hasNanoLaunchId;
@property (nonatomic, readonly) int *requiredEntitlements;
@property (nonatomic, readonly) unsigned long long requiredEntitlementsCount;
@property (copy, nonatomic) NSString *systemExtensionBundleId;
@property (nonatomic, readonly) _Bool hasSystemExtensionBundleId;
@property (copy, nonatomic) NSString *systemUIExtensionBundleId;
@property (nonatomic, readonly) _Bool hasSystemUIExtensionBundleId;
@property (nonatomic) _Bool backgroundLaunch;
@property (nonatomic) _Bool hasBackgroundLaunch;
@property (nonatomic) _Bool confirmed;
@property (nonatomic) _Bool hasConfirmed;
@property (copy, nonatomic) NSArray *forceNeedsValueForParameters;
@property (nonatomic, readonly) unsigned long long forceNeedsValueForParametersCount;
@property (nonatomic) int idiom;
@property (nonatomic) _Bool hasIdiom;
@property (copy, nonatomic) NSString *intentDescription;
@property (nonatomic, readonly) _Bool hasIntentDescription;
@property (copy, nonatomic) NSString *intentId;
@property (nonatomic, readonly) _Bool hasIntentId;
@property (nonatomic) _Bool isOwnedByCurrentUser;
@property (nonatomic) _Bool hasIsOwnedByCurrentUser;
@property (nonatomic) _Bool isPrimaryDisplayDisabled;
@property (nonatomic) _Bool hasIsPrimaryDisplayDisabled;
@property (copy, nonatomic) NSString *originatingDeviceIdsIdentifier;
@property (nonatomic, readonly) _Bool hasOriginatingDeviceIdsIdentifier;
@property (copy, nonatomic) NSString *originatingDeviceRapportEffectiveId;
@property (nonatomic, readonly) _Bool hasOriginatingDeviceRapportEffectiveId;
@property (copy, nonatomic) NSString *originatingDeviceRapportMediaSystemId;
@property (nonatomic, readonly) _Bool hasOriginatingDeviceRapportMediaSystemId;
@property (copy, nonatomic) NSArray *parameterImages;
@property (nonatomic, readonly) unsigned long long parameterImagesCount;
@property (copy, nonatomic) NSString *suggestedInvocationPhrase;
@property (nonatomic, readonly) _Bool hasSuggestedInvocationPhrase;
@property (nonatomic) int triggerMethod;
@property (nonatomic) _Bool hasTriggerMethod;
@property (nonatomic) _Bool userConfirmationRequired;
@property (nonatomic) _Bool hasUserConfirmationRequired;
@property (retain, nonatomic) _INPBString *userUtterance;
@property (nonatomic, readonly) _Bool hasUserUtterance;

+ (_Bool)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (Class)parameterImagesType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)executionContextAsString:(int)arg1;
- (int)StringAsExecutionContext:(id)arg1;
- (id)intentCategoryAsString:(int)arg1;
- (int)StringAsIntentCategory:(id)arg1;
- (void)clearRequiredEntitlements;
- (void)addRequiredEntitlement:(int)arg1;
- (int)requiredEntitlementAtIndex:(unsigned long long)arg1;
- (void)setRequiredEntitlements:(int *)arg1 count:(unsigned long long)arg2;
- (id)requiredEntitlementsAsString:(int)arg1;
- (int)StringAsRequiredEntitlements:(id)arg1;
- (void)clearForceNeedsValueForParameters;
- (void)addForceNeedsValueForParameter:(id)arg1;
- (id)forceNeedsValueForParameterAtIndex:(unsigned long long)arg1;
- (id)idiomAsString:(int)arg1;
- (int)StringAsIdiom:(id)arg1;
- (void)clearParameterImages;
- (void)addParameterImages:(id)arg1;
- (id)parameterImagesAtIndex:(unsigned long long)arg1;
- (id)triggerMethodAsString:(int)arg1;
- (int)StringAsTriggerMethod:(id)arg1;

@end
