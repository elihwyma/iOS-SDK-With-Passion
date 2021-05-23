/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <SpringBoardServices/SBSApplicationShortcutItem.h>

@class UIView;

@interface SBSApplicationShortcutItem (SBUIAdditions)

@property (retain, nonatomic) UIView *badgeView;

- (id)_assetManager;
- (id)_monogrammerForKey:(char *)arg1 style:(long long)arg2;
- (void)_setupAssetManagerWithApplicationBundleURL:(id)arg1;
- (id)_lightMonogrammer;
- (id)_darkMonogrammer;
- (void)sb_buildIconImageWithApplicationBundleURL:(id)arg1 image:(id *)arg2 systemImageName:(id *)arg3;

@end
