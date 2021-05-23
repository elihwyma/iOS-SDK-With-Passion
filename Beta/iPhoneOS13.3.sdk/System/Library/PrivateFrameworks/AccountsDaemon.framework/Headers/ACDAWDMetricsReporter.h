/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ACDAWDMetricsReporter : NSObject

+ (void)landmarkEventForAccountType:(id)arg1 count:(unsigned int)arg2;
+ (void)renewCredentialsBeginForAccountType:(id)arg1 avoidUI:(_Bool)arg2 shouldForce:(_Bool)arg3 requestedBy:(id)arg4;
+ (void)renewCredentialsEndForAccountType:(id)arg1 result:(unsigned int)arg2;

@end
