/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class BKSProcessAssertion;

@protocol OS_dispatch_source;

@interface MFTaskAssertion : NSObject

{
    BKSProcessAssertion *_assertion;
    NSObject<OS_dispatch_source> *_timer;
}

- (void)dealloc;
- (void)invalidate;
- (_Bool)isValid;
- (id)initWithName:(id)arg1;
- (void)cancelTimer;
- (id)initWithName:(id)arg1 expiration:(double)arg2 preventIdleSleep:(_Bool)arg3;
- (id)initWithName:(id)arg1 preventIdleSleep:(_Bool)arg2;

@end
