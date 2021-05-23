/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADStroke;

__attribute__((visibility("hidden")))
@interface OADTableCellBorderStyle : NSObject

{
    OADStroke *mLeftStroke;
    OADStroke *mRightStroke;
    OADStroke *mTopStroke;
    OADStroke *mBottomStroke;
    OADStroke *mHorzInsideStroke;
    OADStroke *mVertInsideStroke;
    OADStroke *mTopLeftToBottomRightStroke;
    OADStroke *mBottomLeftToTopRightStroke;
}

+ (id)defaultStyle;
+ (id)defaultAxisParallelStroke;
+ (id)defaultObliqueStroke;

- (id)description;
- (id)shallowCopy;
- (id)topStroke;
- (id)horzInsideStroke;
- (id)bottomStroke;
- (id)leftStroke;
- (id)vertInsideStroke;
- (id)rightStroke;
- (void)setLeftStroke:(id)arg1;
- (void)setRightStroke:(id)arg1;
- (void)setTopStroke:(id)arg1;
- (void)setBottomStroke:(id)arg1;
- (void)setHorzInsideStroke:(id)arg1;
- (void)setVertInsideStroke:(id)arg1;
- (void)setTopLeftToBottomRightStroke:(id)arg1;
- (void)setBottomLeftToTopRightStroke:(id)arg1;
- (id)topLeftToBottomRightStroke;
- (id)bottomLeftToTopRightStroke;
- (id)stroke:(int)arg1;
- (void)setStrokeOfType:(int)arg1 toValue:(id)arg2;
- (void)applyOverridesFrom:(id)arg1;

@end
