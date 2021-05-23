/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class IDSDaemonRequestTimer, NSString;

@interface IDSAppleCareDaemonResponseListener : NSObject

{
    IDSDaemonRequestTimer *_requestTimer;
    CDUnknownBlockType _disconnectedBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)daemonDisconnected;
- (void)applecareResponseForRequestID:(id)arg1 withError:(id)arg2;
- (id)initWithRequestTimer:(id)arg1;
- (id)initWithDisconnectedBlockAndNoTimeout:(CDUnknownBlockType)arg1;

@end
