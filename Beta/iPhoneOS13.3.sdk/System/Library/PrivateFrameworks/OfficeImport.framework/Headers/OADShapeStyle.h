/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class OADFontReference, OADStyleMatrixReference;

__attribute__((visibility("hidden")))
@interface OADShapeStyle : NSObject <Swift>

{
    OADStyleMatrixReference *mLineReference;
    OADStyleMatrixReference *mFillReference;
    OADStyleMatrixReference *mEffectReference;
    OADFontReference *mFontReference;
}

+ (id)defaultShapeStyle;
+ (id)defaultOfficeShapeStyle;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2;
- (void)applyToTextBody:(id)arg1;
- (void)setLineReference:(id)arg1;
- (void)setFillReference:(id)arg1;
- (void)setEffectReference:(id)arg1;
- (void)setFontReference:(id)arg1;
- (void)applyToTextListStyle:(id)arg1;
- (void)applyToParagraphProperties:(id)arg1;
- (void)setLineMatrixIndex:(unsigned int)arg1 color:(id)arg2;
- (void)setFillMatrixIndex:(unsigned int)arg1 color:(id)arg2;
- (void)setEffectMatrixIndex:(unsigned int)arg1 color:(id)arg2;
- (void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2 useNull:(_Bool)arg3 strokeWidthMultiplier:(float)arg4;
- (id)lineReference;
- (id)fillReference;
- (id)effectReference;
- (id)fontReference;

@end
