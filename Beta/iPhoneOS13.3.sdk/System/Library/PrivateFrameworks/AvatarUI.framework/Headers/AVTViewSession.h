/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTView, AVTViewUpdater, UIView;

@protocol AVTViewSessionDelegate;

@interface AVTViewSession : NSObject

{
    _Bool _active;
    UIView *_avtViewContainer;
    AVTView *_avtView;
    AVTViewUpdater *_avtViewUpdater;
    CDUnknownBlockType _becomeActiveHandler;
    CDUnknownBlockType _tearDownHandler;
    id <AVTViewSessionDelegate> _delegate;
    struct CGSize _aspectRatio;
}

@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic) UIView *avtViewContainer;
@property (nonatomic) AVTViewUpdater *avtViewUpdater;
@property (nonatomic) AVTView *avtView;
@property (copy, nonatomic, readonly) CDUnknownBlockType becomeActiveHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType tearDownHandler;
@property (weak, nonatomic) id <AVTViewSessionDelegate> delegate;
@property (nonatomic, readonly) struct CGSize aspectRatio;

- (id)initWithBecomeActiveHandler:(CDUnknownBlockType)arg1 tearDownHandler:(CDUnknownBlockType)arg2 aspectRatio:(struct CGSize)arg3;
- (void)activateWithAVTView:(id)arg1 container:(id)arg2 updater:(id)arg3;
- (void)tearDownWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
