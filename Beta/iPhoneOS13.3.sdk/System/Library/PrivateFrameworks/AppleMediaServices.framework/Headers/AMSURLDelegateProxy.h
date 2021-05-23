/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSURLSession;

__attribute__((visibility("hidden")))
@interface AMSURLDelegateProxy : NSObject

{
    AMSURLSession *_session;
    id _delegate;
}

@property (weak, nonatomic, readonly) AMSURLSession *session;
@property (weak, nonatomic) id delegate;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)invalidate;
- (id)initWithSession:(id)arg1 delegate:(id)arg2;

@end
