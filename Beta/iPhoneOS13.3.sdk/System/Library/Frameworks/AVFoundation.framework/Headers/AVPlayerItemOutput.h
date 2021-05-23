/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject

{
    AVPlayerItemOutputInternal *_outputInternal;
}

@property (nonatomic) _Bool suppressesPlayerRendering;

- (id)init;
- (void)dealloc;
- (id)_weakReference;
- (_Bool)_attachToPlayerItem:(id)arg1;
- (void)_setTimebase:(struct OpaqueCMTimebase *)arg1;
- (void)_detachFromPlayerItem;
- (struct OpaqueCMTimebase *)_copyTimebase;
- (CDStruct_1b6d18a9)_itemTimeForHostTimeAsCMTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)itemTimeForHostTime:(double)arg1;
- (CDStruct_1b6d18a9)itemTimeForMachAbsoluteTime:(long long)arg1;

@end
