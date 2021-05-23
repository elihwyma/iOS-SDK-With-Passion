/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemProvider.h>

@class NSMutableSet;

@protocol HFMediaProfileContainer;

@interface HUAppleMusicAccountItemProvider : HFItemProvider

{
    NSMutableSet *_items;
    id <HFMediaProfileContainer> _mediaProfileContainer;
    CDUnknownBlockType _filter;
}

@property (retain, nonatomic) NSMutableSet *items;
@property (nonatomic, readonly) id <HFMediaProfileContainer> mediaProfileContainer;
@property (copy, nonatomic) CDUnknownBlockType filter;

- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithMediaProfileContainer:(id)arg1;

@end
