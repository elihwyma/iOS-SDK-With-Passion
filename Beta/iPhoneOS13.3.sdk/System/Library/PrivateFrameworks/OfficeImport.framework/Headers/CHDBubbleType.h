/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDChartType.h>

__attribute__((visibility("hidden")))
@interface CHDBubbleType : CHDChartType

{
    _Bool mShowNegativeBubbles;
    _Bool mSizeRepresentsRadius;
    int mBubbleScale;
}

- (id)initWithChart:(id)arg1;
- (_Bool)is3DType;
- (int)defaultLabelPosition;
- (_Bool)isShowNegBubbles;
- (void)setShowNegBubbles:(_Bool)arg1;
- (int)bubbleScale;
- (void)setBubbleScale:(int)arg1;
- (_Bool)isSizeRepresentingRadius;
- (void)setSizeRepresentsRadius:(_Bool)arg1;

@end
