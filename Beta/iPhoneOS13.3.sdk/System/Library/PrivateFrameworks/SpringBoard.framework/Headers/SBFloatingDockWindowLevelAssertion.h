/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@interface SBFloatingDockWindowLevelAssertion : NSObject <Swift>

{
    unsigned long long _priority;
    double _level;
    NSString *_reason;
}

@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, readonly) double level;
@property (copy, nonatomic, readonly) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithPriority:(unsigned long long)arg1 level:(double)arg2 reason:(id)arg3;

@end
