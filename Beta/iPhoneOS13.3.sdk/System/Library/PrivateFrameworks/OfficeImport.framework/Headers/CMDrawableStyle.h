/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EMCellStyle.h>

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface CMDrawableStyle : EMCellStyle

{
    OADDrawable *mDrawable;
}

- (void)addPositionProperties:(struct CGRect)arg1;
- (void)addPositionUsingOffsets:(struct CGRect)arg1;

@end
