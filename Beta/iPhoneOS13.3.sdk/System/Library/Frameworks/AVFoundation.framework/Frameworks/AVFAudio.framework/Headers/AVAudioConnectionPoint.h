/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVAudioNode;

@interface AVAudioConnectionPoint : NSObject

{
    AVAudioNode *_node;
    unsigned long long _bus;
    void *_reserved;
}

@property (weak, nonatomic, readonly) AVAudioNode *node;
@property (nonatomic, readonly) unsigned long long bus;

+ (id)connectionPointWithNode:(id)arg1 bus:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithNode:(id)arg1 bus:(unsigned long long)arg2;

@end
