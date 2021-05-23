/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface EDTransactionService : NSObject

{
    NSString *_serviceName;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

- (id)initWithServiceName:(id)arg1;
- (void)endTransaction:(id)arg1;
- (id)startTransaction;
- (_Bool)hasPendingTransactions;
- (void)resetPendingTransactions;

@end
