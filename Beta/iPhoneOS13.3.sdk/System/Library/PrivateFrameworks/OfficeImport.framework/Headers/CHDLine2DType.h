/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDLineType.h>

__attribute__((visibility("hidden")))
@interface CHDLine2DType : CHDLineType

{
    _Bool mShowMarker;
    _Bool mStockType;
}

- (id)initWithChart:(id)arg1;
- (_Bool)showMarker;
- (void)setShowMarker:(_Bool)arg1;
- (_Bool)isStockType;
- (void)setStockType:(_Bool)arg1;

@end
