/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <NSObject.h>

@class MFBaseFilterDataConsumer, MFCountingDataConsumer, NSMutableArray;

@interface MFIMAPDownload : NSObject

{
    unsigned int _uid;
    NSMutableArray *_pendingFetchResults;
    MFCountingDataConsumer *_countingConsumer;
    MFBaseFilterDataConsumer *_mainConsumer;
}

@property (nonatomic, readonly) MFBaseFilterDataConsumer *mainConsumer;

- (id)error;
- (void)setError:(id)arg1;
- (unsigned int)uid;
- (_Bool)isComplete;
- (unsigned long long)expectedLength;
- (unsigned long long)bytesFetched;
- (_Bool)isSuccessful;
- (id)initWithUid:(unsigned int)arg1;
- (void)handleFetchResult:(id)arg1;
- (void)processResults;
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (unsigned long long)lengthOfDataBeforeLineConversion;

@end
