/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface ATXGuardedAppBlacklist : NSObject

{
    NSMutableSet *_blacklist;
    NSMutableDictionary *_prefsChangeHandlers;
    int _nextPrefsChangeHandlerToken;
}

- (id)init;

@end
