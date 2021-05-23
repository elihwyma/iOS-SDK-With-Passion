/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVDepartureAnnouncingObjectMonitor : NSObject

{
    AVWeakReference *_weakReferenceToMonitoringObject;
}

+ (void)attachDepartureAnnouncingObjectMonitorToObject:(id)arg1 monitoringObject:(id)arg2;

- (void)dealloc;
- (id)initWithMonitoringObject:(id)arg1;

@end
