/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVFrameRateRangeInternal;

@interface AVFrameRateRange : NSObject

{
    AVFrameRateRangeInternal *_internal;
}

@property (readonly) double minFrameRate;
@property (readonly) double maxFrameRate;
@property (readonly) CDStruct_1b6d18a9 maxFrameDuration;
@property (readonly) CDStruct_1b6d18a9 minFrameDuration;

+ (id)frameRateRangeWithMinRate:(int)arg1 maxFrameRate:(int)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)includesFrameDuration:(CDStruct_1b6d18a9)arg1;
- (id)initWithMinFrameRate:(int)arg1 maxFrameRate:(int)arg2;
- (_Bool)includesFrameRate:(double)arg1;

@end
