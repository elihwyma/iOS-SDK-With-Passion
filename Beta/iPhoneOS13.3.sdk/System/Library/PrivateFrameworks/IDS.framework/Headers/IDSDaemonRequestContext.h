/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class IDSDaemonResponseHandler, IMTimer;

@interface IDSDaemonRequestContext : NSObject

{
    IDSDaemonResponseHandler *_responseHandler;
    CDUnknownBlockType _timeoutBlock;
    IMTimer *_systemTimer;
}

- (void)dealloc;
- (id)responseHandler;
- (id)initWithResponseHandler:(id)arg1 timeoutBlock:(CDUnknownBlockType)arg2 systemTimer:(id)arg3;
- (CDUnknownBlockType)timeoutBlock;
- (id)systemTimer;
- (void)killSystemTimer;

@end
