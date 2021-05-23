/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CATState : NSObject

{
    NSMutableDictionary *mTranstionByTriggeringEvent;
    NSString *_name;
    SEL _enterAction;
    SEL _exitAction;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic) SEL enterAction;
@property (nonatomic) SEL exitAction;

+ (id)new;

- (id)init;
- (id)description;
- (id)initWithName:(id)arg1;
- (void)addTransitionToState:(id)arg1 triggeringEvent:(id)arg2 action:(SEL)arg3;
- (void)addTransitionToState:(id)arg1 triggeringEvent:(id)arg2;
- (id)transitionWithTriggeringEvent:(id)arg1;

@end
