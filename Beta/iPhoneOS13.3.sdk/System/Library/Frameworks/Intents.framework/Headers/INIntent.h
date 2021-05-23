/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INImage, INIntentCodableDescription, INIntentKeyParameter, INParameterContexts, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSOrderedSet, NSString, NSUUID, PBCodable, _INPBIntentMetadata;

@interface INIntent : NSObject <Swift>

{
    NSMutableDictionary *_intentInstanceDescriptionMapping;
    NSArray *_parameterImages;
    _Bool _hasLoadedKeyParameter;
    struct os_unfair_lock_s _keyParameterLock;
    _Bool _shouldForwardToAppOnSucccess;
    NSDictionary *_parameterCombinations;
    NSDictionary *_configurableParameterCombinations;
    INParameterContexts *_parameterContexts;
    unsigned long long _indexingHash;
    INIntentKeyParameter *_keyParameter;
    NSString *_identifier;
    PBCodable *_backingStore;
    NSArray *_airPlayRouteIds;
    NSString *_recordRoute;
    NSUUID *_recordDeviceUID;
    NSString *_recordDeviceIdentifier;
    long long __preferredInteractionDirection;
}

@property (readonly) long long _intents_toggleState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool _hasTitle;
@property (copy, nonatomic, readonly) NSString *_title;
@property (copy, nonatomic, readonly) NSString *_subtitle;
@property (copy, nonatomic, readonly) NSString *_localizedVerb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) INImage *_keyImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *_JSONDictionaryRepresentation;
@property (copy, nonatomic) PBCodable *backingStore;
@property (nonatomic, readonly) NSString *utteranceString;
@property (retain, nonatomic, setter=_setLaunchId:) NSString *launchId;
@property (retain, nonatomic, setter=_setNanoLaunchId:) NSString *_nanoLaunchId;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) NSString *intentId;
@property (retain, nonatomic, setter=_setExtensionBundleId:) NSString *extensionBundleId;
@property (retain, nonatomic, setter=_setUiExtensionBundleId:) NSString *_uiExtensionBundleId;
@property (retain, nonatomic, setter=_setAirPlayRouteIds:) NSArray *airPlayRouteIds;
@property (copy, nonatomic, setter=_setRecordRoute:) NSString *recordRoute;
@property (retain, nonatomic, setter=_setRecordDeviceUID:) NSUUID *recordDeviceUID;
@property (retain, nonatomic, setter=_setRecordDeviceIdentifier:) NSString *recordDeviceIdentifier;
@property (retain, nonatomic, setter=_setMetadata:) _INPBIntentMetadata *_metadata;
@property (nonatomic, readonly) long long triggerMethod;
@property (nonatomic, setter=_setIdiom:) long long _idiom;
@property (nonatomic, getter=_isPrimaryDisplayDisabled, setter=_setPrimaryDisplayDisabled:) _Bool _primaryDisplayDisabled;
@property (retain, nonatomic, setter=_setOriginatingDeviceIdsIdentifier:) NSString *_originatingDeviceIDSIdentifier;
@property (retain, nonatomic, setter=_setOriginatingDeviceRapportEffectiveIdentifier:) NSString *_originatingDeviceRapportEffectiveIdentifier;
@property (retain, nonatomic, setter=_setOriginatingDeviceRapportMediaSystemIdentifier:) NSString *_originatingDeviceRapportMediaSystemIdentifier;
@property (retain, nonatomic, setter=_setIsOwnedByCurrentUser:) NSNumber *_isOwnedByCurrentUser;
@property (nonatomic, readonly) long long _intentCategory;
@property (nonatomic, readonly) NSString *_categoryVerb;
@property (nonatomic, setter=_setExecutionContext:) long long _executionContext;
@property (retain, nonatomic, setter=_setDefaultImage:) INImage *_defaultImage;
@property (nonatomic, readonly) INIntentKeyParameter *_keyParameter;
@property (nonatomic, readonly) NSString *typeName;
@property (retain, nonatomic, setter=_setParameterCombinations:) NSDictionary *_parameterCombinations;
@property (retain, nonatomic, setter=_setConfigurableParameterCombinations:) NSDictionary *_configurableParameterCombinations;
@property (nonatomic, readonly) NSDictionary *_resolvableParameterCombinations;
@property (nonatomic, readonly) NSDictionary *_validParameterCombinations;
@property (nonatomic, readonly) _Bool _supportsBackgroundExecution;
@property (nonatomic, readonly, getter=_isConfigurable) _Bool _configurable;
@property (nonatomic, readonly, getter=_isEligibleForSuggestions) _Bool _eligibleForSuggestions;
@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (copy, nonatomic, getter=_parameterImages, setter=_setParameterImages:) NSArray *parameterImages;
@property (copy, nonatomic, readonly, getter=_sortedParameterImages) NSArray *sortedParameterImages;
@property (copy, nonatomic, setter=_setParametersForcedToNeedsValue:) NSArray *_parametersForcedToNeedsValue;
@property (nonatomic, readonly) long long _type;
@property (nonatomic, readonly) unsigned long long _indexingHash;
@property (nonatomic, getter=_isUserConfirmationRequired, setter=_setUserConfirmationRequired:) _Bool _userConfirmationRequired;
@property (nonatomic, readonly) INIntentCodableDescription *_codableDescription;
@property (nonatomic, setter=_setShouldForwardToAppOnSuccess:) _Bool _shouldForwardToAppOnSucccess;
@property (retain, nonatomic, setter=_setParameterContexts:) INParameterContexts *_parameterContexts;
@property (nonatomic, readonly) long long _preferredInteractionDirection;
@property (nonatomic, readonly) NSArray *_codableAttributes;
@property (nonatomic, readonly) NSOrderedSet *_displayOrderedAttributes;
@property (copy, nonatomic, readonly) NSString *intentDescription;
@property (copy, nonatomic) NSString *suggestedInvocationPhrase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *verb;
@property (copy, nonatomic) NSDictionary *parametersByName;

