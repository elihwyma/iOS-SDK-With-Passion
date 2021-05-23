/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface BWSimpleCache : NSObject

{
    NSMutableDictionary *_cache;
    struct OpaqueFigSimpleMutex *_propertyMutex;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)cacheObject:(id)arg1 forKey:(id)arg2;
- (id)copyAndClearObjectForKey:(id)arg1;

@end
