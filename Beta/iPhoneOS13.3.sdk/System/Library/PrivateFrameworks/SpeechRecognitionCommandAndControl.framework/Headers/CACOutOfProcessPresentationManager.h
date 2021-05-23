/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class CACAXNotificationObserver;

@interface CACOutOfProcessPresentationManager : NSObject

{
    CACAXNotificationObserver *_observer;
}

@property (retain, nonatomic) CACAXNotificationObserver *observer;

+ (long long)remoteViewType;
+ (int)axNotification;

- (id)init;
- (void)hide;
- (_Bool)isShowing;
- (_Bool)isOverlay;
- (_Bool)isOutOfProcess;
- (void)handleAXNotificationData:(void *)arg1;
- (void)hideWithoutAnimation;
- (void)observer:(id)arg1 didObserveNotification:(int)arg2 notificationData:(void *)arg3;
- (void)presentWithData:(id)arg1;

@end
