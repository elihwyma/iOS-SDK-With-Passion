/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class ODDFillColorList;

__attribute__((visibility("hidden")))
@interface ODDColorTransformStyleLabel : NSObject

{
    ODDFillColorList *mFillColors;
    ODDFillColorList *mLineColors;
    ODDFillColorList *mEffectColors;
    ODDFillColorList *mTextLineColors;
    ODDFillColorList *mTextFillColors;
    ODDFillColorList *mTextEffectColors;
}

- (void)applyToShapeStyle:(id)arg1 index:(unsigned int)arg2 count:(unsigned int)arg3 state:(id)arg4;
- (id)fillColors;
- (id)lineColors;
- (id)effectColors;
- (id)textFillColors;
- (void)setFillColors:(id)arg1;
- (void)setLineColors:(id)arg1;
- (void)setEffectColors:(id)arg1;
- (id)textLineColors;
- (void)setTextLineColors:(id)arg1;
- (void)setTextFillColors:(id)arg1;
- (id)textEffectColors;
- (void)setTextEffectColors:(id)arg1;

@end
