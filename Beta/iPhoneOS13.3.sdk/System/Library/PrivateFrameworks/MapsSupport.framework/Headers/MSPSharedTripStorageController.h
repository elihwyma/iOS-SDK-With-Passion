/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class MSPGroupSessionStorage, NSMutableDictionary;

@protocol MSPSharedTripStorageDelegate;

__attribute__((visibility("hidden")))
@interface MSPSharedTripStorageController : NSObject

{
    id <MSPSharedTripStorageDelegate> _delegate;
    MSPGroupSessionStorage *_senderSession;
    NSMutableDictionary *_sharedTripGroupSessionInfo;
    NSMutableDictionary *_receiverRules;
    NSMutableDictionary *_senderRules;
}

@property (retain, nonatomic) NSMutableDictionary *sharedTripGroupSessionInfo;
@property (retain, nonatomic) NSMutableDictionary *receiverRules;
@property (retain, nonatomic) NSMutableDictionary *senderRules;
@property (weak, nonatomic) id <MSPSharedTripStorageDelegate> delegate;
@property (retain, nonatomic) MSPGroupSessionStorage *senderSession;

- (id)init;
- (void)dealloc;
- (void)removeSession:(id)arg1;
- (id)groupSessionInfoForKey:(id)arg1;
- (id)receivingRulesForIdentifier:(id)arg1;
- (void)receivingRulesTouched;
- (void)updateGroupSessionStorageWithState:(id)arg1;
- (void)_loadSenderSession;
- (void)_loadStoredSessions;
- (void)_saveSenderSession;
- (void)_saveStoredSessions;
- (void)_saveReceivingRules;
- (void)_saveSendingRules;
- (id)_storingPath;
- (id)_rulesPath;
- (id)_senderRulesPath;
- (id)_storingSenderPath;
- (void)addNewSession:(id)arg1 originator:(id)arg2 receivingHandle:(id)arg3 receivingAccountIdentifier:(id)arg4;
- (id)sendingRulesForIdentifier:(id)arg1;
- (void)sendingRulesTouched;

@end
