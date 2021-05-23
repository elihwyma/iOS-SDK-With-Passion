/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAMElapsedTimeView, CAMFlashBadge, CAMFocusLockBadge, CAMLivePhotoBadge, NSMutableDictionary, NSString;

@protocol CAMBadgeTrayDelegate;

@interface CAMBadgeTray : UIView

{
    id <CAMBadgeTrayDelegate> _delegate;
    unsigned long long _visibleBadges;
    NSString *_contentSize;
    NSMutableDictionary *__badgeMap;
}

@property (nonatomic, readonly) NSMutableDictionary *_badgeMap;
@property (weak, nonatomic) id <CAMBadgeTrayDelegate> delegate;
@property (nonatomic) unsigned long long visibleBadges;
@property (retain, nonatomic) NSString *contentSize;
@property (nonatomic, readonly) CAMFlashBadge *flashBadge;
@property (nonatomic, readonly) CAMLivePhotoBadge *livePhotoBadge;
@property (nonatomic, readonly) CAMFocusLockBadge *focusLockBadge;
@property (nonatomic, readonly) CAMElapsedTimeView *elapsedTimeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)badgeViewDidChangeIntrinsicContentSize:(id)arg1;
- (unsigned long long)_badgeFontStyle;
- (id)_createControlForType:(unsigned long long)arg1;
- (void)setVisibleBadges:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_layoutBadges:(unsigned long long)arg1 withVisibleBadges:(unsigned long long)arg2;
- (void)_updateBadgesVisibilityForVisibleBadges:(unsigned long long)arg1;
- (void)_forBadgeTypeInBadgeTypes:(unsigned long long)arg1 do:(CDUnknownBlockType)arg2;
- (void)_loadBadgesIfNeededForTypes:(unsigned long long)arg1;

@end
