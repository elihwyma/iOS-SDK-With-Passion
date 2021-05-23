/*
 Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BorealisServerSpeakerStateHysteresisNotifier : NSObject

{
    _Bool _speakerStateListeningEnabled;
    _Bool _lastStateSent;
    float _hysteresisDurationSeconds;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _notificationBlock;
    long long _generation;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) float hysteresisDurationSeconds;
@property (nonatomic) _Bool speakerStateListeningEnabled;
@property (copy, nonatomic) CDUnknownBlockType notificationBlock;
@property (nonatomic) _Bool lastStateSent;
@property (nonatomic) long long generation;

- (id)initWithSerialQueue:(id)arg1 hysteresisDurationSeconds:(float)arg2 notificationBlock:(CDUnknownBlockType)arg3;
- (void)callNotificationBlock:(_Bool)arg1;
- (void)stateChanged:(_Bool)arg1;
- (void)sendState;

@end
