/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetTrackInspector, AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVAssetTrackInternal : NSObject

{
    AVWeakReference *weakReferenceToSelf;
    AVAssetTrackInspector *trackInspector;
    AVWeakReference *assetWeakReference;
    AVWeakReference *figAssetTrackNotificationListenerWeakReference;
    struct OpaqueFigAssetTrack *figAssetTrackNotificationSource;
}

@end
