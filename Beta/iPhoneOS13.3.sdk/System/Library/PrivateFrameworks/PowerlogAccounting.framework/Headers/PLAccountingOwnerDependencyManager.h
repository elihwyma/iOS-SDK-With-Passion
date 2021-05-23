/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <Foundation/NSObject.h>

#import <PowerlogAccounting/Swift-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, PLMonotonicTimer;

@protocol OS_dispatch_queue;

@interface PLAccountingOwnerDependencyManager : NSObject <Swift>

{
    int _numDependencies;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_dependencyIDToObservingOwners;
    NSMutableDictionary *_dependencyIDToDependencies;
    NSMutableDictionary *_ownerIDToObservingDependencies;
    NSMutableDictionary *_ownerIDToLastOwner;
    NSMutableSet *_ownersRepository;
    PLMonotonicTimer *_freeTimer;
}

@property (retain) NSMutableDictionary *dependencyIDToObservingOwners;
@property (retain) NSMutableDictionary *dependencyIDToDependencies;
@property int numDependencies;
@property (retain) NSMutableDictionary *ownerIDToObservingDependencies;
@property (retain) NSMutableDictionary *ownerIDToLastOwner;
@property (retain) NSMutableSet *ownersRepository;
@property (retain) PLMonotonicTimer *freeTimer;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)freeTimerInterval;
+ (int)maxOwners;
+ (int)maxDependencies;

- (id)init;
- (void)addDependency:(id)arg1;
- (void)addOwner:(id)arg1;
- (id)ownerIDsForDependency:(id)arg1;
- (id)lastOwnerForOwnerID:(id)arg1;
- (void)startObservingOwnerID:(id)arg1 forDependency:(id)arg2;
- (void)stopObservingOwnerID:(id)arg1 forDependency:(id)arg2;
- (void)canFreeDependency:(id)arg1;
- (void)notifyDependenciesWithOwner:(id)arg1;
- (void)notifyOwnersWithDependency:(id)arg1;
- (void)updateLastDependencyID:(id)arg1 withEndDate:(id)arg2;
- (void)reloadDependenciesNewerThanDate:(id)arg1;
- (id)dependencyIDsForOwner:(id)arg1;
- (id)_lastDependencyForDependencyID:(id)arg1;
- (id)lastDependencyForDependencyID:(id)arg1;
- (id)dependenciesWithDependencyID:(id)arg1 withRange:(id)arg2;
- (void)startObservingDependencyID:(id)arg1 forOwner:(id)arg2;
- (void)stopObservingDependencyID:(id)arg1 forOwner:(id)arg2;
- (void)canFreeOwner:(id)arg1;
- (void)freeExpiredOwnersAtNow:(id)arg1;
- (void)freeExpiredDependenciesAtNow:(id)arg1;

@end
