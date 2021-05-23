/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@interface RESingleton : NSObject

+ (id)sharedInstance;
+ (id)_classKey;
+ (void)_incrementSingletonCache;
+ (void)_decrementSingletonCache;

- (id)_init;

@end
