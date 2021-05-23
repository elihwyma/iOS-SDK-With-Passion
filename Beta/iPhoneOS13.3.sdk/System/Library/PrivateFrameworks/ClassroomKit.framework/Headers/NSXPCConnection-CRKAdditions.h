/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSXPCConnection.h>

@interface NSXPCConnection (CRKAdditions)

+ (id)crk_studentDaemonConnection;
+ (unsigned long long)xpcConnectionOptions;

@end
