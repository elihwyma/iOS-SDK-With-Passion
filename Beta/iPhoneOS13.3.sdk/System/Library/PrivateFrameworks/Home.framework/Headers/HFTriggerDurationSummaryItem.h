/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

@class HFTriggerBuilder;

@interface HFTriggerDurationSummaryItem : HFItem

{
    HFTriggerBuilder *_triggerBuilder;
}

@property (nonatomic, readonly) HFTriggerBuilder *triggerBuilder;

+ (id)formattedStringForDuration:(id)arg1 style:(unsigned long long)arg2;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithTriggerBuilder:(id)arg1;

@end
