/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAudioMixInternal, NSArray;

@interface AVAudioMix : NSObject

{
    AVAudioMixInternal *_audioMix;
}

@property (copy, nonatomic, readonly) NSArray *inputParameters;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setInputParameters:(id)arg1;
- (id)_audioMixInputParametersForTrackID:(int)arg1;

@end
