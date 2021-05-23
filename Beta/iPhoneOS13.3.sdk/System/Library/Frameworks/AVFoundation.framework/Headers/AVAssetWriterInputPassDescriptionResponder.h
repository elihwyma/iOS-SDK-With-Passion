/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetWriterInputPassDescription;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputPassDescriptionResponder : NSObject

{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _stoppedResponding;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    _Bool _hasRespondedAtLeastOnce;
    AVAssetWriterInputPassDescription *_mostRecentPassDescription;
    CDUnknownBlockType _callbackBlock;
}

- (id)init;
- (void)dealloc;
- (id)initWithCallbackQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)respondToNewPassDescription:(id)arg1;
- (void)stopRespondingToPassDescriptions;
- (_Bool)_hasStoppedResponding;
- (void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;

@end
