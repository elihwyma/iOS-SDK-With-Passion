/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@interface SBHIconApplicationShortcutListComposer : NSObject

+ (id)filteredApplicationShortcutItemsWithStaticApplicationShortcutItems:(id)arg1 dynamicApplicationShortcutItems:(id)arg2;
+ (_Bool)supportsMultiwindowShortcut;
+ (id)composedShortcutsForApplicationWithBundleIdentifier:(id)arg1 iconDisplayName:(id)arg2 staticItems:(id)arg3 dynamicItems:(id)arg4 applicationItemID:(unsigned long long)arg5 numberOfDisplayItemsInSwitcher:(long long)arg6 supportsMultipleWindows:(_Bool)arg7 isSystemApplication:(_Bool)arg8 isInternalApplication:(_Bool)arg9 isApplicationInBeta:(_Bool)arg10 removeStyle:(long long)arg11;
+ (id)composedShortcutsForBookmarkWithDisplayName:(id)arg1 removeStyle:(long long)arg2;
+ (id)composedShortcutsForDownloadingApplicationWithBundleIdentifier:(id)arg1 iconDisplayName:(id)arg2 prioritizationIsAvailable:(_Bool)arg3 downloadingInformationAgent:(id)arg4 canShare:(_Bool)arg5;
+ (id)composedShortcutsForFolderIcon:(id)arg1 iconImageCache:(id)arg2 iconManagerAllowsEditing:(_Bool)arg3 badgeViewGenerator:(CDUnknownBlockType)arg4;

@end
