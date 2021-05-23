/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class HMHomeManager, NSArray, NSHashTable, NSString;

@protocol OS_dispatch_group;

@interface WFHomeManager : NSObject

{
    _Bool _hasLoadedHomes;
    _Bool _loading;
    NSArray *_homes;
    NSHashTable *_eventObservers;
    HMHomeManager *_homeManager;
    NSObject<OS_dispatch_group> *_loadHomesGroup;
}

@property (nonatomic, readonly) NSHashTable *eventObservers;
@property (retain, nonatomic) HMHomeManager *homeManager;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *loadHomesGroup;
@property (nonatomic, getter=isLoading) _Bool loading;
@property (nonatomic, readonly) _Bool hasLoadedHomes;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) NSArray *homes;
@property (nonatomic, readonly) NSArray *homesToWhichWeHaveAdminAccess;
@property (nonatomic, readonly) NSArray *homesToWhichWeCanAddHomeAutomations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)reloadData;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)primaryHome;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)ensureHomesAreLoadedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addEventObserver:(id)arg1;
- (void)removeEventObserver:(id)arg1;
- (id)homeNamed:(id)arg1;
- (id)homeWithIdentifier:(id)arg1;
- (id)sceneNamed:(id)arg1 inHome:(id)arg2;
- (id)serviceWithIdentifier:(id)arg1 inHome:(id)arg2;

@end
