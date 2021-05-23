/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <FileProviderDaemon/FPDProvider.h>

@class NSExtension, NSObject, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface FPDExtension : FPDProvider

{
    NSExtension *_extension;
    NSObject<OS_dispatch_queue> *_presentersQueue;
    NSObject<OS_dispatch_queue> *_sharedSessionQueue;
}

@property (retain, nonatomic) NSExtension *extension;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *presentersQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sharedSessionQueue;
@property (nonatomic, readonly) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)instanceWithExtension:(id)arg1 queue:(id)arg2 server:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)customPushTopics;
- (void)_test_callFileProviderManagerAPIs:(CDUnknownBlockType)arg1;
- (void)currentMaterializedSetSyncAnchorForDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didReceiveMessage:(id)arg1;
- (id)initWithExtension:(id)arg1 queue:(id)arg2 server:(id)arg3;
- (_Bool)isAppExtensionReachable;
- (id)asAppExtensionBackedProvider;
- (void)removeTrashedItemsOlderThanDate:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reindexAllSearchableItemsForRequest:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)enumerateMaterializedSetForDomain:(id)arg1 syncAnchor:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
