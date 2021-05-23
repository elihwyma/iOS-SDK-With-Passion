/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBImageValue, _INPBString;

@protocol _INPBIntentMetadata <Swift>

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

+ (unsigned short)parameterImagesType;

- (unsigned short)executionContextAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsExecutionContext: /* Error: Ran out of types for this method. */;
- (unsigned short)intentCategoryAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsIntentCategory: /* Error: Ran out of types for this method. */;
- (unsigned short)clearRequiredEntitlements;
- (unsigned short)addRequiredEntitlement: /* Error: Ran out of types for this method. */;
- (unsigned short)requiredEntitlementAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setRequiredEntitlements:count: /* Error: Ran out of types for this method. */;
- (unsigned short)requiredEntitlementsAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsRequiredEntitlements: /* Error: Ran out of types for this method. */;
- (unsigned short)clearForceNeedsValueForParameters;
- (unsigned short)addForceNeedsValueForParameter: /* Error: Ran out of types for this method. */;
- (unsigned short)forceNeedsValueForParameterAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)idiomAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsIdiom: /* Error: Ran out of types for this method. */;
- (unsigned short)clearParameterImages;
- (unsigned short)addParameterImages: /* Error: Ran out of types for this method. */;
- (unsigned short)parameterImagesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)triggerMethodAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsTriggerMethod: /* Error: Ran out of types for this method. */;

@end
