/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INCodableDescription, INImage, INIntentResponseCodableCode, INIntentResponseDescription, NSDictionary, NSString, NSUserActivity, PBCodable, _INPBIntentResponse;

@interface INIntentResponse : NSObject <Swift>

{
    _Bool __userConfirmationRequired;
    long long _code;
    _INPBIntentResponse *_backingStore;
    PBCodable *_responseMessagePBRepresentation;
    INCodableDescription *_codableDescription;
    NSUserActivity *_userActivity;
    long long __stage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) long long _intents_toggleState;
@property (nonatomic, readonly, getter=_isSuccess) _Bool _success;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) INImage *_keyImage;
@property (nonatomic, setter=_setStage:) long long _stage;
@property (retain, nonatomic, setter=_setResponseMessagePBRepresentation:) PBCodable *_responseMessagePBRepresentation;
@property (nonatomic, readonly) NSDictionary *_JSONDictionaryRepresentation;
@property (copy, nonatomic, readonly) _INPBIntentResponse *backingStore;
@property (retain, nonatomic, setter=_setPayloadResponseTypeName:) NSString *_payloadResponseTypeName;
@property (nonatomic) long long code;
@property (nonatomic, readonly) long long _intentResponseCode;
@property (nonatomic, readonly) INIntentResponseCodableCode *_intentResponseCodableCode;
@property (nonatomic, readonly) INIntentResponseDescription *_instanceDescription;
@property (nonatomic, readonly) INCodableDescription *_codableDescription;
@property (nonatomic, readonly) _Bool _userConfirmationRequired;
@property (nonatomic, readonly) _Bool _shouldForwardIntentToApp;
@property (nonatomic, setter=_setRequiresProtectedData:) _Bool _requiresProtectedData;
@property (nonatomic, readonly) NSString *_className;
@property (nonatomic, readonly) long long _type;
@property (nonatomic, setter=_setRequiresAuthentication:) _Bool _requiresAuthentication;
@property (copy, nonatomic) NSUserActivity *userActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *propertiesByName;

+ (void)initialize;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (_Bool)supportsSecureCoding;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;
+ (int)_typeFromCode:(long long)arg1;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (id)responseSuccess;
+ (id)responseFailure;
+ (long long)_codeFromIntentResponseCode:(long long)arg1;
+ (long long)_intentHandlingStatusFromCode:(long long)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForKey:(id)arg1;
- (long long)_code;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dictionaryRepresentation;
- (id)valueForProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (_Bool)_commonInit;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithBackingStore:(id)arg1;
- (long long)_codeWithName:(id)arg1;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (long long)_intentHandlingStatus;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)intentSlotDescriptions;
- (id)localizeValueOfSlotDescription:(id)arg1 forLanguage:(id)arg2;
- (_Bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)_isValidKey:(id)arg1;
- (id)_responseTemplateForLanguage:(id)arg1 requiresSiriCompatibility:(_Bool)arg2;
- (id)_originatingBundleIdentifier;
- (id)_propertiesByNameForLanguage:(id)arg1;
- (id)_responseTemplateForLanguage:(id)arg1;
- (id)_renderedResponseForLanguage:(id)arg1 requiresSiriCompatibility:(_Bool)arg2;
- (void)_updateWithJSONDictionary:(id)arg1;
- (id)_inCodable;
- (id)initWithPropertiesByName:(id)arg1;
- (id)_payloadResponseMessageData;
- (void)_setPayloadResponseMessageData:(id)arg1;
- (void)_setCode:(long long)arg1;
- (long long)_stageWithName:(id)arg1;
- (id)_querySchemaWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_enumerateWithValueProcessingBlock:(CDUnknownBlockType)arg1;

@end
