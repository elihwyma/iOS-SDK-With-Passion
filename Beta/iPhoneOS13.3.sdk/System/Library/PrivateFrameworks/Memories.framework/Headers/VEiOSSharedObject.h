/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VEiOSSharedObject : NSObject

+ (id)sharedInstance;
+ (void)purgeSharedInstance;
+ (_Bool)sharedInstanceExists;

@end
