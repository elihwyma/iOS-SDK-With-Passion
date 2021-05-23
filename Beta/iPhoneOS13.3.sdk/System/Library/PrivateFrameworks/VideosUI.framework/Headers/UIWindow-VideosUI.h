/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIWindow.h>

@interface UIWindow (VideosUI)

+ (long long)vui_currentSizeClass;
+ (id)vui_keyWindow;
+ (struct UIEdgeInsets)vui_paddingForElement:(id)arg1;
+ (double)vui_itemWidthForGridStyle:(long long)arg1 gridType:(long long)arg2;
+ (long long)vui_layoutType;
+ (struct UIEdgeInsets)vui_padding;
+ (double)vui_itemWidthForGridStyle:(long long)arg1 gridType:(long long)arg2 numGridColumns:(unsigned long long)arg3 element:(id)arg4;
+ (double)vui_collectionInteritemSpace:(long long)arg1 gridType:(long long)arg2 withElement:(id)arg3;
+ (long long)vui_currentSizeClassForElement:(id)arg1;
+ (struct UIEdgeInsets)_safeAreaInsetsForDeviceWithElement:(id)arg1;
+ (double)vui_itemWidthForGridStyle:(long long)arg1 gridType:(long long)arg2 numGridColumns:(unsigned long long)arg3;
+ (double)_vui_interitemSpaceForSizeClass:(long long)arg1 gridType:(long long)arg2;
+ (double)_adjustedWindowSizeFor:(id)arg1;
+ (double)vui_collectionInteritemSpace:(long long)arg1 gridType:(long long)arg2;

@end
