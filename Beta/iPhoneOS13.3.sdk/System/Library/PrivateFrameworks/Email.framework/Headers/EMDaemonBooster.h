/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class EMRemoteConnection, NSProgress, NSString;

@interface EMDaemonBooster : NSObject

{
    EMRemoteConnection *_connection;
    NSString *_loggingDescription;
    NSProgress *_remoteBoost;
}

@property (retain, nonatomic) EMRemoteConnection *connection;
@property (copy, nonatomic) NSString *loggingDescription;
@property (retain, nonatomic) NSProgress *remoteBoost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (void)dealloc;
- (id)initWithConnection:(id)arg1 description:(id)arg2;
- (id)_newRemoteBoost;

@end
