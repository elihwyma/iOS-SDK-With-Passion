/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSString, UIView;

@interface PXFooterViewModel : PXObservable

{
    _Bool _isPaused;
    float _progress;
    long long _animatedIconMode;
    NSString *_title;
    NSString *_extendedTitle;
    NSString *_subtitle1;
    NSString *_subtitle2;
    long long _actionStyle;
    NSString *_actionTitle;
    NSString *_actionConfirmationAlertTitle;
    NSString *_actionConfirmationAlertSubtitle;
    NSString *_actionConfirmationAlertButtonTitle;
    CDUnknownBlockType _action;
    UIView *_accessoryView;
}

@property (nonatomic, readonly) long long animatedIconMode;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *extendedTitle;
@property (nonatomic, readonly) NSString *subtitle1;
@property (nonatomic, readonly) NSString *subtitle2;
@property (nonatomic, readonly) _Bool isPaused;
@property (nonatomic, readonly) float progress;
@property (nonatomic, readonly) long long actionStyle;
@property (nonatomic, readonly) NSString *actionTitle;
@property (nonatomic, readonly) NSString *actionConfirmationAlertTitle;
@property (nonatomic, readonly) NSString *actionConfirmationAlertSubtitle;
@property (nonatomic, readonly) NSString *actionConfirmationAlertButtonTitle;
@property (copy, nonatomic, readonly) CDUnknownBlockType action;
@property (nonatomic, readonly) UIView *accessoryView;

- (id)init;
- (void)setTitle:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setAction:(CDUnknownBlockType)arg1;
- (void)setAccessoryView:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;
- (void)setIsPaused:(_Bool)arg1;
- (void)setActionTitle:(id)arg1;
- (void)footerAnimationCrossedGridCycleBoundary;
- (void)setExtendedTitle:(id)arg1;
- (void)setSubtitle1:(id)arg1;
- (void)setSubtitle2:(id)arg1;
- (void)setActionConfirmationAlertTitle:(id)arg1;
- (void)setActionConfirmationAlertSubtitle:(id)arg1;
- (void)setActionConfirmationAlertButtonTitle:(id)arg1;
- (void)setAnimatedIconMode:(long long)arg1;

@end
