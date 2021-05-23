/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ECColumnWidthConvertor : NSObject

{
    int mMultiplier;
}

- (double)lassoColumnWidthFromXl:(double)arg1;
- (void)setupWithEDFont:(id)arg1 state:(id)arg2;
- (double)xlColumnWidthFromXlBaseColumnWidth:(double)arg1;
- (struct CGSize)stringSizeWithFont:(id)arg1 edFont:(id)arg2 drawingState:(id)arg3;
- (float)fontWidthAdjustmentFor:(id)arg1;
- (double)xlColumnWidthFromLasso:(double)arg1;

@end
