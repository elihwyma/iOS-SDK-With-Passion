/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailDaemon/EDPersistedMessageQueryIterator.h>

#import <Message/Swift-Protocol.h>

@class NSMutableIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface _MFMessagePersistenceQueryIterator : EDPersistedMessageQueryIterator <Swift>

{
    NSMutableIndexSet *_messageSet;
}

@property (retain, nonatomic) NSMutableIndexSet *messageSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)handleMessage:(id)arg1;

@end
