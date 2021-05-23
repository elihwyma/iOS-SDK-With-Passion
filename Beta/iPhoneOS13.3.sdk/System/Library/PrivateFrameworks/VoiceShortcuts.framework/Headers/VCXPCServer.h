/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class NSString, NSXPCListener, NSXPCListenerEndpoint, VCCoreDuetListener, VCVoiceShortcutManager, WFTriggerManager;

@protocol VCDatabaseProvider, VCSyncDataEndpoint;

@interface VCXPCServer : NSObject

{
    _Bool _skipEntitlementsCheck;
    struct os_unfair_lock_s _migrationLock;
    VCCoreDuetListener *_coreDuetListener;
    VCVoiceShortcutManager *_voiceShortcutManager;
    WFTriggerManager *_triggerManager;
    NSXPCListener *_xpcListener;
    id <VCDatabaseProvider> _databaseProvider;
    id <VCSyncDataEndpoint> _syncDataEndpoint;
}

@property (nonatomic, readonly) _Bool skipEntitlementsCheck;
@property (nonatomic, readonly) struct os_unfair_lock_s migrationLock;
@property (nonatomic, readonly) NSXPCListener *xpcListener;
@property (nonatomic, readonly) id <VCDatabaseProvider> databaseProvider;
@property (nonatomic, readonly) VCCoreDuetListener *coreDuetListener;
@property (nonatomic, readonly) id <VCSyncDataEndpoint> syncDataEndpoint;
@property (nonatomic, readonly) WFTriggerManager *triggerManager;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (nonatomic, readonly) VCVoiceShortcutManager *voiceShortcutManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (id)initWithDatabaseProvider:(id)arg1 coreDuetListener:(id)arg2 syncDataEndpoint:(id)arg3;
- (id)initWithUnsecuredAnonymousListenerAndDatabaseProvider:(id)arg1;
- (id)initWithXPCListener:(id)arg1 databaseProvider:(id)arg2 coreDuetListener:(id)arg3 syncDataEndpoint:(id)arg4;

@end
