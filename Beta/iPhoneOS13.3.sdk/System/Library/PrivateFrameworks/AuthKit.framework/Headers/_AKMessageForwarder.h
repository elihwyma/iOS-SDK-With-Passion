/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

#import <AuthKit/Swift-Protocol.h>

@interface _AKMessageForwarder : NSObject <Swift>

{
    id _weakReceiver;
    id _strongReceiver;
}

- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)activate;
- (id)initWithStrongReceiver:(id)arg1;
- (id)initWithWeakReceiver:(id)arg1;
- (id)initWithReceiver:(id)arg1 strong:(_Bool)arg2;

@end
