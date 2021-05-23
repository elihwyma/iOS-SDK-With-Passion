/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@interface SBHomeHardwareButtonLongPressDurationAssertion : NSObject <Swift>

{
    double _duration;
    NSString *_reason;
}

@property (nonatomic, readonly) double duration;
@property (copy, nonatomic, readonly) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithReason:(id)arg1 duration:(double)arg2;

@end
