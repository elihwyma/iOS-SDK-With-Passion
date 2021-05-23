/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface CKDPowerAssertionObserver : NSObject

{
    NSMapTable *_operationsHoldingPowerAssertionsByID;
}

@property (retain, nonatomic) NSMapTable *operationsHoldingPowerAssertionsByID;

+ (id)sharedObserver;

- (id)init;
- (id)_init;
- (id)CKStatusReportArray;
- (void)operationDidReleasePowerAssertion:(id)arg1;
- (void)operationDidAcquirePowerAssertion:(id)arg1;

@end