+ (void)initialize;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)intentDescription;
+ (id)typeName;
+ (id)_ignoredParameters;
+ (id)_sharedExtensionContextUUIDForIntentClassName:(id)arg1;
+ (void)_setSharedExtensionContextUUID:(id)arg1 forIntentClassName:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)valueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)_className;
- (id)keyImage;
- (id)_intents_bundleIdForDisplay;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dictionaryRepresentation;
- (id)valueForProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)_injectProxiesForImagesUsingCustomCodableStrategy:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxiesForImagesUsingIntentSlotDescriptionStrategy:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxiesForParameterImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxyForDefaultImage:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (_Bool)configureAttributeSet:(id)arg1 includingData:(_Bool)arg2;
- (id)_spotlightContentType;
- (id)intentSlotDescriptions;
- (id)localizeValueOfSlotDescription:(id)arg1 forLanguage:(id)arg2;
- (id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id *)arg4;
- (id)_titleForLanguage:(id)arg1;
- (id)_titleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (id)_localizedCombinationStringForKey:(id)arg1 value:(id)arg2 localizationTable:(id)arg3 bundleURL:(id)arg4 language:(id)arg5;
- (id)_subtitleForLanguage:(id)arg1;
- (id)_subtitleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (id)_intents_bundleIdForLaunching;
- (id)_intents_launchIdForCurrentPlatform;
- (id)_intents_bestBundleIdentifier;
- (id)_defaultImageName;
- (_Bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)_isValidKey:(id)arg1;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (id)_keyImageWithIntentDescriptionStrategy;
- (id)_redactedDictionaryRepresentation;
- (_Bool)isGenericIntent;
- (void)trimDataAgainstTCCForAuditToken:(CDStruct_6ad76789)arg1 bundle:(id)arg2;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;
- (id)_initWithIdentifier:(id)arg1 schema:(id)arg2 name:(id)arg3 data:(id)arg4;
- (void)_setIntentCategory:(long long)arg1;
- (void)_setCategoryVerb:(id)arg1;
- (void)setImage:(id)arg1 forParameterNamed:(id)arg2;
- (id)imageForParameterNamed:(id)arg1;
- (id)_keyCodableAttributes;
- (void)_setImage:(id)arg1 forParameter:(id)arg2;
- (id)_imageForParameter:(id)arg1;
- (id)_querySchemaWithBlock:(CDUnknownBlockType)arg1 contentOptions:(unsigned long long)arg2;
- (_Bool)_supportsBackgroundExecutionWithOptions:(unsigned long long)arg1;
- (id)_nonNilParameters;
- (id)_displayOrderedNonNilParameters;
- (id)_emptyCopy;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (void)_updateWithJSONDictionary:(id)arg1;
- (id)_intentInstanceDescription;
- (_Bool)_isValueValidForKey:(id)arg1 unsupportedReason:(id *)arg2;
- (id)_inCodable;
- (_Bool)_enumerateWithValueProcessingBlock:(CDUnknownBlockType)arg1;

@end
