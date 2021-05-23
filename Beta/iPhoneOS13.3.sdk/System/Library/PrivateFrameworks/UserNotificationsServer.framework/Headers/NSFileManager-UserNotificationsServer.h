/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSFileManager.h>

@interface NSFileManager (UserNotificationsServer)

- (_Bool)uns_securelyMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)uns_moveOrDeleteItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (id)uns_contentsSortedByLastModificationDateOfDirectoryAtPath:(id)arg1 error:(id *)arg2;

@end
