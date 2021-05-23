/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSMemoryPressure : NSObject

+ (void)initialize;
+ (void)subscribe:(id)arg1;
+ (id)observable;
+ (id)lastKnownStatus;
+ (id)_memoryPressureStatusForMemoryPressure:(unsigned int)arg1;
+ (void)unsubscribe:(id)arg1;

@end
