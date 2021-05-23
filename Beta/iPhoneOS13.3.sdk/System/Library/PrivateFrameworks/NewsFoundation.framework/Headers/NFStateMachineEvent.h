/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NFStateMachineState, NSSet, NSString;

@interface NFStateMachineEvent : NSObject

{
    NSString *_name;
    NSSet *_states;
    NFStateMachineState *_destinationState;
    CDUnknownBlockType _fireBlock;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *states;
@property (retain, nonatomic) NFStateMachineState *destinationState;
@property (copy, nonatomic) CDUnknownBlockType fireBlock;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)fired:(id)arg1 withOwner:(id)arg2;
- (id)initWithName:(id)arg1 transitionFromStates:(id)arg2 toState:(id)arg3;
- (id)onFire:(CDUnknownBlockType)arg1;

@end
