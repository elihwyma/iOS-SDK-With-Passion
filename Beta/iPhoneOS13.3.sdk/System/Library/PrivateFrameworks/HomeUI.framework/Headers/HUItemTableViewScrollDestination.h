/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HFItem;

@interface HUItemTableViewScrollDestination : NSObject

{
    _Bool _animated;
    HFItem *_item;
}

@property (nonatomic, readonly) HFItem *item;
@property (nonatomic, readonly, getter=isAnimated) _Bool animated;

- (id)initWithItem:(id)arg1 animated:(_Bool)arg2;

@end
