/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PCFxBlendOptions.h>

@interface PCFxLightWrapOptions : PCFxBlendOptions

{
    float _amount;
    float _intensity;
    float _lrOpacity;
    int _lrMode;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setIntensity:(float)arg1;
- (void)setOpacity:(float)arg1;
- (void)setAmount:(float)arg1;
- (void)setLRBlendMode:(int)arg1;
- (float)getAmount;
- (float)getIntensity;
- (float)getOpacity;
- (int)getLRBlendMode;
- (id)initWithLRBlendOptions:(id)arg1;

@end
