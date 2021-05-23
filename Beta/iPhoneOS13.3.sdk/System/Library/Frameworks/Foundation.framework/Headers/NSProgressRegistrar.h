/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSFileAccessNode, NSMutableDictionary, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSProgressRegistrar : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_publishersByID;
    NSMutableDictionary *_publisherTransactionsByID;
    NSMutableDictionary *_subscribersByID;
    NSMutableDictionary *_subscriberTransactionsByID;
    NSFileAccessNode *_rootFileAccessNode;
    NSMutableSet *_pendingFileSubscriberIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (oneway void)removePublisherForID:(id)arg1;
- (oneway void)observePublisherForID:(id)arg1 values:(id)arg2 forKeys:(id)arg3;
- (oneway void)observePublisherUserInfoForID:(id)arg1 value:(id)arg2 forKey:(id)arg3;
- (oneway void)removeSubscriberForID:(id)arg1;
- (void)_getRemoteProcessWithAuditToken:(CDStruct_4c969caf)arg1 canReadItemAtURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (oneway void)addPublisher:(id)arg1 forID:(id)arg2 acknowledgementAppBundleIDs:(id)arg3 category:(id)arg4 fileURL:(id)arg5 initialValues:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 category:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 fileURL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithQueue:(id)arg1 rootFileAccessNode:(id)arg2;

@end
