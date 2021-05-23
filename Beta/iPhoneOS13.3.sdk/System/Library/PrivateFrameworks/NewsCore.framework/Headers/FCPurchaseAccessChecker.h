/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCAccessChecker.h>

@protocol FCPaidAccessCheckerType;

@interface FCPurchaseAccessChecker : FCAccessChecker

{
    id <FCPaidAccessCheckerType> _paidAccessChecker;
}

@property (nonatomic, readonly) id <FCPaidAccessCheckerType> paidAccessChecker;

- (id)init;
- (_Bool)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)canSynchronouslyCheckAccessToItem:(id)arg1;
- (void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPaidAccessChecker:(id)arg1;

@end
