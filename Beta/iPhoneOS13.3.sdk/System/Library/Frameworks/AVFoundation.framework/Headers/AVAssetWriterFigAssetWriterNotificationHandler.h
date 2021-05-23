/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference;

@protocol AVAssetWriterFigAssetWriterNotificationHandlerDelegate;

__attribute__((visibility("hidden")))
@interface AVAssetWriterFigAssetWriterNotificationHandler : NSObject

{
    struct OpaqueFigAssetWriter *_figAssetWriter;
    int _didNotCallDelegate;
    AVWeakReference *_weakReferenceToSelf;
    AVWeakReference *_weakReferenceToDelegate;
    int _notificationHandlersAreRegistered;
}

@property (retain, getter=_weakReferenceToDelegate, setter=_setWeakReferenceToDelegate:) AVWeakReference *weakReferenceToDelegate;
@property (weak) id <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> delegate;

- (void)dealloc;
- (void)_handleServerDiedNotification;
- (void)_teardownNotificationHandlers;
- (void)_callDelegateIfNotCalledWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1;
- (void)_handleCompletedWritingNotification;
- (void)_handleFailedNotificationWithError:(id)arg1;

@end
