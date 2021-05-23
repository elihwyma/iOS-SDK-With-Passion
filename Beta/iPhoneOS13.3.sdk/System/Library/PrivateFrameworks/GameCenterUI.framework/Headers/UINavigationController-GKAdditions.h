/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UINavigationController.h>

@class NSString;

@interface UINavigationController (GKAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_gkForceNextContentUpdate;
- (void)_gkResetContents;
- (void)_gkSetContentsNeedUpdateWithHandler:(CDUnknownBlockType)arg1;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkSetViewControllers:(id)arg1 transition:(id)arg2;
- (void)_gkReplaceTopViewControllerWithViewController:(id)arg1 transition:(id)arg2;

@end
