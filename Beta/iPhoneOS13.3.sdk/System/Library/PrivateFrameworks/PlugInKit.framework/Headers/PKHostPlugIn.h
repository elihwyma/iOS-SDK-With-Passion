/*
 Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

#import <PlugInKit/PKPlugInCore.h>

@class NSArray, NSBundle, NSDate, NSDictionary, NSObject, NSString, NSURL, NSUUID, NSUserDefaults, NSXPCConnection, Protocol;

@protocol OS_dispatch_queue, PKCorePlugInProtocol, PKPlugIn;

@interface PKHostPlugIn : PKPlugInCore

{
    _Bool _terminating;
    unsigned int _useCount;
    NSUserDefaults *_defaults;
    CDUnknownBlockType _notificationBlock;
    NSXPCConnection *_pluginConnection;
    NSObject<OS_dispatch_queue> *__replyQueue;
    NSObject<OS_dispatch_queue> *__syncQueue;
    NSObject<OS_dispatch_queue> *__startQueue;
    id <PKCorePlugInProtocol> _service;
    id <PKCorePlugInProtocol> _syncService;
    NSUUID *_supersedingUUID;
    id <PKPlugIn> _supersededBy;
    NSUUID *_multipleInstanceUUID;
    NSString *_serviceExtension;
    NSDictionary *_discoveryExtensions;
    NSArray *_sandboxExtensions;
    id _queuedHostPrincipal;
    Protocol *_queuedHostProtocol;
    unsigned long long _state;
    id _plugInPrincipal;
    id _embeddedPrincipal;
    NSBundle *_embeddedBundle;
    NSDate *_beganUsingAt;
    NSDictionary *_sourceForm;
    NSDictionary *_environment;
}

@property (retain) NSXPCConnection *pluginConnection;
@property (retain) NSObject<OS_dispatch_queue> *_replyQueue;
@property (retain) NSObject<OS_dispatch_queue> *_syncQueue;
@property (retain) NSObject<OS_dispatch_queue> *_startQueue;
@property (retain) id <PKCorePlugInProtocol> service;
@property (retain) id <PKCorePlugInProtocol> syncService;
@property (retain) NSUUID *supersedingUUID;
@property (weak) id <PKPlugIn> supersededBy;
@property (retain) NSUUID *multipleInstanceUUID;
@property (readonly) NSUUID *effectiveUUID;
@property (retain) NSString *serviceExtension;
@property (retain) NSDictionary *discoveryExtensions;
@property (retain) NSArray *sandboxExtensions;
@property (retain) id queuedHostPrincipal;
@property (retain) Protocol *queuedHostProtocol;
@property unsigned long long state;
@property unsigned int useCount;
@property (retain) id plugInPrincipal;
@property (retain) id embeddedPrincipal;
@property (retain) NSBundle *embeddedBundle;
@property (readonly) NSUserDefaults *defaults;
@property _Bool terminating;
@property (retain) NSDate *beganUsingAt;
@property (retain) NSDictionary *sourceForm;
@property (retain) NSDictionary *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *identifier;
@property (readonly) NSString *version;
@property (readonly) NSURL *url;
@property (readonly) NSURL *containingUrl;
@property (readonly) _Bool onSystemVolume;
@property (readonly) NSDictionary *bundleInfoDictionary;
@property (readonly) NSDictionary *plugInDictionary;
@property (readonly) NSDictionary *attributes;
@property (readonly) NSDictionary *entitlements;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedShortName;
@property (readonly) NSString *localizedContainingName;
@property (readonly) NSDictionary *localizedFileProviderActionNames;
@property long long userElection;
@property (readonly) _Bool spent;
@property (readonly) _Bool active;
@property (copy) CDUnknownBlockType notificationBlock;
@property (readonly) NSUUID *uuid;
@property (readonly) NSDate *timestamp;
@property (retain) NSDictionary *extensionState;

- (void)resume;
- (id)createInstanceWithUUID:(id)arg1;
- (_Bool)useBundle:(id)arg1 error:(id *)arg2;
- (_Bool)beginUsingWithError:(id *)arg1;
- (void)beginUsing:(CDUnknownBlockType)arg1;
- (void)endUsing:(CDUnknownBlockType)arg1;
- (void)suspend;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (void)setReplyQueue:(id)arg1;
- (id)initWithForm:(id)arg1;
- (void)updateFromForm:(id)arg1;
- (void)beginUsingWithSubsystemOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startPlugInSynchronously:(_Bool)arg1 subsystemOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)beginUsingWithSubsystemOptions:(id)arg1 error:(id *)arg2;
- (void)changeState:(unsigned long long)arg1;
- (_Bool)loadExtensions:(id)arg1 error:(id *)arg2;
- (void)unwind:(unsigned long long)arg1 force:(_Bool)arg2;
- (void)setBootstrapWithSubsystemOptions:(id)arg1;
- (void)preparePlugInUsingService:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isSandboxed;
- (void)messageTraceUsage;
- (_Bool)endUsingWithError:(id *)arg1;
- (void)setHostPrincipal:(id)arg1 withProtocol:(id)arg2;

@end
