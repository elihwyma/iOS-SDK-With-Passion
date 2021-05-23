/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@interface NSAutoreleasePool : NSObject

{
    void *_token;
    void *_reserved3;
    void *_reserved2;
    void *_reserved;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)addObject:(id)arg1;
+ (void)showPools;
+ (void)releaseAllPools;
+ (unsigned long long)autoreleasedObjectCount;
+ (unsigned long long)topAutoreleasePoolCount;
+ (_Bool)autoreleasePoolExists;
+ (void)enableRelease:(_Bool)arg1;
+ (void)enableFreedObjectCheck:(_Bool)arg1;
+ (unsigned long long)poolCountHighWaterMark;
+ (void)setPoolCountHighWaterMark:(unsigned long long)arg1;
+ (unsigned long long)poolCountHighWaterResolution;
+ (void)setPoolCountHighWaterResolution:(unsigned long long)arg1;
+ (unsigned long long)totalAutoreleasedObjects;
+ (void)resetTotalAutoreleasedObjects;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)addObject:(id)arg1;
- (void)drain;

@end
