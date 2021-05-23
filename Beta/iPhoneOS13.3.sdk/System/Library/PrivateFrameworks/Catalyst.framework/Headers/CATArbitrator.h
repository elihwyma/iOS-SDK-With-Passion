/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface CATArbitrator : NSObject

{
    NSMutableDictionary *mRegistrationByKey;
}

- (id)init;
- (id)debugDescription;
- (id)resourcesForKeys:(id)arg1 exclusive:(_Bool)arg2;
- (void)registerResource:(id)arg1 forKey:(id)arg2 maxConcurrentCount:(unsigned long long)arg3;
- (id)resourceForKey:(id)arg1 exclusive:(_Bool)arg2;
- (id)waitForResourcesForKeys:(id)arg1 exclusive:(_Bool)arg2 delegateQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)stopWaiting:(id)arg1;
- (void)registerResource:(id)arg1 forKey:(id)arg2;
- (unsigned long long)unregisterResourceForKey:(id)arg1;

@end
