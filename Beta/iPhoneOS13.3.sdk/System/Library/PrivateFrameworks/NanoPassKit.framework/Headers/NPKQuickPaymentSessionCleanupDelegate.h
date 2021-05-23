/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NPKQuickPaymentSessionCleanupDelegate : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)paymentSession:(id)arg1 didCompleteForReason:(unsigned long long)arg2 withTransactionContext:(id)arg3;

@end
