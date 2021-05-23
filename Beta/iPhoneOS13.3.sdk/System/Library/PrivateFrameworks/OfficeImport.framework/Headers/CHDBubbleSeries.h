/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDSeries.h>

@class CHDData;

__attribute__((visibility("hidden")))
@interface CHDBubbleSeries : CHDSeries

{
    CHDData *mSizeData;
    _Bool mBubble3D;
    _Bool mInvertIfNegative;
    _Bool mShowBubbleSize;
}

- (_Bool)isShowBubbleSize;
- (void)setShowBubbleSize:(_Bool)arg1;
- (void)setCategoryData:(id)arg1;
- (_Bool)isBubble3D;
- (id)sizeData;
- (void)setSizeData:(id)arg1;
- (void)setBubble3D:(_Bool)arg1;
- (_Bool)isInvertIfNegative;
- (void)setInvertIfNegative:(_Bool)arg1;

@end
