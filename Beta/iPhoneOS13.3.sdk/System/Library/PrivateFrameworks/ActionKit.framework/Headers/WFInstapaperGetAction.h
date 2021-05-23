/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFInstapaperAction.h>

@interface WFInstapaperGetAction : WFInstapaperAction

- (void)runAsynchronouslyWithInput:(id)arg1 selectedFolder:(id)arg2;
- (id)connectionTypes;
- (void)engine:(id)arg1 connection:(id)arg2 didReceiveBookmarks:(id)arg3 ofUser:(id)arg4 forFolder:(id)arg5;
- (_Bool)includeSpecialFolders;

@end
