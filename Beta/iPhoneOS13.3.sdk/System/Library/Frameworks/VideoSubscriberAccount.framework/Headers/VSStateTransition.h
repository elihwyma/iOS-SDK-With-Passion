/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class VSOptional;

@interface VSStateTransition : NSObject

{
    VSOptional *_previousState;
    VSOptional *_triggeringEvent;
    VSOptional *_nextState;
}

@property (retain, nonatomic) VSOptional *previousState;
@property (retain, nonatomic) VSOptional *triggeringEvent;
@property (retain, nonatomic) VSOptional *nextState;

- (id)init;

@end
