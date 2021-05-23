/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSBundle, NSDictionary, NSMutableDictionary, NSSet, NSString, NSUUID;

@protocol PKPlugIn;

@interface NSExtension : NSObject

{
    struct os_unfair_lock_s _unfairLock;
    _Bool _observingHostAppStateChanges;
    NSString *_identifier;
    NSString *_version;
    NSDictionary *_attributes;
    NSDictionary *_infoDictionary;
    NSString *_extensionPointIdentifier;
    CDUnknownBlockType _requestCompletionBlock;
    CDUnknownBlockType _requestCancellationBlock;
    CDUnknownBlockType _requestInterruptionBlock;
    id __stashedPlugInConnection;
    id <PKPlugIn> __plugIn;
    NSBundle *__extensionBundle;
    NSString *__localizedName;
    NSString *__localizedShortName;
    CDUnknownBlockType __requestPostCompletionBlock;
    CDUnknownBlockType __requestPostCompletionBlockWithItems;
    NSMutableDictionary *__extensionExpirationIdentifiers;
    NSMutableDictionary *__extensionServiceConnections;
    NSMutableDictionary *__extensionContexts;
    NSSet *__allowedErrorClasses;
    NSUUID *_connectionUUID;
}

@property (nonatomic, readonly, getter=_isMarkedNew) _Bool _markedNew;
@property (retain) id _stashedPlugInConnection;
@property (retain, nonatomic, setter=_setPlugIn:) id <PKPlugIn> _plugIn;
@property (retain, nonatomic, setter=_setExtensionBundle:) NSBundle *_extensionBundle;
@property (copy, nonatomic) NSString *_localizedName;
@property (copy, nonatomic) NSString *_localizedShortName;
@property (copy, nonatomic) CDUnknownBlockType _requestPostCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType _requestPostCompletionBlockWithItems;
@property (retain, nonatomic, setter=_setExtensionExpirationsIdentifiers:) NSMutableDictionary *_extensionExpirationIdentifiers;
@property (retain, nonatomic, setter=_setExtensionServiceConnections:) NSMutableDictionary *_extensionServiceConnections;
@property (retain, nonatomic, setter=_setExtensionContexts:) NSMutableDictionary *_extensionContexts;
@property (copy, nonatomic, getter=_extensionState, setter=_setExtensionState:) NSDictionary *_extensionState;
@property (copy, nonatomic, setter=_setAllowedErrorClasses:) NSSet *_allowedErrorClasses;
@property (nonatomic, getter=_isObservingHostAppStateChanges, setter=_setObservingHostAppStateChanges:) _Bool observingHostAppStateChanges;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSDictionary *attributes;
@property (copy, nonatomic) NSDictionary *infoDictionary;
@property (copy, nonatomic) NSString *extensionPointIdentifier;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSUUID *connectionUUID;
@property (nonatomic, readonly) _Bool optedIn;
@property (copy, nonatomic) CDUnknownBlockType requestCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType requestCancellationBlock;
@property (copy, nonatomic) CDUnknownBlockType requestInterruptionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (void)initializeFiltering;
+ (void)extensionsWithMatchingAttributes:(id)arg1 synchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)extensionWithIdentifier:(id)arg1 excludingDisabledExtensions:(_Bool)arg2 error:(id *)arg3;
+ (id)extensionsWithMatchingAttributes:(id)arg1 error:(id *)arg2;
+ (_Bool)_shouldLogExtensionDiscovery;
+ (void)extensionsWithMatchingAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)extensionWithIdentifier:(id)arg1 error:(id *)arg2;
+ (void)extensionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)extensionWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)beginMatchingExtensionsWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)endMatchingExtensions:(id)arg1;
+ (_Bool)_inputItemsMatchActiveWebPageAlternative:(id)arg1;
+ (id)_inputItemsByApplyingActiveWebPageAlternative:(id)arg1 ifNeededByActivationRule:(id)arg2;
+ (_Bool)_evaluateActivationRule:(id)arg1 withInputItemsIfTheyMatchActiveWebPageAlternative:(id)arg2 matchResult:(out long long *)arg3;
+ (_Bool)_genericValuesMatchActiveWebPageAlternativeWithExtensionItems:(id)arg1 attachmentsLens:(CDUnknownBlockType)arg2 registeredTypeIdentifiersLens:(CDUnknownBlockType)arg3 isActiveWebPageAttachmentCheck:(CDUnknownBlockType)arg4;
+ (_Bool)_evaluateActivationRule:(id)arg1 withDictionaryIfItMatchesActiveWebPageAlternative:(id)arg2 matchResult:(out long long *)arg3;
+ (_Bool)_matchingDictionaryMatchesActiveWebPageAlternative:(id)arg1;
+ (_Bool)_evaluateActivationRuleWithoutWorkarounds:(id)arg1 withExtensionItemsRepresentation:(id)arg2;
+ (id)_dictionaryIncludingOnlyItemsWithRegisteredTypeIdentifier:(id)arg1 fromMatchingDictionary:(id)arg2;
+ (_Bool)evaluateActivationRule:(id)arg1 withExtensionItemsRepresentation:(id)arg2;
+ (id)predicateForActivationRule:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)_extensionContextForUUID:(id)arg1;
- (void)_completeRequestReturningItems:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cancelRequestWithError:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadItemForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_loadPreviewImageForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didShowExtensionManagementInterface;
- (void)_didShowNewExtensionIndicator;
- (void)_resetExtensionState;
- (id)_initWithPKPlugin:(id)arg1;
- (_Bool)_wantsProcessPerRequest;
- (id)_newExtensionContextAndGetConnection:(id *)arg1 assertion:(id)arg2 inputItems:(id)arg3;
- (void)_reallyBeginExtensionRequestWithContext:(id)arg1 extensionServiceConnection:(id)arg2 listenerEndpoint:(id)arg3 synchronously:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_bareExtensionServiceConnection;
- (void)_didCreateExtensionContext:(id)arg1;
- (void)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 listenerEndpoint:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 listenerEndpoint:(id)arg3 error:(id *)arg4;
- (id)_inputItemsByApplyingActiveWebPageAlternativeIfNeeded:(id)arg1;
- (void)_reallyBeginExtensionRequestWithInputItems:(id)arg1 processAssertion:(id)arg2 listenerEndpoint:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_safelyBeginUsingWithOptions:(unsigned long long)arg1 withAssertion_onSafeQueue:(CDUnknownBlockType)arg2;
- (_Bool)_beginUsingAndCreateExtensionAssertion:(id *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 error:(id *)arg3;
- (void)_hostWillEnterForegroundNote:(id)arg1;
- (void)_hostDidEnterBackgroundNote:(id)arg1;
- (void)_hostWillResignActiveNote:(id)arg1;
- (void)_hostDidBecomeActiveNote:(id)arg1;
- (id)_itemProviderForPayload:(id)arg1 extensionContext:(id)arg2;
- (int)_plugInProcessIdentifier;
- (void)_kill:(int)arg1;
- (void)_safelyBeginUsingSynchronously:(_Bool)arg1 options:(unsigned long long)arg2 withAssertion_onSafeQueue:(CDUnknownBlockType)arg3;
- (void)_safelyEndUsingWithProcessAssertion:(id)arg1 continuation:(CDUnknownBlockType)arg2;
- (id)extensionContexts;
- (_Bool)attemptOptIn:(id *)arg1;
- (_Bool)attemptOptOut:(id *)arg1;
- (void)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 error:(id *)arg3;
- (void)beginExtensionRequestWithInputItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)beginExtensionRequestWithInputItems:(id)arg1 error:(id *)arg2;
- (void)cancelExtensionRequestWithIdentifier:(id)arg1;
- (int)pidForRequestIdentifier:(id)arg1;
- (_Bool)_isPhotoServiceAccessGranted;
- (_Bool)_isSystemExtension;
- (void)_safelyBeginUsing:(CDUnknownBlockType)arg1;
- (void)_safelyEndUsing:(CDUnknownBlockType)arg1;
- (void)_dropAssertion;

@end
