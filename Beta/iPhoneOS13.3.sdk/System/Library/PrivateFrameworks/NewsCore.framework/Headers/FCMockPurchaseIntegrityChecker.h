/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@interface FCMockPurchaseIntegrityChecker : NSObject

{
    unsigned long long _mockedCheckResult;
}

@property (nonatomic) unsigned long long mockedCheckResult;

+ (id)mockPurchaseIntegrityCheckForSuccess;
+ (id)mockPurchaseIntegrityCheckForFailure;

- (void)isUserEntitledToSubscriptionForPurchaseID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
