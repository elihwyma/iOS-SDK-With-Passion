/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPBrush.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPSolidBrush : MFPBrush

{
    OITSUColor *mColor;
}

- (id)color;
- (void)setColor:(id)arg1;
- (id)initWithColor:(id)arg1;
- (void)fillPath:(id)arg1 evenOddRule:(_Bool)arg2;

@end
