/*
 Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface NFMIDSServiceDelegate : NSObject

{
    NSMutableDictionary *_inflightMessages;
    NSMutableDictionary *_pendingMessages;
}

@property (retain, nonatomic) NSMutableDictionary *inflightMessages;
@property (retain, nonatomic) NSMutableDictionary *pendingMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (id)sendProtoBuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(_Bool)arg5 retryCount:(long long)arg6 retryInterval:(double)arg7;
- (id)_sendProtoBuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(_Bool)arg5;
- (void)_enqueueMessage:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(_Bool)arg5 retryCount:(long long)arg6 retryInterval:(double)arg7 idsIdentifier:(id)arg8;

@end
