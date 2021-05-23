/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSFileAccessNode, NSProgressValues, NSString, NSXPCConnection;

@protocol NSProgressPublisher;

__attribute__((visibility("hidden")))
@interface NSProgressPublisherProxy : NSObject

{
    id <NSProgressPublisher> _forwarder;
    id _publisherID;
    NSString *_lowerCaseCategoryName;
    NSFileAccessNode *_itemLocation;
    NSXPCConnection *_connection;
    NSProgressValues *_values;
}

@property (copy) NSString *category;
@property NSFileAccessNode *itemLocation;
@property (copy, readonly) NSProgressValues *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (oneway void)cancel;
- (oneway void)pause;
- (oneway void)resume;
- (oneway void)prioritize;
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(_Bool)arg2;
- (id)descriptionWithIndenting:(id)arg1;
- (id)initWithForwarder:(id)arg1 onConnection:(id)arg2 publisherID:(id)arg3 values:(id)arg4;
- (id)publisherID;
- (_Bool)isFromConnection:(id)arg1;
- (void)observeUserInfoValue:(id)arg1 forKey:(id)arg2;
- (void)observeValues:(id)arg1 forKeys:(id)arg2;

@end
