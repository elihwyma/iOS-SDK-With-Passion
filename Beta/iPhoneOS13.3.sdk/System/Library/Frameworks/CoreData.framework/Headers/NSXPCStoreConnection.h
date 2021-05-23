/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection, NSXPCStore;

__attribute__((visibility("hidden")))
@interface NSXPCStoreConnection : NSObject

{
    NSXPCStore *_store;
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (void)disconnect;
- (id)initForStore:(id)arg1;
- (void)sendMessageWithContext:(id)arg1;
- (id)createConnectionWithOptions:(id)arg1;
- (id)sendMessage:(id)arg1 store:(id)arg2 error:(id *)arg3;
- (void)reconnect;

@end
