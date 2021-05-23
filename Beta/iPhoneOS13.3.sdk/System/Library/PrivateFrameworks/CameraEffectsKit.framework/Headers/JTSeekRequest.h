/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/JTClipSequencePlayerRequest.h>

@interface JTSeekRequest : JTClipSequencePlayerRequest

{
    int _seekTime;
}

@property (nonatomic) int seekTime;

- (id)description;
- (id)initWithBlock:(CDUnknownBlockType)arg1 withSeekTime:(int)arg2;

@end
