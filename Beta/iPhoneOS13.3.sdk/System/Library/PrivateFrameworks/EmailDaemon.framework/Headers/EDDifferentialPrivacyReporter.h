/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDMailDynamicDataAsset, NSString, _MSTTLReference;

@protocol EMUserProfileProvider, OS_dispatch_queue;

@interface EDDifferentialPrivacyReporter : NSObject

{
    NSString *_recordingKey;
    _MSTTLReference *_userDomains;
    id <EMUserProfileProvider> _profileProvider;
    EDMailDynamicDataAsset *_mailDynamicData;
    CDUnknownBlockType _recordingHandler;
    NSObject<OS_dispatch_queue> *_recordingQueue;
}

@property (copy, nonatomic) CDUnknownBlockType recordingHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordingQueue;
@property (retain, nonatomic) NSString *_recordingKey;
@property (weak, nonatomic) id <EMUserProfileProvider> _profileProvider;
@property (retain, nonatomic) _MSTTLReference *_userDomains;
@property (retain, nonatomic) EDMailDynamicDataAsset *_mailDynamicData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_localeIdentifier;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (id)initWithUserProfileProvider:(id)arg1;
- (_Bool)_shouldRecordMailbox:(id)arg1;
- (void)_recordSenders:(id)arg1;
- (void)reportSenderDomainForMessages:(id)arg1;
- (_Bool)_isUserAccountDomain:(id)arg1;

@end
