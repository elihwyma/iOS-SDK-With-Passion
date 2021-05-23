/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSSet, NSString;

@protocol OS_dispatch_queue;

@interface WFActionRegistry : NSObject

{
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_stateAccessQueue;
    NSObject<OS_dispatch_queue> *_cacheUpdateAndFillQueue;
    NSArray *_actionProvidersForFilling;
    NSArray *_actionProvidersForLoading;
    NSDictionary *_actionsByIdentifier;
    NSMapTable *_actionsByActionProvider;
    NSDictionary *_actionsByCategory;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cacheUpdateAndFillQueue;
@property (nonatomic, readonly) NSArray *actionProvidersForFilling;
@property (nonatomic, readonly) NSArray *actionProvidersForLoading;
@property (nonatomic, readonly) NSDictionary *actionsByIdentifier;
@property (nonatomic, readonly) NSMapTable *actionsByActionProvider;
@property (nonatomic, readonly) NSDictionary *actionsByCategory;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) NSSet *actions;
@property (nonatomic, readonly) NSSet *categories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedRegistry;

- (id)init;
- (void)fill;
- (id)createActionWithShortcut:(id)arg1 error:(id *)arg2;
- (id)handleIntentActionForDonatedIntent:(id)arg1;
- (id)createActionWithDonation:(id)arg1;
- (void)actionProviderDidChange:(id)arg1 updatedActions:(id)arg2 removedActions:(id)arg3 addedActions:(id)arg4;
- (id)createActionWithIdentifier:(id)arg1 serializedParameters:(id)arg2;
- (id)createActionsWithIdentifiers:(id)arg1 serializedParameterArray:(id)arg2;
- (id)actionsForCategory:(id)arg1;
- (id)actionsForAppWithIdentifier:(id)arg1;
- (void)updateCachesAndFill;
- (void)fillActionProviders:(id)arg1;
- (void)updateCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)setActions:(id)arg1 forProvider:(id)arg2;
- (void)removeActionsWithIdentifiers:(id)arg1 fromActionProvider:(id)arg2;
- (void)addActions:(id)arg1 fromActionProvider:(id)arg2;
- (id)residentCompatibleActionsFromActions:(id)arg1 inHome:(id)arg2;
- (id)updatedActionForResidentCompatibility:(id)arg1 inHome:(id)arg2;
- (id)residentCompatibleActionsForHome:(id)arg1;
- (id)residentCompatibleActionsForCategory:(id)arg1 home:(id)arg2;
- (id)residentBasedActionsForHome:(id)arg1 residentCompatible:(_Bool)arg2;
- (id)suggestionsForHome:(id)arg1 includingRelatedActions:(_Bool)arg2;

@end
