/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSessionMessageTopic : NSObject

{
    NSArray *associatedStrings;
    NSString *topicKey;
    _Bool allowConcurrent;
    NSObject<OS_dispatch_queue> *outMessageQueue;
    id controlChannelWeak;
    NSObject<OS_dispatch_queue> *inMessageQueue;
    CDUnknownBlockType receiveBlock;
    long long latestOutgoingMessageIndex;
    _Bool isSendingEnabled;
    _Bool shouldEncodeTopicKeyInMessage;
    NSString *topicPrefix;
    NSMutableDictionary *transactionCache;
}

@property (nonatomic, setter=setIsSendingEnabled:) _Bool isSendingEnabled;
@property (readonly) NSString *topicKey;

- (void)dealloc;
- (void)sendMessage:(id)arg1;
- (id)initWithTopicKey:(id)arg1 strings:(id)arg2 allowConcurrent:(_Bool)arg3 controlChannel:(id)arg4 receiveHandler:(CDUnknownBlockType)arg5;
- (id)messageForCommand:(id)arg1;
- (void)sendMessage:(id)arg1 participantID:(unsigned long long)arg2;
- (_Bool)isStringAssociated:(id)arg1;
- (void)passMessage:(id)arg1 sequence:(int)arg2 fromParticipant:(id)arg3;
- (void)clearTransactionCacheForParticipant:(id)arg1;
- (void)sendMessage:(id)arg1 participantID:(unsigned long long)arg2 withSequence:(long long)arg3 numRetries:(long long)arg4;
- (_Bool)isDuplicateMessageID:(id)arg1 messageHistory:(id)arg2 participantID:(id)arg3;
- (void)purgeExpiredEntries:(double)arg1 messageHistory:(id)arg2 participantID:(id)arg3;

@end
