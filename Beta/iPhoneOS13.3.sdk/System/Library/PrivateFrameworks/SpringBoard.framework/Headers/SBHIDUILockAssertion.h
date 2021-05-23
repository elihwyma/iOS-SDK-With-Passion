/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBHIDInterface;

@interface SBHIDUILockAssertion : NSObject

{
    _Bool _suspendProximitySensor;
    _Bool _suspendMultitouch;
    _Bool _pocketTouchesExpected;
    _Bool _disableTapToWake;
    long long _source;
    SBHIDInterface *_HIDInterface;
    NSString *_reason;
}

@property (nonatomic) _Bool suspendProximitySensor;
@property (nonatomic) _Bool suspendMultitouch;
@property (nonatomic) _Bool pocketTouchesExpected;
@property (nonatomic) _Bool disableTapToWake;
@property (nonatomic) long long source;
@property (weak, nonatomic) SBHIDInterface *HIDInterface;
@property (copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)invalidateForSource:(long long)arg1;

@end
