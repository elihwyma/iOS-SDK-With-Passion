/*
 Image: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PLClientLogger : NSObject

+ (id)sharedInstance;
+ (_Bool)allowMessageOnDevice;

@end
