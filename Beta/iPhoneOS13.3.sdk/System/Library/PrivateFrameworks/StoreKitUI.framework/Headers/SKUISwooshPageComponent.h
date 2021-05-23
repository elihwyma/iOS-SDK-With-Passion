/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray, NSString, NSURL;

@interface SKUISwooshPageComponent : SKUIPageComponent

{
    NSArray *_bricks;
    long long _fcKind;
    NSArray *_lockups;
    struct SKUILockupStyle _lockupStyle;
    NSArray *_mediaComponents;
    long long _missingDataCount;
    NSString *_platformKeyProfile;
    long long _seeAllStyle;
    NSString *_seeAllTitle;
    NSURL *_seeAllURL;
    _Bool _showsIndexNumbers;
    _Bool _showsItemTitles;
    long long _swooshType;
    NSString *_title;
}

@property (nonatomic, readonly) long long seeAllStyle;
@property (nonatomic, readonly) NSString *seeAllTitle;
@property (nonatomic, readonly) NSURL *seeAllURL;
@property (nonatomic, readonly) long long swooshType;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *lockups;
@property (nonatomic, readonly) struct SKUILockupStyle lockupStyle;
@property (nonatomic, readonly) NSString *platformKeyProfile;
@property (nonatomic, readonly) _Bool showsIndexNumbers;
@property (nonatomic, readonly) NSArray *bricks;
@property (nonatomic, readonly) _Bool showsBrickTitles;
@property (nonatomic, readonly) NSArray *mediaComponents;
@property (nonatomic, readonly) _Bool showsMediaTitles;

- (id)initWithItemList:(id)arg1;
- (long long)componentType;
- (id)valueForMetricsField:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)isMissingItemData;
- (id)metricsElementName;
- (id)initWithRoomContext:(id)arg1;
- (id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(struct SKUILockupStyle)arg2;
- (void)_updateBricksWithItems:(id)arg1;
- (void)_updateLockupItemsWithLookupResponse:(id)arg1;
- (id)_updateLockupItemsWithItems:(id)arg1;
- (id)initWithLockups:(id)arg1 swooshType:(long long)arg2 title:(id)arg3;
- (id)initWithRelatedContentContext:(id)arg1;
- (void)_setSeeAllValuesWithLinkInfo:(id)arg1;
- (id)_brickItemsWithChildren:(id)arg1 customPageContext:(id)arg2;
- (id)_lockupsWithChildren:(id)arg1 context:(id)arg2;
- (id)_mediaComponentsWithChildren:(id)arg1 context:(id)arg2;
- (void)_reloadMissingDataCount;
- (id)_brickItemsWithChildren:(id)arg1 featuredPageContext:(id)arg2;
- (id)_lockupsWithChildren:(id)arg1 featuredPageContext:(id)arg2;
- (struct SKUILockupStyle)_lockupStyleWithLockups:(id)arg1;
- (void)_updateLockup:(id)arg1 withItem:(id)arg2;
- (_Bool)_isBrickAvailable:(id)arg1 withPageContext:(id)arg2;
- (unsigned long long)_defaultVisibleFieldsForItemKind:(long long)arg1;
- (id)_lockupWithItemIdentifier:(id)arg1 context:(id)arg2;

@end
