/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <iTunesStoreUI/SUNavigationBar.h>

@class NSString;

@interface SKUIScrollingTabNavigationBar : SUNavigationBar

{
    struct UIOffset _positionOffset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct UIOffset positionOffset;

- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end
