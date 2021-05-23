/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CLSPHAssetScoringContext : NSObject

{
    _Bool _shouldEmphasizeShared;
    _Bool _shouldEmphasizeAdjusted;
    _Bool _shouldEmphasizePanorama;
    _Bool _shouldEmphasizeLive;
    _Bool _shouldEmphasizeBurst;
    _Bool _shouldEmphasizeSDOF;
    _Bool _shouldEmphasizeReframe;
    short _audioClassificationsToEmphasize;
    double _viewCountThreshold;
    double _playCountThreshold;
    double _aestheticScoreThresholdToBeAwesome;
}

@property (nonatomic) double viewCountThreshold;
@property (nonatomic) double playCountThreshold;
@property (nonatomic) _Bool shouldEmphasizeShared;
@property (nonatomic) _Bool shouldEmphasizeAdjusted;
@property (nonatomic) _Bool shouldEmphasizePanorama;
@property (nonatomic) _Bool shouldEmphasizeLive;
@property (nonatomic) _Bool shouldEmphasizeBurst;
@property (nonatomic) _Bool shouldEmphasizeSDOF;
@property (nonatomic) _Bool shouldEmphasizeReframe;
@property (nonatomic) short audioClassificationsToEmphasize;
@property (nonatomic) double aestheticScoreThresholdToBeAwesome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;

@end
