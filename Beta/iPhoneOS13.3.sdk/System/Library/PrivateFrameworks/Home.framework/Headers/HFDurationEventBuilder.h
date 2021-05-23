/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFEventBuilder.h>

@interface HFDurationEventBuilder : HFEventBuilder

{
    double _duration;
}

@property (nonatomic) double duration;

- (id)description;
- (id)initWithEvent:(id)arg1;
- (id)buildNewEventFromCurrentState;

@end
