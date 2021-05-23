/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMBufferObservance.h>

@class NSNotificationCenter, NSObject, NSString;

@interface CAMBufferNotificationObservance : CAMBufferObservance

{
    NSString *_notification;
    NSObject *_object;
    NSNotificationCenter *_notificationCenter;
}

@property (copy, nonatomic, readonly) NSString *notification;
@property (weak, nonatomic, readonly) NSObject *object;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;

- (void)setupObservanceForBuffer:(id)arg1;
- (void)teardownObservanceForBuffer:(id)arg1;
- (void)fulfillWithChange:(id)arg1;
- (id)initWithNotification:(id)arg1 object:(id)arg2 center:(id)arg3 removeOnceEnabled:(_Bool)arg4;

@end
