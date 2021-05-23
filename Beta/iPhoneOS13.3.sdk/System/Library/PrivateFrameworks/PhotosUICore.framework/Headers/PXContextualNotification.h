/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVVideoComposition, NSString, NSValue, PXContextualNotificationCenter, PXContextualNotificationView, PXImageRequester, UIImage, UIView, UIWindow;

@protocol PXContextualNotificationDelegate;

@interface PXContextualNotification : NSObject

{
    struct {
        _Bool containingFrameInCoordinateSpace;
        _Bool preferredContainerView;
        _Bool preferredAnimation;
        _Bool shouldPassthroughPointInCoordinateSpace;
        _Bool wasTapped;
        _Bool wasDiscarded;
        _Bool didAppear;
        _Bool didDisappear;
    } _delegateRespondsTo;
    id <PXContextualNotificationDelegate> _delegate;
    long long _style;
    NSString *_title;
    UIImage *_titleIcon;
    NSString *_message;
    UIImage *_image;
    AVAsset *_loopingVideoAsset;
    AVVideoComposition *_loopingVideoComposition;
    PXImageRequester *_imageRequester;
    id _userInfo;
    long long _appearanceState;
    UIWindow *_window;
    PXContextualNotificationCenter *_contextualNotificationCenter;
    PXContextualNotificationView *_view;
    long long _animationCount;
    NSValue *_releaseVelocity;
    double _panInitialVerticalOffset;
    struct PXContextualNotificationVisualState _nextState;
    struct PXContextualNotificationVisualState _appliedState;
}

@property (nonatomic) long long appearanceState;
@property (weak, nonatomic) PXContextualNotificationCenter *contextualNotificationCenter;
@property (retain, nonatomic) PXContextualNotificationView *view;
@property (nonatomic) struct PXContextualNotificationVisualState nextState;
@property (nonatomic) struct PXContextualNotificationVisualState appliedState;
@property (nonatomic) long long animationCount;
@property (retain, nonatomic) NSValue *releaseVelocity;
@property (nonatomic) double panInitialVerticalOffset;
@property (nonatomic, readonly) UIView *preferredContainerView;
@property (nonatomic, readonly) long long preferredAnimation;
@property (weak, nonatomic) id <PXContextualNotificationDelegate> delegate;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *titleIcon;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) AVAsset *loopingVideoAsset;
@property (copy, nonatomic) AVVideoComposition *loopingVideoComposition;
@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (retain, nonatomic) id userInfo;
@property (weak, nonatomic) UIWindow *window;

- (id)init;
- (void)_invalidate;
- (void)invalidateLayout;
- (void)dismiss;
- (void)present;
- (void)handleTap:(id)arg1;
- (struct CGRect)containingFrameInContainerView:(id)arg1;
- (_Bool)shouldPassthroughPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)handleDiscard;

@end
