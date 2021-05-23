/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UITabBarController.h>

@class NSString;

@interface UITabBarController (GKAdditions)

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

@end
