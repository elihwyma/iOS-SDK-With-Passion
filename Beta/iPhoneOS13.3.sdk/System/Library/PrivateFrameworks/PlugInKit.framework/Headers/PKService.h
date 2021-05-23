/*
 Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, NSXPCListener, PKServicePersonality;

@protocol OS_dispatch_queue, OS_dispatch_source, PKServiceDelegate;

@interface PKService : NSObject

{
    _Bool _shared;
    _Bool _isSystemService;
    PKServicePersonality *_solePersonality;
    id <PKServiceDelegate> _delegate;
    NSXPCListener *_serviceListener;
    NSMutableDictionary *_personalities;
    NSObject<OS_dispatch_queue> *__sync;
    NSArray *_subsystems;
    NSObject<OS_dispatch_source> *_terminationTimer;
    NSObject<OS_dispatch_source> *_firstHostRequestTimer;
}

@property (retain) NSXPCListener *serviceListener;
@property (retain) NSMutableDictionary *personalities;
@property (retain) PKServicePersonality *solePersonality;
@property (retain) NSObject<OS_dispatch_queue> *_sync;
@property (retain) NSArray *subsystems;
@property _Bool shared;
@property _Bool isSystemService;
@property (retain) NSObject<OS_dispatch_source> *terminationTimer;
@property (retain) NSObject<OS_dispatch_source> *firstHostRequestTimer;
@property (retain) id <PKServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultService;
+ (void)main;
+ (int)_defaultRun:(int)arg1 arguments:(const char **)arg2;

- (id)init;
- (void)run;
- (void)checkIn;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)registerPersonality:(id)arg1;
- (void)beganUsingServicePersonality:(id)arg1;
- (_Bool)unregisterPersonality:(id)arg1;
- (void)_prepareToRun;
- (void)checkEnvironment:(id)arg1;
- (void)discoverSubsystems;
- (id)configuredSubsystemList;
- (id)discoverSubsystemNamed:(id)arg1 options:(id)arg2 logMissing:(_Bool)arg3;
- (_Bool)_processDefaultSubsystemName:(id)arg1;
- (void)mergeSubsystems:(id)arg1 from:(id)arg2;
- (void)mergeSubsystemList:(id)arg1 from:(id)arg2;
- (id)personalityNamed:(id)arg1;
- (void)launchContainingApplicationForPlugInNamed:(id)arg1;
- (void)copyAppStoreReceipt:(CDUnknownBlockType)arg1;
- (id)defaultsForPlugInNamed:(id)arg1;
- (id)plugInPrincipalForPlugInNamed:(id)arg1;
- (id)hostPrincipalForPlugInNamed:(id)arg1;
- (id)embeddedPrincipalForPlugInNamed:(id)arg1;
- (id)connectionForPlugInNamed:(id)arg1;
- (id)personalityNamed:(id)arg1 forHostPid:(int)arg2;
- (void)scheduleTermination:(double)arg1;
- (void)cancelTermination;

@end
