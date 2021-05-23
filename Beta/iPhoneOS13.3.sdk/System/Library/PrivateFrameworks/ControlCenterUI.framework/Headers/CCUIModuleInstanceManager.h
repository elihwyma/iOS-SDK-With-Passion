/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

@class CCSModuleRepository, NSArray, NSHashTable, NSMutableDictionary, NSSet, NSString;

@protocol CCUIContentModuleContextDelegate, CCUIControlCenterSystemAgent, OS_dispatch_queue;

@interface CCUIModuleInstanceManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <CCUIControlCenterSystemAgent> _systemAgent;
    CCSModuleRepository *_repository;
    NSMutableDictionary *_moduleInstanceByIdentifier;
    NSHashTable *_observers;
    id <CCUIContentModuleContextDelegate> _contextDelegate;
    NSSet *_enabledModuleIdentifiers;
}

@property (weak, nonatomic) id <CCUIContentModuleContextDelegate> contextDelegate;
@property (copy, nonatomic) NSSet *enabledModuleIdentifiers;
@property (nonatomic, readonly) NSArray *moduleInstances;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;
+ (void)setupSharedInstanceWithSystemAgent:(id)arg1;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)contentModuleContext:(id)arg1 enqueueStatusUpdate:(id)arg2;
- (void)contentModuleContext:(id)arg1 didUpdateHomeGestureDismissalAllowed:(_Bool)arg2;
- (void)requestExpandModuleForContentModuleContext:(id)arg1;
- (void)dismissExpandedViewForContentModuleContext:(id)arg1;
- (void)dismissControlCenterForContentModuleContext:(id)arg1;
- (id)_initWithSystemAgent:(id)arg1 repository:(id)arg2;
- (void)_updateModuleInstances;
- (id)_loadBundlesForModuleMetadata:(id)arg1;
- (id)_instantiateModuleWithMetadata:(id)arg1;
- (void)_runBlockOnObservers:(CDUnknownBlockType)arg1;
- (void)_loadBundlesForModuleMetadata:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadableModulesChangedForModuleRepository:(id)arg1;
- (_Bool)loadModuleWithBundleIdentifier:(id)arg1;

@end
