/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class DEDController, DEDSharingConnection;

@protocol OS_os_log;

@interface DEDSharingInbound : NSObject

{
    DEDController *_delegate;
    DEDSharingConnection *_connection;
    NSObject<OS_os_log> *_log;
}

@property (weak) DEDController *delegate;
@property (weak) DEDSharingConnection *connection;
@property (retain) NSObject<OS_os_log> *log;

- (id)init;
- (id)initWithController:(id)arg1 sharingConnection:(id)arg2;
- (void)handleObject:(id)arg1 forSFSession:(id)arg2;
- (void)handleObject:(id)arg1 forSFSession:(id)arg2 forBugSession:(id)arg3 callingDevice:(id)arg4;
- (void)handleRequest:(id)arg1 forSFSession:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
