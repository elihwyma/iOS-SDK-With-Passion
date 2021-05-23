/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDServerConfiguration, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDServerConfigurationManager : NSObject

{
    _Bool _shouldDropAllConfigurations;
    int _iCloudEnvNotifToken;
    NSOperationQueue *_configurationQueue;
    CKDServerConfiguration *_globalConfiguration;
    NSMutableSet *_globalConfigurationOps;
    NSOperationQueue *_containerSpecificInfoQueue;
    NSMutableDictionary *_containerSpecificInfos;
    NSMutableDictionary *_containerSpecificInfoOperations;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

@property (retain, nonatomic) NSOperationQueue *configurationQueue;
@property (retain, nonatomic) CKDServerConfiguration *globalConfiguration;
@property (retain, nonatomic) NSMutableSet *globalConfigurationOps;
@property (retain, nonatomic) NSOperationQueue *containerSpecificInfoQueue;
@property (retain, nonatomic) NSMutableDictionary *containerSpecificInfos;
@property (retain, nonatomic) NSMutableDictionary *containerSpecificInfoOperations;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic) int iCloudEnvNotifToken;
@property (nonatomic) _Bool shouldDropAllConfigurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (id)CKStatusReportArray;
- (void)expireGlobalConfiguration;
- (void)expireConfigurationForContextInfoProvider:(id)arg1 accountInfoProvider:(id)arg2;
- (void)systemAvailabilityChanged:(unsigned long long)arg1;
- (void)configurationForOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)containerInfoForOperation:(id)arg1 requireUserIDs:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_reallyDropAllConfigurations;
- (void)_behaviorOptionsChanged:(id)arg1;
- (void)_dropAllConfigurations;
- (id)_uniqueStringForContext:(id)arg1 account:(id)arg2;
- (void)_fetchGlobalConfigForOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchContainerSpecificInfoForOperation:(id)arg1 requireUserIDs:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_writeOutiCloudHostnames:(id)arg1;

@end
