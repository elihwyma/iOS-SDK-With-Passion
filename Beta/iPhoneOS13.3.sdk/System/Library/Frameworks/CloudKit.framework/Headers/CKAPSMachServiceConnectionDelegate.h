/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class APSConnection, CKAPSMachServiceConnectionKey, NSString;

__attribute__((visibility("hidden")))
@interface CKAPSMachServiceConnectionDelegate : NSObject

{
    APSConnection *_connection;
    CKAPSMachServiceConnectionKey *_key;
}

@property (weak, nonatomic) APSConnection *connection;
@property (copy, nonatomic) CKAPSMachServiceConnectionKey *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;
- (void)connectionDidReconnect:(id)arg1;
- (id)initWithConnection:(id)arg1 key:(id)arg2;

@end
