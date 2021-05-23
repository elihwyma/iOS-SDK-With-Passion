/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCAccessChecker.h>

@class NSArray;

@interface FCMultiAccessChecker : FCAccessChecker

{
    NSArray *_accessCheckers;
}

@property (copy, nonatomic, readonly) NSArray *accessCheckers;

- (id)init;
- (_Bool)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)canSynchronouslyCheckAccessToItem:(id)arg1;
- (void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAccessCheckers:(id)arg1;

@end
