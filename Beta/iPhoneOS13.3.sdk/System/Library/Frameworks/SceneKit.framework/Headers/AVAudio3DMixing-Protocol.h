/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

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
