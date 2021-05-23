/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Foundation/NSObject.h>

@class MCProfileTitlePageMetaDataSectionController, NSString, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface MCProfileTitlePageMetaDataSectionAnimationController : NSObject

{
    MCProfileTitlePageMetaDataSectionController *_sectionController;
    UIView *_iconView;
    UIView *_titleView;
    UIView *_subtitleView;
    UIView *_orgView;
    UIView *_topBar;
    UITableView *_tableView;
    struct CGRect _iconViewOriginFrame;
    struct CGRect _titleLabelOriginFrame;
}

@property (weak, nonatomic) MCProfileTitlePageMetaDataSectionController *sectionController;
@property (weak, nonatomic) UIView *iconView;
@property (weak, nonatomic) UIView *titleView;
@property (weak, nonatomic) UIView *subtitleView;
@property (weak, nonatomic) UIView *orgView;
@property (weak, nonatomic) UIView *topBar;
@property (weak, nonatomic) UITableView *tableView;
@property (nonatomic) struct CGRect iconViewOriginFrame;
@property (nonatomic) struct CGRect titleLabelOriginFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)_putBackViewIfNeeded:(id)arg1 toView:(id)arg2;
- (_Bool)_relocateViewIfNeeded:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)_animateView:(id)arg1 progress:(double)arg2 startFrame:(struct CGRect)arg3 endY:(double)arg4 endScale:(double)arg5 extraYOffset:(double)arg6;
- (void)updateProgressWithTranslationDistance:(double)arg1 referenceDistance:(double)arg2 isScrolling:(_Bool)arg3;
- (double)_alphaWithProgress:(double)arg1 keys:(id)arg2 values:(id)arg3;
- (unsigned long long)_binarySearch:(id)arg1 target:(double)arg2;
- (void)startTrackingWithMetaDataSectionController:(id)arg1 topBar:(id)arg2;

@end
