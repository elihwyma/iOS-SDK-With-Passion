/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSConnectionDelegateProxy : NSObject

{
    id _delegate;
}

@property (weak, nonatomic) id delegate;

+ (id)proxyWithDelegate:(id)arg1;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end
