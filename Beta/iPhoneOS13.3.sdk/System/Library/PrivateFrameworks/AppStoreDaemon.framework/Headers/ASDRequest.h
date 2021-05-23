/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSUUID;

@protocol ASDRequestObserver, ASDRequestProxy;

@interface ASDRequest : NSObject <Swift>

{
    id <ASDRequestObserver> _observer;
    NSUUID *_requestID;
    id <ASDRequestProxy> _proxy;
}

@property (retain) id <ASDRequestProxy> proxy;
@property (weak) id <ASDRequestObserver> observer;
@property (nonatomic, readonly) NSUUID *requestID;

+ (_Bool)supportsSecureCoding;
+ (id)_sharedBroker;
+ (void)cancelAllRequestsWithErrorHandler:(CDUnknownBlockType)arg1;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_startWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)receiveResponse:(id)arg1;
- (void)_callErrorHandler:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (void)_callErrorHandler:(CDUnknownBlockType)arg1 withError:(id)arg2 orDefaultCode:(unsigned long long)arg3;
- (void)_notifyObserverOfCompletionWithError:(id)arg1;
- (void)_submitRequestWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_cancelWithErrorHandler:(CDUnknownBlockType)arg1;

@end
