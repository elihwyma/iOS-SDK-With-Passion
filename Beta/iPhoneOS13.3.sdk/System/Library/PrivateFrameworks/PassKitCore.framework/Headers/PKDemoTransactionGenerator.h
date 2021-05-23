/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@interface PKDemoTransactionGenerator : NSObject

+ (void)generateDemoFilesForPasses:(id)arg1 peerPaymentPassSerialNumber:(id)arg2;
+ (void)demoTransactionsForPass:(id)arg1 paymentApplication:(id)arg2 transactions:(id *)arg3 events:(id *)arg4;
+ (void)generateDemoFiles;
+ (void)demoTransactionsAndEventsForPass:(id)arg1 transactions:(id *)arg2 events:(id *)arg3;

@end
