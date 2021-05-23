/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UINavigationItem, _UINavigationBarLayout;

__attribute__((visibility("hidden")))
@interface _UINavigationBarItemStackEntry : NSObject

{
    _Bool _searchActive;
    UINavigationItem *_item;
    _UINavigationBarLayout *_normalLayout;
    _UINavigationBarLayout *_searchLayout;
}

@property (nonatomic, readonly) UINavigationItem *item;
@property (nonatomic, readonly) _UINavigationBarLayout *activeLayout;
@property (nonatomic, readonly) _UINavigationBarLayout *inactiveLayout;
@property (nonatomic, getter=isSearchActive) _Bool searchActive;
@property (retain, nonatomic) _UINavigationBarLayout *normalLayout;
@property (retain, nonatomic) _UINavigationBarLayout *searchLayout;

+ (id)newEntryForItem:(id)arg1;
+ (id)entryForItem:(id)arg1 replaceExistingWithNew:(_Bool)arg2;

- (void)dealloc;
- (id)description;
- (void)updateStateFromCounterpart:(id)arg1;

@end
