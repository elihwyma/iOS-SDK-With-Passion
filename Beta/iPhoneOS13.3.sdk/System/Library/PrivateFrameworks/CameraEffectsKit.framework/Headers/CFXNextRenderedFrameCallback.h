/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@interface CFXNextRenderedFrameCallback : NSObject

{
    CDUnknownBlockType _block;
    CDStruct_1b6d18a9 _sendAfterRenderTime;
}

@property (nonatomic, readonly) CDStruct_1b6d18a9 sendAfterRenderTime;
@property (nonatomic, readonly) CDUnknownBlockType block;

- (id)initWithBlock:(CDUnknownBlockType)arg1 sendAfterRenderTime:(CDStruct_1b6d18a9)arg2;

@end
