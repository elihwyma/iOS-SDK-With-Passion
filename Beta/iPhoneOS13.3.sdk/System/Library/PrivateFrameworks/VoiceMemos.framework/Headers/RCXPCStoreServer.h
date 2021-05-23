/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <CoreData/NSXPCStoreServer.h>

__attribute__((visibility("hidden")))
@interface RCXPCStoreServer : NSXPCStoreServer

{
    CDUnknownBlockType _shouldAcceptDatabaseConnection;
}

@property (copy, nonatomic) CDUnknownBlockType shouldAcceptDatabaseConnection;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
