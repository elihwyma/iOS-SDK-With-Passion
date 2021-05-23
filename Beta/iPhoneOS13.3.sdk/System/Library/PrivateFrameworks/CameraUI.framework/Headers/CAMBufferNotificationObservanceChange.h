/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMBufferObservanceChange.h>

@class NSObject, NSString;

@interface CAMBufferNotificationObservanceChange : CAMBufferObservanceChange

{
    NSString *_notification;
    NSObject *_object;
}

@property (copy, nonatomic, readonly) NSString *notification;
@property (weak, nonatomic, readonly) NSObject *object;

- (id)initWithNotification:(id)arg1 object:(id)arg2;

@end
