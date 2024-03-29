/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol DEDXPCProtocol;

@interface DEDXPCOutbound : NSObject

{
    id <DEDXPCProtocol> _remoteObject;
}

@property (retain) id <DEDXPCProtocol> remoteObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)transportType;
- (void)cancelSession:(id)arg1;
- (id)initWithRemoteObject:(id)arg1;
- (void)pingSession:(id)arg1;
- (void)listAvailableExtensionsForSession:(id)arg1;
- (void)getSessionStatusWithSession:(id)arg1;
- (void)syncSessionStatusWithSession:(id)arg1;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4;
- (void)scheduleNotificationForSession:(id)arg1;
- (void)cancelNotificationForSession:(id)arg1;
- (void)pongSession:(id)arg1;
- (void)deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2;
- (void)adoptFiles:(id)arg1 forSession:(id)arg2;
- (void)didAdoptFilesWithError:(id)arg1 forSession:(id)arg2;
- (void)uploadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 session:(id)arg3;
- (void)commitSession:(id)arg1;
- (void)didCommitSession:(id)arg1;
- (void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 withIdentifiers:(id)arg3 inSession:(id)arg4;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3;
- (void)didCancelSession:(id)arg1;
- (void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;

@end
