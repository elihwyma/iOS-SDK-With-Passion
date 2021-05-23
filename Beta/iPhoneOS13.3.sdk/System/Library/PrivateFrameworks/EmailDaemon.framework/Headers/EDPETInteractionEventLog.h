/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class CNContactStore, EDInteractionEventLogSaltProvider, EFLazyCache, EFMutableInt64Set, NSData, NSFileHandle, NSString, NSURL;

@protocol EMUserProfileProvider, EMVIPManager, OS_dispatch_queue;

@interface EDPETInteractionEventLog : NSObject

{
    _Atomic _Bool _shouldLog;
    _Atomic unsigned int _sequenceNumber;
    long long _userID;
    long long _deviceID;
    NSURL *_currentLogFile;
    id <EMUserProfileProvider> _profileProvider;
    EDInteractionEventLogSaltProvider *_saltProvider;
    CNContactStore *_contactStore;
    id <EMVIPManager> _vipManager;
    EFLazyCache *_contactIDCache;
    NSString *_meContactIdentifier;
    NSData *_rotatingSalt;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSURL *_directory;
    NSFileHandle *_logFileHandle;
    EFMutableInt64Set *_currentLogMessageIDs;
}

@property (nonatomic, readonly) id <EMUserProfileProvider> profileProvider;
@property (nonatomic, readonly) EDInteractionEventLogSaltProvider *saltProvider;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) id <EMVIPManager> vipManager;
@property (nonatomic, readonly) EFLazyCache *contactIDCache;
@property (retain, nonatomic) NSString *meContactIdentifier;
@property (nonatomic, readonly) long long userID;
@property (nonatomic, readonly) long long deviceID;
@property (retain, nonatomic) NSData *rotatingSalt;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) _Atomic unsigned int sequenceNumber;
@property (nonatomic, readonly) NSURL *directory;
@property (retain, nonatomic) NSURL *currentLogFile;
@property (retain, nonatomic) NSFileHandle *logFileHandle;
@property (nonatomic) _Atomic _Bool shouldLog;
@property (retain, nonatomic) EFMutableInt64Set *currentLogMessageIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (void)enumerateFramesInData:(id)arg1 block:(CDUnknownBlockType)arg2;

- (id)_salt;
- (void)waitForPendingWrites;
- (id)initWithDirectory:(id)arg1 userProfileProvider:(id)arg2 saltProvider:(id)arg3 contactStore:(id)arg4 vipManager:(id)arg5;
- (id)batchedEventsForSubmission;
- (void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 data:(id)arg4;
- (void)persistEvent:(id)arg1 date:(id)arg2 conversationID:(long long)arg3 data:(id)arg4;
- (void)persistEvent:(id)arg1 dataFromMessage:(id)arg2;
- (void)persistEvent:(id)arg1 dataFromMessage:(id)arg2 account:(id)arg3;
- (void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 mailbox:(id)arg4;
- (void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 mailboxType:(long long)arg4;
- (long long)hashedAccountID:(id)arg1;
- (id)hashedMessageHeadersForMessage:(id)arg1;
- (long long)hashedConversationID:(long long)arg1;
- (long long)hashedString:(id)arg1;
- (long long)hashedMailboxID:(id)arg1;
- (int)_timezoneOffset;
- (_Bool)_openCurrentLogfile;
- (void)_resetIdentifiers;
- (id)_buildLogFileURLInDir:(id)arg1;
- (int)_openFileForAppending:(id)arg1;
- (void)_writeHeader;
- (id)_scanForMessageIDs:(id)arg1 logVersion:(out long long *)arg2;
- (_Bool)_isLogQuotaReached;
- (id)_framedMessage:(id)arg1;
- (void)_writeQuotaReachedEvent;
- (void)_writeMessageDataIfNecessary:(id)arg1 account:(id)arg2;
- (id)_messageDataEventForMessage:(id)arg1 account:(id)arg2;
- (id)_currentLocaleIdentifier;
- (unsigned int)_persistentBits;
- (unsigned long long)_truncatedUNIXTimestampFromDate:(id)arg1;
- (unsigned long long)_estimateStopCount:(id)arg1;
- (void)_compressFramedMessagesIntoBatch:(id)arg1;
- (void)_rotateLogWithCompressedData:(id)arg1;
- (long long)_truncatedSHA256:(id)arg1;
- (long long)hashedContactIDForAddress:(id)arg1;
- (CDStruct_5df41632)hashedSubject:(id)arg1;
- (int)_eventNameFromString:(id)arg1;
- (id)_eventForName:(int)arg1 date:(id)arg2;
- (void)_writeMessageDataIfNecessary:(id)arg1;
- (void)_writeEvent:(id)arg1;

@end
