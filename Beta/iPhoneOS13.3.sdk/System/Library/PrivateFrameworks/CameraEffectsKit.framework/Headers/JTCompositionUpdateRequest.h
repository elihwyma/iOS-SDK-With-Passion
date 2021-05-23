/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/JTClipSequencePlayerRequest.h>

@interface JTCompositionUpdateRequest : JTClipSequencePlayerRequest

{
    _Bool _readyForDisplayReceived;
    _Bool _refreshCompletedReceived;
}

@property (nonatomic, readonly) _Bool hasCompleted;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)setReadyForDisplayReceived;
- (void)setRefreshCompletedReceived;

@end
