/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class NSMutableSet, NSSet, NSString, VCDaemonXPCEventHandler;

@protocol OS_dispatch_queue, VCDatabaseProvider;

@interface VCDaemonSyncDataEndpoint : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <VCDatabaseProvider> _databaseProvider;
    VCDaemonXPCEventHandler *_eventHandler;
    NSMutableSet *_mutableSyncDataHandlers;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) id <VCDatabaseProvider> databaseProvider;
@property (nonatomic, readonly) VCDaemonXPCEventHandler *eventHandler;
@property (nonatomic, readonly) NSMutableSet *mutableSyncDataHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *syncDataHandlers;

- (id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2;

@end
