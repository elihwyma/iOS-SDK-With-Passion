/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@interface SBSwitcherModifierAction : NSObject <Swift>

{
    _Bool _consumed;
    double _delay;
    CDUnknownBlockType _validator;
}

@property (copy, nonatomic) CDUnknownBlockType validator;
@property (nonatomic, getter=isConsumed) _Bool consumed;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, readonly) double delay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)actionByAppendingAction:(id)arg1 toAction:(id)arg2;

- (id)init;
- (long long)type;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)appendAction:(id)arg1;
- (void)consumeWithReason:(id)arg1;
- (void)enumerateActionsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)leafCount;
- (void)enumerateLeafActionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setDelay:(double)arg1 withValidator:(CDUnknownBlockType)arg2;

@end
