/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@protocol HFMediaProfileContainer;

@interface HUAppleMusicItem : HFItem

{
    id <HFMediaProfileContainer> _mediaProfileContainer;
}

@property (nonatomic, readonly) id <HFMediaProfileContainer> mediaProfileContainer;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1;

@end
