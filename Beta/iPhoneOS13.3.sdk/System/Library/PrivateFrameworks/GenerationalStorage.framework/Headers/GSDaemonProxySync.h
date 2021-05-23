/*
 Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

#import <Foundation/NSProxy.h>

@class NSError, NSObject;

@protocol GSProtocol;

@interface GSDaemonProxySync : NSProxy

{
    NSObject<GSProtocol> *_target;
    NSError *_error;
    id _result;
}

@property (retain, nonatomic) id result;
@property (retain, nonatomic) NSError *error;

+ (id)proxy;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)finalize;
- (id)initWithXPCObject:(id)arg1;
- (void)handleObjResult:(id)arg1 error:(id)arg2;
- (void)handleBoolResult:(_Bool)arg1 error:(id)arg2;
- (struct __CFError *)copyCFError;

@end
