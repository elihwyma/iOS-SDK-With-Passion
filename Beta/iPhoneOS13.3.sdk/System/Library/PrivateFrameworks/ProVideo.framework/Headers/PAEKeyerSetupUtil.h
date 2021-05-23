/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class PAEKeyerCbCrSetup, PAEKeyerLumaSetup;

@interface PAEKeyerSetupUtil : NSObject

{
    struct PAEKeyerOMKeyer2D *_omKeyer;
    PAEKeyerCbCrSetup *_keyerCbCrSetup;
    PAEKeyerLumaSetup *_keyerLumaSetup;
    struct OMSamples *_omSamples;
}

- (void)dealloc;
- (_Bool)autoScale;
- (id)initWithOMSamples:(struct OMSamples *)arg1 colorPrimaries:(int)arg2 atTime:(CDUnion_baaf6063)arg3;
- (struct PAEKeyerOMKeyer2D *)omKeyer;
- (_Bool)tight;
- (double)shadowsGain;
- (double)highlightsGain;
- (double)spreadGain;
- (void)syncWithDB:(CDUnion_baaf6063)arg1 setAsDefault:(_Bool)arg2;
- (void)syncChromaWithDB:(CDUnion_baaf6063)arg1;
- (void)syncLumaWithDB:(CDUnion_baaf6063)arg1;
- (void)removeKeyframeAtTime:(CDUnion_baaf6063)arg1 forParam:(int)arg2 withAPI:(id)arg3;
- (void)removeKeyframeAtTime:(CDUnion_baaf6063)arg1;
- (double)autoAdjustSoftGap;
- (double)simpleKeyAmount;
- (double)autoKeySoftness;
- (_Bool)addTolerance;
- (void)setAddTolerance:(_Bool)arg1;
- (_Bool)defineEdge;
- (void)setDefineEdge:(_Bool)arg1;
- (_Bool)keyerActiveAt:(CDUnion_baaf6063)arg1;

@end
