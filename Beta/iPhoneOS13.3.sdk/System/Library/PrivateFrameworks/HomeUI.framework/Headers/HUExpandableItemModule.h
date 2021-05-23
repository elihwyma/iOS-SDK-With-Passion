/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFItem;

@interface HUExpandableItemModule : HFItemModule

{
    _Bool _showOptions;
}

@property (nonatomic) _Bool showOptions;
@property (nonatomic, readonly) HFItem *showOptionsItem;

@end
