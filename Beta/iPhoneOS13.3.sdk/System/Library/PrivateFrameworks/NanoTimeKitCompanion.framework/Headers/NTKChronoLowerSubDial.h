/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKChronoSubDial.h>

@class SKNode;

@interface NTKChronoLowerSubDial : NTKChronoSubDial

{
    SKNode *_lowerTicks;
    SKNode *_x15sSubLabels;
}

@property (retain, nonatomic) SKNode *x15sSubLabels;

- (id)initWithRadius:(double)arg1 forDevice:(id)arg2;
- (void)colorize:(id)arg1;

@end
