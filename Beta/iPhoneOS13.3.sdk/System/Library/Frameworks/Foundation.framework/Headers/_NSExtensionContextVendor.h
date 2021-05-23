/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface _NSExtensionContextVendor : NSObject

{
    NSMutableDictionary *__extensionServiceConnections;
    NSMutableDictionary *__extensionContexts;
    NSMutableDictionary *__extensionPrincipalObjects;
}

@property (retain, nonatomic, setter=_setExtensionServiceConnections:) NSMutableDictionary *_extensionServiceConnections;
@property (retain, nonatomic, setter=_setExtensionContexts:) NSMutableDictionary *_extensionContexts;
@property (retain, nonatomic, setter=_setExtensionPrincipalObjects:) NSMutableDictionary *_extensionPrincipalObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_sharedExtensionContextVendor;
+ (void)_startListening:(_Bool)arg1;
+ (id)_extensionDictionary;
+ (Class)_extensionContextClass;
+ (id)_extensionMainStoryboard;
+ (Class)_extensionPrincipalClass;
+ (void)_startListening;
+ (id)_completionConcurrentQueue;
+ (id)_expirationConcurrentQueue;

- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_tearDownContextWithUUID:(id)arg1;
- (_Bool)_shouldCreatePrincipalObject;
- (void)_onGlobalStateQueueOnly_setPrincipalObject:(id)arg1 forUUID:(id)arg2;
- (void)_beginRequestWithExtensionItems:(id)arg1 listenerEndpoint:(id)arg2 withContextUUID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_hostDidEnterBackgroundForContextUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_hostWillEnterForegroundForContextUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_hostWillResignActiveForContextUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_hostDidBecomeActiveForContextUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_extensionContextForUUID:(id)arg1;
- (void)_setPrincipalObject:(id)arg1 forUUID:(id)arg2;

@end
