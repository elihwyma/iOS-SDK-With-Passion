/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface ATXGuardedActionBlacklist : NSObject

{
    NSSet *_blacklistedApp;
    NSSet *_blacklistedAction;
    NSSet *_blacklistedAppAction;
    NSSet *_blacklistedAppForShortcuts;
    NSSet *_blacklistedActionForShortcuts;
    NSSet *_blacklistedAppActionForShortcuts;
    NSSet *_blacklistedAppForPrimaryShortcuts;
    NSSet *_blacklistedActionForPrimaryShortcuts;
    NSSet *_blacklistedAppActionForPrimaryShortcuts;
    NSSet *_prefsBlacklistedApp;
}

@end
