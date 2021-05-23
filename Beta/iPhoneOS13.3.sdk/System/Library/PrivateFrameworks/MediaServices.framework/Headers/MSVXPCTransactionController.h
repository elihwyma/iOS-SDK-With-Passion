/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface MSVXPCTransactionController : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMapTable *_openTransactions;
    _Bool _inTransaction;
    NSObject<OS_dispatch_source> *_signalUSR2DispatchSource;
}

@property (nonatomic, readonly, getter=isInTransaction) _Bool inTransaction;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)isTransactionActive:(id)arg1;
- (id)activeTransactions;
- (void)addActiveTransaction:(id)arg1;
- (void)removeActiveTransaction:(id)arg1;
- (void)_setupSignalHandler;
- (void)_tearDownSignalHandler;
- (void)_onQueueUpdateInternalTransactionState;
- (void)_onQueueCleanupEndedTransactions;
- (void)_saveActiveTransactionsToFile;

@end
