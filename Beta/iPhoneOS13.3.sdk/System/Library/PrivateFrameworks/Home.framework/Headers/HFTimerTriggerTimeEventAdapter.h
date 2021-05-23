/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFEventBuilder;

@protocol HFTimeEventBuilder;

@interface HFTimerTriggerTimeEventAdapter : NSObject

{
    HFEventBuilder<HFTimeEventBuilder> *_eventBuilder;
}

@property (nonatomic, readonly) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;

+ (id)adapterWithEventBuilder:(id)arg1;

- (id)init;
- (id)initWithEventBuilder:(id)arg1;
- (id)createTriggerWithName:(id)arg1 timeZone:(id)arg2 recurrences:(id)arg3;
- (id)updateTrigger:(id)arg1;

@end
