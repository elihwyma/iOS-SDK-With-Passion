/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFCondition.h>

@class HMPresenceEvent;

@interface HFPresenceCondition : HFCondition

{
    HMPresenceEvent *_presenceEvent;
}

@property (retain, nonatomic) HMPresenceEvent *presenceEvent;

- (id)initWithPredicate:(id)arg1;
- (id)initWithPresenceEvent:(id)arg1;

@end
