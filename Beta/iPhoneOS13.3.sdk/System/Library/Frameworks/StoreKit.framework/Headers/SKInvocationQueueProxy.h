/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, Protocol;

__attribute__((visibility("hidden")))
@interface SKInvocationQueueProxy : NSObject

{
    NSMutableArray *_invocationQueue;
    id _invocationTarget;
    Protocol *_protocol;
}

@property (retain, nonatomic) id invocationTarget;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithProtocol:(id)arg1;

@end
