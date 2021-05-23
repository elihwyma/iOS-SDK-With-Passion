/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class FCFileCoordinatedTodayDropbox, FCFileCoordinatedTodayPrivateDataTransactionQueue, NSString;

@interface NTWritablePrivateDataStorage : NSObject

{
    FCFileCoordinatedTodayDropbox *_dropbox;
    FCFileCoordinatedTodayPrivateDataTransactionQueue *_transactionQueue;
}

@property (retain, nonatomic) FCFileCoordinatedTodayDropbox *dropbox;
@property (retain, nonatomic) FCFileCoordinatedTodayPrivateDataTransactionQueue *transactionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)writeSeenHistoryItems:(id)arg1;
- (void)writeReadHistoryItem:(id)arg1;
- (id)initWithDropbox:(id)arg1 transactionQueue:(id)arg2;

@end
