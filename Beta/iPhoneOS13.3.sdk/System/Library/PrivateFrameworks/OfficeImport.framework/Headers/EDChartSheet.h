/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDSheet.h>

@class CHDChart;

__attribute__((visibility("hidden")))
@interface EDChartSheet : EDSheet

{
    CHDChart *mMainChart;
    _Bool mIsBoundsSet;
    struct CGRect mBounds;
}

- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg1;
- (void)teardown;
- (_Bool)areBoundsSet;
- (id)mainChart;
- (void)addDrawable:(id)arg1;
- (void)setMainChart:(id)arg1;

@end
