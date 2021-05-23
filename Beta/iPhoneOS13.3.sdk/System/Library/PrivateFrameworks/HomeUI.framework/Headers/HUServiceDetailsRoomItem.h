/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUServiceDetailsAbstractItem.h>

@class HFItemBuilder;

@protocol HFServiceLikeBuilder;

@interface HUServiceDetailsRoomItem : HUServiceDetailsAbstractItem

{
    HFItemBuilder<HFServiceLikeBuilder> *_serviceLikeBuilder;
}

@property (nonatomic, readonly) HFItemBuilder<HFServiceLikeBuilder> *serviceLikeBuilder;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithSourceServiceItem:(id)arg1 home:(id)arg2 serviceLikeBuilder:(id)arg3;

@end
