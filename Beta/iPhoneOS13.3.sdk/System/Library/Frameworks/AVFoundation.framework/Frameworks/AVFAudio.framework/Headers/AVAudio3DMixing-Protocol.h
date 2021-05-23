/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/Swift-Protocol.h>

@protocol AVAudio3DMixing <Swift>

@property (nonatomic) long long renderingAlgorithm;
@property (nonatomic) long long sourceMode;
@property (nonatomic) long long pointSourceInHeadMode;
@property (nonatomic) float rate;
@property (nonatomic) float reverbBlend;
@property (nonatomic) float obstruction;
@property (nonatomic) float occlusion;
@property (nonatomic) struct AVAudio3DPoint position;

@end
