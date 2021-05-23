/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class MSMediaStreamDaemon, MSResetServerProtocol, NSString;

@interface MSResetServer : NSObject

{
    NSString *_personID;
    MSResetServerProtocol *_protocol;
    MSMediaStreamDaemon *_daemon;
    id _selfReference;
}

@property (nonatomic, readonly) NSString *personID;
@property (nonatomic) MSMediaStreamDaemon *daemon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)resetServerObjectWithPersonID:(id)arg1 baseURL:(id)arg2;

- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)resetServerProtocol:(id)arg1 didFinishWithError:(id)arg2;
- (void)resetServerProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)resetServer;

@end
