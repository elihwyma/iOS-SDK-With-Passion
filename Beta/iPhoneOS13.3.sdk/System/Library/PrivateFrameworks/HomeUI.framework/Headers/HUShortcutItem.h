/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

#import <HomeUI/Swift-Protocol.h>

@class HFTriggerBuilder;

@interface HUShortcutItem : HFItem <Swift>

{
    _Bool _selectable;
    HFTriggerBuilder *_triggerBuilder;
}

@property (nonatomic, readonly) _Bool selectable;
@property (nonatomic, readonly) HFTriggerBuilder *triggerBuilder;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithTriggerBuilder:(id)arg1 selectable:(_Bool)arg2;

@end
