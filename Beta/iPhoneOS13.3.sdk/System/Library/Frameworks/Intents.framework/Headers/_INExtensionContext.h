/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSExtensionContext.h>

@class NSObject, NSString;

@protocol INIntentHandlerProvidingPrivate, OS_dispatch_queue;

@interface _INExtensionContext : NSExtensionContext

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isPrivateExtension;
    id _handlerForIntent;
    id <INIntentHandlerProvidingPrivate> _extensionHandler;
    id _activeHandlerForIntent;
}

@property (retain, nonatomic) id activeHandlerForIntent;
@property (nonatomic, readonly) id <INIntentHandlerProvidingPrivate> _extensionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (oneway void)completeTransaction;
- (oneway void)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
- (oneway void)stopSendingUpdatesForIntent:(id)arg1;
- (oneway void)confirmationResponseForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)handleIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)handleIntent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)cancelTransactionDueToTimeout;
- (oneway void)getIntentParameterOptions:(id)arg1 forIntent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (oneway void)getIntentParameterDefaultValue:(id)arg1 forIntent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (oneway void)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (oneway void)resolveIntentSlots:(id)arg1 forIntent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (oneway void)confirmIntent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (oneway void)handleIntent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (oneway void)beginTransactionWithIntentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)completeTransactionWithIntentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getParameterOptionsForParameterNamed:(id)arg1 intent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getSupportsParameterOptionsForParameterNamed:(id)arg1 intent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithInputItems:(id)arg1 privateIntentHandlerProvider:(id)arg2;
- (id)initWithInputItems:(id)arg1 extension:(id)arg2;
- (void)_resolveIntentSlot:(id)arg1 forIntent:(id)arg2 intentHandler:(id)arg3 updateIntent:(_Bool)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)_invokeIntentHandlerMethodForIntent:(id)arg1 intentHandler:(id)arg2 parameterNamed:(id)arg3 keyForSelectors:(id)arg4 executionHandler:(CDUnknownBlockType)arg5 unimplementedHandler:(CDUnknownBlockType)arg6;
- (CDUnknownBlockType)_processIntentResponseCompletionHandlerWithCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_processResolutionDataProviderForIntent:(id)arg1 intentSlotDescription:(id)arg2 updateIntent:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)_processOptionsForIntent:(id)arg1 parameterNamed:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_processDefaultValue:(id)arg1 forIntent:(id)arg2 parameterNamed:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_updateIntent:(id)arg1 intentSlotDescription:(id)arg2 resolutionResultDataProvider:(id)arg3;
- (void)_processIntentResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deliverIntent:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_validateExtension;
- (void)_startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
- (void)_stopSendingUpdatesForIntent:(id)arg1;
- (void)_beginTransactionWithIntentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_completeTransactionWithIntentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
