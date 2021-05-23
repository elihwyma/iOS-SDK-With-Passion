/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardServices/SBSApplicationShortcutItem.h>

@interface SBSApplicationShortcutItem (SBHAdditions)

@property (nonatomic, readonly) _Bool sbh_isSystemShortcut;
@property (nonatomic, readonly) _Bool sbh_isShortcutSpringBoardOnly;
@property (nonatomic, readonly) _Bool sbh_isDestructive;

@end
