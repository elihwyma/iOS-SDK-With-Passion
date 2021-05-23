/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFCoordinatedAlertRequest : NSObject

{
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    _Bool _started;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSXPCConnection *_xpcCnx;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    double _timeout;
    long long _type;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic) double timeout;
@property (nonatomic) long long type;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)start;
- (void)_start;
- (void)_invalidated;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_timeoutFired;

@end
