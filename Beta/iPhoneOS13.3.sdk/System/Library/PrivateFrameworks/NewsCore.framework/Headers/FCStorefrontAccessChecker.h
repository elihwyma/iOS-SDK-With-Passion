/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCAccessChecker.h>

@interface FCStorefrontAccessChecker : FCAccessChecker

- (id)init;
- (_Bool)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)canSynchronouslyCheckAccessToItem:(id)arg1;

@end
