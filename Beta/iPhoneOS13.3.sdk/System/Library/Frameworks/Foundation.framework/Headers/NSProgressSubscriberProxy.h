/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSFileAccessNode, NSString, NSXPCConnection;

@protocol NSProgressSubscriber;

__attribute__((visibility("hidden")))
@interface NSProgressSubscriberProxy : NSObject

{
    id <NSProgressSubscriber> _forwarder;
    id _subscriberID;
    NSString *_bundleID;
    NSString *_lowerCaseCategoryName;
    NSFileAccessNode *_itemLocation;
    NSXPCConnection *_connection;
}

@property (copy) NSString *category;
@property NSFileAccessNode *itemLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (oneway void)removePublisherForID:(id)arg1;
- (id)descriptionWithIndenting:(id)arg1;
- (_Bool)isFromConnection:(id)arg1;
- (oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(_Bool)arg4;
- (oneway void)observePublisherForID:(id)arg1 values:(id)arg2 forKeys:(id)arg3;
- (oneway void)observePublisherUserInfoForID:(id)arg1 value:(id)arg2 forKey:(id)arg3;
- (id)initWithForwarder:(id)arg1 onConnection:(id)arg2 subscriberID:(id)arg3 appBundleID:(id)arg4;
- (id)appBundleID;

@end
