/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <SpringBoardServices/SBSApplicationShortcutSystemIcon.h>

@class UIImage;

@interface SBSApplicationShortcutSystemIcon (SBUIAdditions)

@property (nonatomic, readonly) UIImage *sbui_systemImage;
@property (nonatomic, readonly) UIImage *sbui_image;

+ (id)sbui_defaultImage;

@end
