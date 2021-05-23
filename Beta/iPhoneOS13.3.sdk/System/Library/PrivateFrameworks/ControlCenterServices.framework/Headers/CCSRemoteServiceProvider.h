/*
 Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

#import <Foundation/NSObject.h>

@class CCSModuleRepository, CCSModuleSettingsProvider, NSHashTable, NSString, NSXPCListener;

@interface CCSRemoteServiceProvider : NSObject

{
    CCSModuleRepository *_moduleRepository;
    CCSModuleSettingsProvider *_settingsProvider;
    NSXPCListener *_listener;
    NSHashTable *_presentationEndpoints;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;

- (void)dealloc;
- (void)invalidate;
- (id)_init;
- (void)resume;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)requestEnableModuleWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enumerateEndpointsUsingBlock:(CDUnknownBlockType)arg1;
- (void)requestAvailableModuleIdentifiersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getEnabledStateOfModuleWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentModuleWithIdentifier:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registerEndpoint:(id)arg1;

@end
