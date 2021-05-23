/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVVideoCompositionRenderHintInternal;

@interface AVVideoCompositionRenderHint : NSObject

{
    AVVideoCompositionRenderHintInternal *_internal;
}

@property (nonatomic, readonly) CDStruct_1b6d18a9 startCompositionTime;
@property (nonatomic, readonly) CDStruct_1b6d18a9 endCompositionTime;

- (void)dealloc;
- (id)initWithStartCompositionTime:(CDStruct_1b6d18a9)arg1 endCompositionTime:(CDStruct_1b6d18a9)arg2 subsequentStartCompositionTime:(CDStruct_1b6d18a9)arg3 subsequentEndCompositionTime:(CDStruct_1b6d18a9)arg4;
- (CDStruct_1b6d18a9)subsequentStartCompositionTime;
- (CDStruct_1b6d18a9)subsequentEndCompositionTime;

@end
