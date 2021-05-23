/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class CDDCloudKitServerConfiguration, NSError, NSPersistentContainer, NSString, NSXPCListener;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CDDCloudKitServer : NSObject

{
    _Bool _initialized;
    NSXPCListener *_listener;
    CDDCloudKitServerConfiguration *_configuration;
    NSPersistentContainer *_metadataContainer;
    NSObject<OS_dispatch_group> *_initializationGroup;
    NSError *_lastInitializationError;
}

@property (nonatomic, readonly) NSPersistentContainer *metadataContainer;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *initializationGroup;
@property (nonatomic, readonly) _Bool initialized;
@property (nonatomic, readonly) NSError *lastInitializationError;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (copy, nonatomic, readonly) CDDCloudKitServerConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)checkAndCreateDirectoryAtURL:(id)arg1 wipeIfExists:(_Bool)arg2 error:(id *)arg3;

- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)tearDown;
- (void)_setUpAsync;
- (oneway void)handleMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_handleRegistrationMessage:(id)arg1;
- (id)_handleScheduleMessage:(id)arg1;
- (_Bool)verifyFileHandle:(id)arg1 matchesPath:(id)arg2 error:(id *)arg3;
- (id)createRealPathForPath:(id)arg1 error:(id *)arg2;
- (void)runActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)finishedActivity:(id)arg1 withResult:(id)arg2 inManagedObjectContext:(id)arg3;
- (void)setUp;
- (id)initWithListener:(id)arg1 configuration:(id)arg2;

@end
