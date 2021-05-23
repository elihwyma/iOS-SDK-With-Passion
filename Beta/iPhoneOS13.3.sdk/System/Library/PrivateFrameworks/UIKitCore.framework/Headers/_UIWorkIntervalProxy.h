/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIWorkIntervalProxy : NSObject

{
    struct work_interval_instance *_instance;
    _Bool _complex;
    _Bool _started;
    double _targetTimestamp;
    double _frameDuration;
}

- (id)init;
- (void)dealloc;

@end
