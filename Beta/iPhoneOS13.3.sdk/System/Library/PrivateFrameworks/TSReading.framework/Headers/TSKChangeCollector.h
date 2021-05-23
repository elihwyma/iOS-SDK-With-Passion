/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSKChangeCollector : NSObject

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)_singletonAlloc;
+ (id)threadCollector;

- (unsigned long long)retainCount;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;
- (void)beginCollectingChanges;
- (id)endCollectingChanges;
- (id)peekCollectedChanges;

@end
