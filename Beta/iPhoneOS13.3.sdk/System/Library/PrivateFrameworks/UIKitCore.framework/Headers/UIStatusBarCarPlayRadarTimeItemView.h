/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarCarPlayTimeItemView.h>

__attribute__((visibility("hidden")))
@interface UIStatusBarCarPlayRadarTimeItemView : UIStatusBarCarPlayTimeItemView

{
    _Bool _isInternalInstall;
    _Bool _radarItemEnabled;
    _Bool _currentlyGatheringLogs;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canBecomeFocused;
- (long long)buttonType;
- (_Bool)showsTouchWhenHighlighted;
- (_Bool)allowsUserInteraction;
- (id)contentsImage;
- (id)highlightImage;
- (_Bool)usesAdvancedActions;
- (id)_timeImageSet;
- (void)_gatheringLogsDidChangeStatusNotification:(id)arg1;
- (_Bool)_showRadarButtonForInternalInstalls;

@end
