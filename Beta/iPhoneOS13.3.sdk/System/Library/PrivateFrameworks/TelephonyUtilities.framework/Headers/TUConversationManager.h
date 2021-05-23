/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSSet, NSString, TUConversationMediaController;

@protocol OS_dispatch_queue, TUConversationManagerDataSource;

@interface TUConversationManager : NSObject

{
    TUConversationMediaController *_mediaController;
    NSObject<OS_dispatch_queue> *_queue;
    id <TUConversationManagerDataSource> _dataSource;
    NSMapTable *_delegateToQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) id <TUConversationManagerDataSource> dataSource;
@property (nonatomic, readonly) NSMapTable *delegateToQueue;
@property (nonatomic, readonly) TUConversationMediaController *mediaController;
@property (copy, nonatomic, readonly) NSSet *activeConversations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)memorySize;
+ (_Bool)supportsConversations;
+ (_Bool)isAddPersonEnabled;
+ (_Bool)allowsVideo;
+ (_Bool)supportsEffects;

- (id)init;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)registerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addRemoteMembers:(id)arg1 toConversation:(id)arg2;
- (void)buzzMember:(id)arg1 conversation:(id)arg2;
- (void)setDownlinkMuted:(_Bool)arg1 forRemoteParticipantsInConversation:(id)arg2;
- (void)conversationsChangedForDataSource:(id)arg1 oldConversationsByGroupUUID:(id)arg2;
- (void)serverDisconnectedForDataSource:(id)arg1 oldConversationsByGroupUUID:(id)arg2;
- (id)activeConversationWithGroupUUID:(id)arg1;
- (id)activeConversationWithRemoteMembers:(id)arg1;

@end
