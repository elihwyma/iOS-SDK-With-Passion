/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSLock;

@protocol OS_os_transaction;

@interface MNXPCTransactionCounter : NSObject

{
    NSObject<OS_os_transaction> *_osTransaction;
    NSLock *_countLock;
    unsigned long long _count;
}

- (id)init;
- (void)dealloc;
- (unsigned long long)count;
- (void)decrement;
- (void)increment:(id)arg1;

@end
