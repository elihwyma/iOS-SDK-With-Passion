/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCVTPWrapper : NSObject

+ (id)targetQueue;
+ (void)startVTP;
+ (void)stopVTP;
+ (id)connectionContext;

@end
