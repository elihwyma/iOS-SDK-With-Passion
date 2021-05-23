/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFDAMailAccountConsumer.h>

#import <Message/Swift-Protocol.h>

@class MFActivityMonitor, NSArray, NSConditionLock, NSMutableData, NSMutableDictionary, NSString;

@protocol DAMailboxStreamingContentConsumer;

@interface MFDAMailAccountSyncConsumer : MFDAMailAccountConsumer <Swift>

{
    NSArray *_requestPairs;
    NSString *_accountID;
    MFActivityMonitor *_monitor;
    NSMutableData *_bodyData;
    _Bool _receivedFirstItem;
    _Bool _firstSyncBatch;
    int _syncKeyResets;
    int _serverErrors;
    NSMutableDictionary *_syncResponseConsumersByMessageId;
    NSConditionLock *_accountHierarchyLock;
    _Bool _moreAvailable;
    NSString *_tag;
    id <DAMailboxStreamingContentConsumer> _streamConsumer;
}

@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) id <DAMailboxStreamingContentConsumer> streamConsumer;
@property (nonatomic, readonly) _Bool moreAvailable;

- (void)reset;
- (void)accountHierarchyChanged:(id)arg1;
- (id)initWithCurrentTag:(id)arg1 accountID:(id)arg2 requests:(id)arg3;
- (void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3;
- (id)actionsConsumer;
- (id)originalThreadMonitor;
- (void)handleSyncResponses:(id)arg1;
- (_Bool)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (_Bool)refreshFolderHierarchyAndWait:(unsigned long long)arg1;
- (void)resultsForMailbox:(id)arg1 newTag:(id)arg2 actions:(id)arg3 responses:(id)arg4 percentComplete:(double)arg5 moreAvailable:(_Bool)arg6 sentBytesCount:(unsigned long long)arg7 receivedBytesCount:(unsigned long long)arg8;
- (void)partialResultsForMailbox:(id)arg1 actions:(id)arg2 responses:(id)arg3 percentComplete:(double)arg4 moreAvailable:(_Bool)arg5;

@end
