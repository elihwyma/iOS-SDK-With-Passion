/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCSessionMessaging : NSObject

{
    NSMutableDictionary *topics;
    id controlChannelWeak;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)controlChannel:(id)arg1 receivedMessage:(id)arg2 transactionID:(unsigned int)arg3 fromParticipant:(id)arg4;
- (void)controlChannel:(id)arg1 sendReliableMessage:(id)arg2 didSucceed:(_Bool)arg3 toParticipant:(id)arg4;
- (id)newPackedMessageFromDictionary:(id)arg1;
- (void)sendMessage:(id)arg1 withTopic:(id)arg2;
- (id)newPackedMessageFromMomentsDictionary:(id)arg1;
- (void)stopMessaging;
- (id)messageForTopic:(id)arg1 command:(id)arg2;
- (id)initWithControlChannel:(id)arg1 remoteVersion:(id)arg2;
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(_Bool)arg3 receiveHandler:(CDUnknownBlockType)arg4;
- (id)newDictionaryFromUnpackedMessage:(id)arg1;
- (id)newDictionaryFromUnpackedMomentsMessage:(id)arg1;
- (void)sendMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;
- (void)startMessaging;
- (void)controlChannel:(id)arg1 clearTransactionCacheForParticipant:(id)arg2;

@end
