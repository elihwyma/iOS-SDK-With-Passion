//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, RBSProcessMonitor;

@interface BKSApplicationStateMonitor : NSObject
{
//     struct os_unfair_lock_s _lock;
    RBSProcessMonitor *_monitor;
    NSArray *_interestedAssertionReasons;
    BOOL _elevatedPriority;
    unsigned int _interestedStates;
    NSArray *_interestedBundleIDs;
    id /* CDUnknownBlockType */ _handler;
}

// - (void).cxx_destruct;
- (void)lock_updateConfiguration;
- (id)_legacyInfoForProcess:(id)arg1 state:(id)arg2;
- (id)_legacyInfoForProcess:(id)arg1;
- (BOOL)_clientSubscribedToThisReasonChange:(id)arg1;
- (BOOL)_clientSubscribedToThisStateChange:(id)arg1 state:(id)arg2 prevState:(id)arg3;
- (unsigned int)_legacyStateForProcess:(id)arg1 state:(id)arg2;
- (void)invalidate;
- (id)bundleInfoValueForKey:(id)arg1 PID:(int)arg2;
- (BOOL)isApplicationBeingDebugged:(id)arg1;
- (unsigned int)mostElevatedApplicationStateForPID:(int)arg1;
- (unsigned int)applicationStateForApplication:(id)arg1;
- (id)applicationInfoForPID:(int)arg1;
- (id)applicationInfoForApplication:(id)arg1;
- (void)applicationInfoForPID:(int)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)applicationInfoForApplication:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updateInterestedAssertionReasons:(id)arg1;
- (void)updateInterestedBundleIDs:(id)arg1 states:(unsigned int)arg2;
- (void)updateInterestedStates:(unsigned int)arg1;
- (void)updateInterestedBundleIDs:(id)arg1;
@property(readonly, nonatomic) BOOL elevatedPriority; // @synthesize elevatedPriority=_elevatedPriority;
@property(readonly, nonatomic) unsigned int interestedStates; // @synthesize interestedStates=_interestedStates;
@property(readonly, copy, nonatomic) NSArray *interestedBundleIDs; // @synthesize interestedBundleIDs=_interestedBundleIDs;
@property(copy, nonatomic) id /* CDUnknownBlockType */ handler; // @synthesize handler=_handler;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1 bundleIDs:(id)arg2 states:(unsigned int)arg3 elevatedPriority:(BOOL)arg4;
- (id)initWithBundleIDs:(id)arg1 states:(unsigned int)arg2 isUserInteractive:(BOOL)arg3;
- (id)initWithBundleIDs:(id)arg1 states:(unsigned int)arg2 elevatedPriority:(BOOL)arg3;
- (id)initWithBundleIDs:(id)arg1 states:(unsigned int)arg2;
- (id)init;

@end

