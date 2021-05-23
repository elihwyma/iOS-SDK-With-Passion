/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPrivateDataTransactionQueue : NSObject

{
    FCFileCoordinatedDictionary *_fileCoordinatedDictionary;
}

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (id)init;
- (id)initWithFileURL:(id)arg1;
- (void)enqueueTransaction:(id)arg1 withMaxTransactionCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)peekAtTransactionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)dequeueTransactionsWithCompletion:(CDUnknownBlockType)arg1;

@end
