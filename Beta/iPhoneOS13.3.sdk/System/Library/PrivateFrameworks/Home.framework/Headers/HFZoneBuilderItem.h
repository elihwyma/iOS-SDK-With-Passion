/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

@class HFZoneBuilder;

@interface HFZoneBuilderItem : HFItem

{
    HFZoneBuilder *_zoneBuilder;
}

@property (nonatomic, readonly) HFZoneBuilder *zoneBuilder;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithZoneBuilder:(id)arg1;

@end
