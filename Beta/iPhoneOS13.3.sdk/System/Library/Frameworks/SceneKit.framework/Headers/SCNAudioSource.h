/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class AVAudioFile, AVAudioPCMBuffer, NSString, NSURL;

@interface SCNAudioSource : NSObject

{
    AVAudioFile *_audioFile;
    AVAudioPCMBuffer *_audioBuffer;
    NSURL *_audioURL;
    NSString *_audioName;
    _Bool _loops;
    _Bool _shouldStream;
    _Bool _loaded;
    _Bool positional;
    float volume;
    float rate;
    float reverbBlend;
}

@property (nonatomic, getter=isPositional) _Bool positional;
@property (nonatomic) float volume;
@property (nonatomic) float rate;
@property (nonatomic) float reverbBlend;
@property (nonatomic) _Bool loops;
@property (nonatomic) _Bool shouldStream;

+ (_Bool)supportsSecureCoding;
+ (id)audioSourceNamed:(id)arg1;
+ (id)audioSourceWithAVAudioPCMBuffer:(id)arg1;

- (void)dealloc;
- (void)load;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (double)duration;
- (void)_load;
- (id)fileName;
- (void)loadIfNeeded;
- (long long)renderingAlgorithm;
- (id)audioBuffer;
- (id)audioFile;
- (id)audioBufferFormat;
- (id)initWithAVAudioPCMBuffer:(id)arg1;
- (void)_loadURLWithBundle:(id)arg1;
- (id)initWithFileNamed:(id)arg1 inBundle:(id)arg2;
- (id)initWithFileNamed:(id)arg1;
- (void)_customEncodingOfSCNAudioSource:(id)arg1;
- (void)_customDecodingOfSCNAudioSource:(id)arg1;

@end
