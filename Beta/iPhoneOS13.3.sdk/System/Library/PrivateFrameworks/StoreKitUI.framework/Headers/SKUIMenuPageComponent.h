/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray, NSMutableArray, NSString, SKUISegmentedControlViewElement;

__attribute__((visibility("hidden")))
@interface SKUIMenuPageComponent : SKUIPageComponent

{
    NSMutableArray *_childrenComponents;
    long long _defaultSelectedIndex;
    long long _menuStyle;
    NSString *_menuTitle;
    float _menuTitleFontSize;
    long long _menuTitleFontWeight;
    NSMutableArray *_sortURLStrings;
    NSString *_titleForMoreItem;
    NSMutableArray *_titles;
}

@property (nonatomic, readonly) SKUISegmentedControlViewElement *viewElement;
@property (nonatomic, readonly) long long menuStyle;
@property (nonatomic, readonly) NSString *menuTitle;
@property (nonatomic, readonly) float menuTitleFontSize;
@property (nonatomic, readonly) long long menuTitleFontWeight;
@property (nonatomic, readonly) long long defaultSelectedIndex;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly) NSArray *allTitles;
@property (nonatomic, readonly) NSString *titleForMoreItem;

- (long long)componentType;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (id)childComponentsForIndex:(long long)arg1;
- (id)initWithRoomSortData:(id)arg1;
- (void)_setChildComponents:(id)arg1 forIndex:(long long)arg2;
- (id)_componentWithContext:(id)arg1;
- (id)sortURLForIndex:(long long)arg1;
- (id)titleForIndex:(long long)arg1;

@end
