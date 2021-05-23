/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class CATState;

@interface CATTransition : NSObject

{
    CATState *_state;
    SEL _action;
}

@property (weak, nonatomic, readonly) CATState *state;
@property (nonatomic, readonly) SEL action;

+ (id)new;

- (id)init;
- (id)description;
- (id)initWithState:(id)arg1 action:(SEL)arg2;

@end
