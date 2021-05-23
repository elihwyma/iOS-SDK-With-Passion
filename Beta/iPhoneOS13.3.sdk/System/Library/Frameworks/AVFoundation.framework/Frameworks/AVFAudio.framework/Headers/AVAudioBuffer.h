/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVAudioFormat;

@interface AVAudioBuffer : NSObject

{
    void *_impl;
}

@property (nonatomic, readonly) AVAudioFormat *format;
@property (nonatomic, readonly) const struct AudioBufferList *audioBufferList;
@property (nonatomic, readonly) struct AudioBufferList *mutableAudioBufferList;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned int)byteLength;
- (id)initWithFormat:(id)arg1 byteCapacity:(unsigned int)arg2;
- (unsigned int)byteCapacity;
- (void)setByteLength:(unsigned int)arg1;

@end
