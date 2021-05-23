/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBDataProviderConnectionResolver, NSMutableDictionary, NSString;

@protocol BBDataProviderConnectionServerProxy, OS_dispatch_queue;

@interface BBDataProviderConnection : NSObject

{
    BBDataProviderConnectionResolver *_connectionResolver;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    id <BBDataProviderConnectionServerProxy> _serverProxy;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    _Bool _connected;
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_parentFactoriesBySectionID;
    NSString *_serviceName;
    NSString *_bundleID;
}

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (void)ping:(CDUnknownBlockType)arg1;
- (void)removeDataProviderWithSectionID:(id)arg1;
- (void)_queue_setServerProxy:(id)arg1;
- (void)setServerProxy:(id)arg1;
- (id)_addDataProvider:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)addDataProvider:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 universalSectionID:(id)arg4;
- (void)addDataProvider:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)addDataProvider:(id)arg1;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 unversalSectionID:(id)arg4;

@end
