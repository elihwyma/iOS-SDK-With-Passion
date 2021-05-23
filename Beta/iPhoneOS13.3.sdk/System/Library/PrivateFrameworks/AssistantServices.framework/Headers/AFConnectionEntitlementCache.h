/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AFConnectionEntitlementCache : NSObject

{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_bundleIDToPIDMap;
}

+ (id)sharedCache;

- (id)init;
- (_Bool)hasEntitlement:(id)arg1 forPID:(int)arg2;
- (void)cacheEntitlement:(id)arg1 forPID:(int)arg2 bundleID:(id)arg3;

@end
