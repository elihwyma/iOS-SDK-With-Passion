/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VNRPNTrackerEspressoModelCacheManager : NSObject

{
    NSMutableDictionary *_rpnEspressoResourcesKeyToEspressoResourcesCache;
    NSLock *_rpnEspressoResourcesKeyToEspressoResourcesCacheLock;
    NSString *_espressoModelName;
}

@property (readonly) NSString *espressoModelName;

+ (id)cacheKeyFromOptions:(id)arg1 error:(id *)arg2;
+ (id)cacheOptionsKeys;

- (void)dealloc;
- (id)initWithRPNEspressoModelName:(id)arg1;
- (id)espressoResourcesFromOptions:(id)arg1 error:(id *)arg2;

@end
