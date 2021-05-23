/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MNXPCTransactionManager : NSObject

{
    NSObject<OS_os_transaction> *_xpcTransaction;
    NSHashTable *_requesters;
}

+ (id)sharedInstance;

- (void)addHighMemoryThresholdRequest:(id)arg1;
- (void)removeHighMemoryThresholdRequest:(id)arg1 afterDelay:(double)arg2;

@end
