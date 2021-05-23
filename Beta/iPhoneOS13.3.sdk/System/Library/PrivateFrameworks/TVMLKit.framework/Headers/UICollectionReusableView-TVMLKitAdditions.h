/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UICollectionReusableView.h>

@interface UICollectionReusableView (TVMLKitAdditions)

@property (nonatomic, setter=tv_setBelongsToOldIndexPath:) _Bool tv_belongsToOldIndexPath;
@property (nonatomic, getter=tv_isDisplayed, setter=tv_setDisplayed:) _Bool tv_displayed;
@property (nonatomic, getter=tv_isFocused, setter=tv_setFocused:) _Bool tv_focused;

@end
