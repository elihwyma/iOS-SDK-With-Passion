/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, _CDClientContext;

@interface PPAppLaunchMonitorGuardedData : NSObject

{
    NSMutableDictionary *handlers;
    unsigned long long nextToken;
    _Bool isRegistered;
    _CDClientContext *clientContext;
}

@end
