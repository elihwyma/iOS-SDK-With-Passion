/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class HFLocationTriggerBuilder;

@interface HULocationTriggerSelectedLocationItem : HFItem

{
    HFLocationTriggerBuilder *_triggerBuilder;
}

@property (nonatomic, readonly) HFLocationTriggerBuilder *triggerBuilder;
@property (nonatomic, readonly) _Bool locationCanBeEdited;

- (id)init;
- (id)_locationTitle;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithTriggerBuilder:(id)arg1;
- (_Bool)_locationIsHome;

@end
