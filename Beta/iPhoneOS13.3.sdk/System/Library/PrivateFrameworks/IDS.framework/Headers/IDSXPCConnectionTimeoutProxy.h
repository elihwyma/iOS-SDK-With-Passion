/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class IDSXPCConnection;

@interface IDSXPCConnectionTimeoutProxy : NSObject

{
    id _target;
    IDSXPCConnection *_connection;
    double _timeout;
    CDUnknownBlockType _errorHandler;
}

@property (retain, nonatomic) id target;
@property (retain, nonatomic) IDSXPCConnection *connection;
@property (nonatomic) double timeout;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;

- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 connection:(id)arg2 timeoutInSeconds:(double)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (_Bool)_invocationHasBlock:(id)arg1;

@end
