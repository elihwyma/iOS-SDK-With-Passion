/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol DATransactionMonitorDelegate;

@interface DATransactionMonitor : NSObject

{
    int _transactionCount;
    NSMutableArray *_transactions;
    id <DATransactionMonitorDelegate> _transactionMonitorDelegate;
}

@property (nonatomic) int transactionCount;
@property (retain, nonatomic) NSMutableArray *transactions;
@property (weak, nonatomic) id <DATransactionMonitorDelegate> transactionMonitorDelegate;

+ (id)sharedTransactionMonitor;

- (id)init;
- (void)incrementTransactionCountForTransaction:(id)arg1;
- (void)decrementTransactionCountForTransaction:(id)arg1;

@end
