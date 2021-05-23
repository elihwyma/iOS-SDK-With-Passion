/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTFaceTrackingManager, AVTUIEnvironment, AVTView, AVTViewSession, AVTViewUpdater, NSNotificationCenter, NSString, UIView;

@protocol AVTViewSessionProviderDelegate;

@interface AVTViewSessionProvider : NSObject

{
    id <AVTViewSessionProviderDelegate> _delegate;
    AVTFaceTrackingManager *_faceTrackingManager;
    CDUnknownBlockType _viewCreator;
    UIView *_avtViewContainer;
    AVTView *_avtView;
    AVTViewUpdater *_avtViewUpdater;
    AVTViewSession *_activeSession;
    AVTViewSession *_pendingSession;
    AVTViewSession *_pausedTrackingSession;
    NSNotificationCenter *_notificationCenter;
    AVTUIEnvironment *_environment;
    struct CGSize _avtViewBackingSize;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType viewCreator;
@property (retain, nonatomic) UIView *avtViewContainer;
@property (retain, nonatomic) AVTView *avtView;
@property (retain, nonatomic) AVTViewUpdater *avtViewUpdater;
@property (retain, nonatomic) AVTViewSession *activeSession;
@property (retain, nonatomic) AVTViewSession *pendingSession;
@property (retain, nonatomic) AVTViewSession *pausedTrackingSession;
@property (retain, nonatomic) AVTFaceTrackingManager *faceTrackingManager;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) struct CGSize avtViewBackingSize;
@property (weak, nonatomic) id <AVTViewSessionProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (CDUnknownBlockType)creatorForAVTView;
+ (struct CGSize)backingSizeForEnvironment:(id)arg1;
+ (CDUnknownBlockType)creatorForAVTRecordView;

- (void)dealloc;
- (id)initWithAVTViewBackingSize:(struct CGSize)arg1 viewCreator:(CDUnknownBlockType)arg2 environment:(id)arg3;
- (void)sessionDidTearDown:(id)arg1;
- (id)sessionWithDidBecomeActiveHandler:(CDUnknownBlockType)arg1 tearDownHandler:(CDUnknownBlockType)arg2;
- (void)handleProviderTakesPrimaryStatusNotification:(id)arg1;
- (void)handleProviderReleasesPrimaryStatusNotification:(id)arg1;
- (void)activateNextSession;
- (void)createContainerAndViewIfNeeded;
- (void)didLosePrimaryStatusWithSessionToPause:(id)arg1;
- (void)recoverPrimaryStatus;

@end
