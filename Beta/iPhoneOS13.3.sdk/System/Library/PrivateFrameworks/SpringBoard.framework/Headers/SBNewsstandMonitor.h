/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSArray, NSString;

@interface SBNewsstandMonitor : NSObject <Swift>

{
    NSArray *_blacklistedBundleIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_blacklistedBundleIdentifiers;

- (id)init;
- (void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)_addObserverForBackgroundUpdateBlacklistChange;
- (void)_handleBackgroundUpdateBlacklistChange;

@end
