/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class IDSService, MSASAlbum, MSASStateMachine, NSMutableDictionary, NSString;

@interface MSASPhoneInvitations : NSObject

{
    MSASStateMachine *_stateMachine;
    MSASAlbum *_album;
    IDSService *_idsService;
    NSMutableDictionary *_sendMessageIdentifierToPhone;
}

@property (retain, nonatomic) MSASStateMachine *stateMachine;
@property (retain, nonatomic) MSASAlbum *album;
@property (retain, nonatomic) IDSService *idsService;
@property (retain, nonatomic) NSMutableDictionary *sendMessageIdentifierToPhone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)addPendingPhoneInvitations:(id)arg1 toOwnedAlbum:(id)arg2 inStateMachin:(id)arg3;
- (void)removeSharingRelationships:(id)arg1 forAlbum:(id)arg2;

@end
