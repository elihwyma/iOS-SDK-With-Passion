/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet, NSOrderedSet, NSProgress, NSString, VMClientWrapper, VMVoicemailCapabilities;

@protocol OS_dispatch_queue, VMServerXPCProtocol;

@interface VMVoicemailManager : NSObject

{
    _Bool _messageWaiting;
    _Bool _online;
    _Bool _subscribed;
    _Bool _syncInProgress;
    _Bool _transcribing;
    _Bool _canChangePassword;
    _Bool _canChangeGreeting;
    _Bool _mailboxRequiresSetup;
    _Bool _transcriptionEnabled;
    struct os_unfair_lock_s _accessorLock;
    int _token;
    NSArray *_accounts;
    NSObject<OS_dispatch_queue> *_completionQueue;
    unsigned long long _storageUsage;
    NSProgress *_transcriptionProgress;
    NSOrderedSet *_voicemails;
    NSMutableSet *_trashedMessages;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    VMVoicemailCapabilities *_capabilities;
    VMClientWrapper *_client;
}

@property (nonatomic, readonly, getter=isTranscriptionEnabled) _Bool transcriptionEnabled;
@property (nonatomic, readonly) struct os_unfair_lock_s accessorLock;
@property (nonatomic, getter=isOnline) _Bool online;
@property (nonatomic, getter=isSubscribed) _Bool subscribed;
@property (nonatomic, getter=isMessageWaiting) _Bool messageWaiting;
@property (nonatomic, getter=isSyncInProgress) _Bool syncInProgress;
@property (nonatomic, getter=isTranscribing) _Bool transcribing;
@property (copy, nonatomic) NSArray *accounts;
@property (copy, nonatomic) NSOrderedSet *voicemails;
@property (retain, nonatomic) NSMutableSet *trashedMessages;
@property (nonatomic) unsigned long long storageUsage;
@property (nonatomic) int token;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (retain, nonatomic) VMVoicemailCapabilities *capabilities;
@property (retain, nonatomic) VMClientWrapper *client;
@property (nonatomic, readonly) id <VMServerXPCProtocol> serverConnection;
@property (nonatomic, readonly) _Bool canChangePassword;
@property (nonatomic, readonly) _Bool canChangeGreeting;
@property (nonatomic, readonly) _Bool mailboxRequiresSetup;
@property (nonatomic, readonly) NSArray *allVoicemails;
@property (nonatomic, readonly) long long unreadCount;
@property (nonatomic, readonly, getter=isTranscriptionEnabled) _Bool transcriptionEnabled;
@property (nonatomic, readonly) NSProgress *transcriptionProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)synchronize;
- (id)initWithClient:(id)arg1;
- (void)obliterate;
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;
- (void)performAtomicAccessorBlock:(CDUnknownBlockType)arg1;
- (void)_requestInitialStateIfNecessaryAndSendNotifications:(_Bool)arg1;
- (id)asynchronousServerConnectionWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousServerConnectionWithErrorHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)countOfVoicemailsPassingTest:(CDUnknownBlockType)arg1;
- (id)voicemailWithIdentifier:(unsigned long long)arg1;
- (id)voicemailsPassingTest:(CDUnknownBlockType)arg1;
- (id)deleteVoicemails:(id)arg1;
- (id)markVoicemailsAsRead:(id)arg1;
- (id)trashVoicemails:(id)arg1;
- (id)removeVoicemailsFromTrash:(id)arg1;
- (void)updateAccounts:(id)arg1;
- (void)voicemailsUpdated:(id)arg1;
- (void)requestInitialStateIfNecessaryAndSendNotifications:(_Bool)arg1;
- (void)retrieveDataForVoicemail:(id)arg1;
- (id)dataForVoicemailWithIdentifier:(unsigned long long)arg1;
- (id)uniqueIdentifierForVoiceMail:(id)arg1;
- (id)deleteVoicemail:(id)arg1;
- (id)markVoicemailAsRead:(id)arg1;
- (id)trashVoicemail:(id)arg1;
- (id)removeVoicemailFromTrash:(id)arg1;
- (_Bool)isPasscodeChangeSupportedForAccountUUID:(id)arg1;
- (long long)minimumPasscodeLengthForAccountUUID:(id)arg1;
- (long long)maximumPasscodeLengthForAccountUUID:(id)arg1;
- (void)setPasscode:(id)arg1 forAccountUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isGreetingChangeSupportedForAccountUUID:(id)arg1;
- (double)maximumGreetingDurationForAccountUUID:(id)arg1;
- (void)greetingForAccountUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setGreeting:(id)arg1 forAccountUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)messageCountForMailboxType:(long long)arg1 error:(id *)arg2;
- (void)messageCountForMailboxType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)messageCountForMailboxType:(long long)arg1 read:(_Bool)arg2 error:(id *)arg3;
- (void)messageCountForMailboxType:(long long)arg1 read:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)messagesForMailboxType:(long long)arg1 limit:(long long)arg2 offset:(long long)arg3 error:(id *)arg4;
- (id)messagesForMailboxType:(long long)arg1 read:(_Bool)arg2 limit:(long long)arg3 offset:(long long)arg4 error:(id *)arg5;
- (void)changePassword:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)saveGreeting:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)reportTranscriptionProblemForVoicemail:(id)arg1;
- (void)reportTranscriptionRatedAccurate:(_Bool)arg1 forVoicemail:(id)arg2;

@end
