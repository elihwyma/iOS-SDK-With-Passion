/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSProxy.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CoreTelephonyClientDelegateProxy : NSProxy

{
    struct queue _userQueue;
    id _delegate;
}

@property (weak, nonatomic) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithQueue:(struct queue)arg1;
- (id).cxx_construct;

@end
