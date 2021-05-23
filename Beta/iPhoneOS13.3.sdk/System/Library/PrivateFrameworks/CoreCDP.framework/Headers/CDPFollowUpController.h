/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <Foundation/NSObject.h>

@class CDPDaemonConnection;

@interface CDPFollowUpController : NSObject

{
    CDPDaemonConnection *_daemonConn;
}

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (_Bool)postFollowUpWithContext:(id)arg1 error:(id *)arg2;
- (_Bool)clearFollowUpWithContext:(id)arg1 error:(id *)arg2;

@end
