/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@interface ML3Client : NSObject

{
    int _processID;
    NSXPCConnection *_connection;
    NSString *_name;
    NSString *_bundleID;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) int processID;
@property (nonatomic, readonly, getter=isDaemonClient) _Bool daemonClient;

+ (id)daemonClient;
+ (id)processClient;

- (id)init;
- (id)description;
- (id)initWithConnection:(id)arg1;

@end
