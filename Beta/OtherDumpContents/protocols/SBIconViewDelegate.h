/* Generated by RuntimeBrowser.
 */

@protocol SBIconViewDelegate <NSObject>

@optional

- (UIColor *)accessibilityTintColorForIconView:(SBIconView *)arg1;
- (double)additionalDragLiftScaleForIconView:(SBIconView *)arg1;
- (NSURL *)applicationBundleURLForShortcutsWithIconView:(SBIconView *)arg1;
- (NSString *)applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(SBIconView *)arg1;
- (UIView *)backgroundViewForComponentsOfIconView:(SBIconView *)arg1;
- (long long)closeBoxTypeForIconView:(SBIconView *)arg1;
- (UIView *)containerViewForPresentingContextMenuForIconView:(SBIconView *)arg1;
- (UIView *)customPresentingContainerViewForShortcutsPresentationWithIconView:(SBIconView *)arg1;
- (bool)icon:(SBIconView *)arg1 canReceiveGrabbedIcon:(SBIcon *)arg2;
- (void)icon:(SBIconView *)arg1 openFolder:(SBFolder *)arg2 animated:(bool)arg3;
- (void)icon:(SBIconView *)arg1 touchEnded:(bool)arg2;
- (void)icon:(SBIconView *)arg1 touchMoved:(UITouch *)arg2;
- (void)iconCloseBoxTapped:(SBIconView *)arg1;
- (bool)iconShouldAllowCloseBoxTap:(SBIconView *)arg1;
- (bool)iconShouldAllowTap:(SBIconView *)arg1;
- (void)iconTapped:(SBIconView *)arg1;
- (void)iconTouchBegan:(SBIconView *)arg1;
- (NSArray *)iconView:(SBIconView *)arg1 applicationShortcutItemsWithProposedItems:(NSArray *)arg2;
- (bool)iconView:(SBIconView *)arg1 canAddDragItemsToSession:(id <UIDragSession>)arg2;
- (void)iconView:(SBIconView *)arg1 didEndDragSession:(id <UIDragSession>)arg2 withOperation:(unsigned long long)arg3;
- (void)iconView:(SBIconView *)arg1 dragLiftAnimationDidChangeDirection:(long long)arg2;
- (UITargetedDragPreview *)iconView:(SBIconView *)arg1 dragPreviewForItem:(UIDragItem *)arg2 session:(id <UIDragSession>)arg3 previewParameters:(UIDragPreviewParameters *)arg4;
- (long long)iconView:(SBIconView *)arg1 draggingStartLocationWithProposedStartLocation:(long long)arg2;
- (bool)iconView:(SBIconView *)arg1 editingModeGestureRecognizerDidFire:(UIGestureRecognizer *)arg2;
- (UIView<SBIconAccessoryView> *)iconView:(SBIconView *)arg1 iconAccessoryViewOfClass:(Class)arg2;
- (UIView<SBIconLabelAccessoryView> *)iconView:(SBIconView *)arg1 iconLabelAccessoryViewOfType:(long long)arg2;
- (void)iconView:(SBIconView *)arg1 item:(UIDragItem *)arg2 willAnimateDragCancelWithAnimator:(id <UIDragAnimating>)arg3;
- (SBIconLabelImage *)iconView:(SBIconView *)arg1 labelImageWithParameters:(SBIconLabelImageParameters *)arg2;
- (SBFParallaxSettings *)iconView:(SBIconView *)arg1 parallaxSettingsForIconAccessoryView:(UIView<SBIconAccessoryView> *)arg2;
- (void)iconView:(SBIconView *)arg1 session:(id <UIDragSession>)arg2 willEndWithOperation:(unsigned long long)arg3;
- (bool)iconView:(SBIconView *)arg1 shouldActivateApplicationShortcutItem:(SBSApplicationShortcutItem *)arg2 atIndex:(unsigned long long)arg3;
- (bool)iconView:(SBIconView *)arg1 shouldContinueToUseBackgroundViewForComponents:(UIView *)arg2;
- (void)iconView:(SBIconView *)arg1 willAddDragItems:(NSArray *)arg2 toSession:(id <UIDragSession>)arg3;
- (void)iconView:(SBIconView *)arg1 willAnimateDragLiftWithAnimator:(id <UIDragAnimating>)arg2 session:(id <UIDragSession>)arg3;
- (void)iconView:(SBIconView *)arg1 willRemoveIconAccessoryView:(UIView<SBIconAccessoryView> *)arg2;
- (void)iconView:(SBIconView *)arg1 willRemoveIconImageView:(SBIconImageView *)arg2;
- (void)iconView:(SBIconView *)arg1 willRemoveIconLabelAccessoryView:(UIView<SBIconLabelAccessoryView> *)arg2;
- (void)iconView:(SBIconView *)arg1 willUseContextMenuStyle:(_UIContextMenuStyle *)arg2;
- (void)iconView:(SBIconView *)arg1 willUsePreviewForCancelling:(UITargetedDragPreview *)arg2 targetIconView:(SBIconView *)arg3;
- (bool)iconViewCanBeginDrags:(SBIconView *)arg1;
- (bool)iconViewDisplaysBadges:(SBIconView *)arg1;
- (bool)iconViewDisplaysCloseBox:(SBIconView *)arg1;
- (void)iconViewShortcutsPresentationDidCancel:(SBIconView *)arg1;
- (void)iconViewShortcutsPresentationDidFinish:(SBIconView *)arg1;
- (bool)iconViewShouldBeginShortcutsPresentation:(SBIconView *)arg1;
- (void)iconViewWasRecycled:(SBIconView *)arg1;
- (void)iconViewWillBeginDrag:(SBIconView *)arg1 session:(id <UIDragSession>)arg2;
- (SBIconView *)iconViewWillCancelDrag:(SBIconView *)arg1;
- (SBIconImageView *)imageViewForIconView:(SBIconView *)arg1;
- (NSSet *)launchActionsForIconView:(SBIconView *)arg1;
- (NSURL *)launchURLForIconView:(SBIconView *)arg1;
- (double)scale;

@end