/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIApplication.h>

@interface UIApplication (PhotosUI)

+ (id)pu_debugCurrentAsset;
+ (id)pu_debugCurrentViewModel;
+ (id)_pu_debugSearchViewController:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)pu_firstViewControllerPassingTest:(CDUnknownBlockType)arg1;
+ (id)_pu_debugSearchViewControllerHierarchyUsingBlock:(CDUnknownBlockType)arg1;

- (id)pu_beginDisablingIdleTimer;
- (void)pu_endDisablingIdleTimer:(id)arg1;
- (id)ppt_testDefinitions;
- (void)pu_startedAnimationSubTest:(id)arg1 forTest:(id)arg2;
- (void)pu_finishedAnimationSubTest:(id)arg1 forTest:(id)arg2;

@end
