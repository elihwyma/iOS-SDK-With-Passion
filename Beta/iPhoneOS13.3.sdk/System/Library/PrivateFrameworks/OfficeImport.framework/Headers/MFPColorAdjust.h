/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPColorAdjust : NSObject

{
    struct MFPColorMatrix *mColorMatrix;
    struct MFPColorMatrix *mGrayMatrix;
    int mColorMatrixFlags;
    OITSUColor *mTransparentRangeLow;
    OITSUColor *mTransparentRangeHigh;
    float mGamma;
    NSDictionary *mRecolorMap;
    float mThreshold;
    _Bool mEnabled;
}

- (id)init;
- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
- (float)threshold;
- (void)setThreshold:(float)arg1;
- (struct MFPColorMatrix *)colorMatrix;
- (float)gamma;
- (void)setGamma:(float)arg1;
- (void)setColorMatrix:(struct MFPColorMatrix *)arg1;
- (struct MFPColorMatrix *)grayMatrix;
- (void)setGrayMatrix:(struct MFPColorMatrix *)arg1;
- (int)colorMatrixFlags;
- (void)setColorMatrixFlags:(int)arg1;
- (id)transparentLow;
- (id)transparentHigh;
- (void)setTransparentLow:(id)arg1 high:(id)arg2;
- (id)recolorMap;
- (void)setRecolorMap:(id)arg1;

@end
