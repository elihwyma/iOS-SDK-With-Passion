/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFHandleIntentAction.h>

@class INSchema, NSString, WFIntentDynamicResolutionRequest, WFIntentDynamicResolver;

@interface WFHandleCustomIntentAction : WFHandleIntentAction

{
    NSString *_appIdentifier;
    long long _intentCategory;
    NSString *_localizedName;
    NSString *_className;
    NSString *_bundleIdentifier;
    INSchema *_schema;
    WFIntentDynamicResolver *_dynamicResolver;
    WFIntentDynamicResolutionRequest *_lastDynamicResolutionRequest;
}

@property (copy, nonatomic, readonly) NSString *className;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) INSchema *schema;
@property (copy, nonatomic, readonly) NSString *appIdentifier;
@property (nonatomic, readonly) WFIntentDynamicResolver *dynamicResolver;
@property (retain, nonatomic) WFIntentDynamicResolutionRequest *lastDynamicResolutionRequest;
@property (copy, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)intentCategory;
- (id)intentDescription;
- (id)codableDescription;
- (void)initializeParameters;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (id)generatedIntentWithInput:(id)arg1 error:(id *)arg2;
- (id)slots;
- (void)startExecutingIntent:(id)arg1;
- (void)parameterDefaultSerializedRepresentationDidChange:(id)arg1;
- (id)localizedKeyParameterDisplayName;
- (id)copyWithSerializedParameters:(id)arg1;
- (id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2;
- (id)parameterKeysIgnoredForParameterSummary;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(_Bool)arg2;
- (_Bool)populatesInputFromInputParameter;
- (void)loadPossibleStatesForEnumeration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadDefaultSerializedRepresentationForEnumeration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)enumerationAllowsMultipleValues:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (void)generateSkeletonIntentForDynamicResolver:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)resolveOptionsForUserInput:(id)arg1 forDynamicResolveParameter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)localizedDisambiguationPromptForItems:(id)arg1 intent:(id)arg2 dynamicResolveParameter:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 schema:(id)arg4 className:(id)arg5 bundleIdentifier:(id)arg6;
- (id)parametersByIntentSlotName;
- (void)setupParameter:(id)arg1;
- (id)prettyErrorForIntentsExtensionError:(id)arg1;
- (void)setUpResolverIfNeededForParameter:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)dynamicResolveParameterDidEndResolutionSession:(id)arg1;

@end
