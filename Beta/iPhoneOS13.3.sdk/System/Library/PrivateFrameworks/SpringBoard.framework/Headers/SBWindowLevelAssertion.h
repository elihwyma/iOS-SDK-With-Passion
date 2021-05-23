/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@interface SBWindowLevelAssertion : NSObject <Swift>

{
    CDUnknownBlockType _invalidationHandler;
    double _windowLevel;
    long long _priority;
    NSString *_reason;
}

@property (nonatomic, readonly) double windowLevel;
@property (nonatomic, readonly) long long priority;
@property (copy, nonatomic, readonly) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithPriority:(long long)arg1 windowLevel:(double)arg2 reason:(id)arg3 invalidationHandler:(CDUnknownBlockType)arg4;

@end
