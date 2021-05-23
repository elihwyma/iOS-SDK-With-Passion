/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WMStyle.h>

@class WDStyle;

__attribute__((visibility("hidden")))
@interface WMParagraphStyle : WMStyle

{
    WDStyle *_baseStyle;
    _Bool _isInTextFrame;
}

+ (_Bool)isShadingNull:(id)arg1;

- (void)addParagraphPropertiesFromStyle:(id)arg1;
- (void)addParagraphProperties:(id)arg1;
- (void)addParagraphStyleCharacterProperties:(id)arg1;
- (_Bool)isRTLWithOverridesFromProperties:(id)arg1;
- (id)leadingMarginPropertyNameWithOverridesFromProperties:(id)arg1;
- (id)trailingMarginPropertyNameWithOverridesFromProperties:(id)arg1;
- (void)mapBorders:(id)arg1;
- (id)initWithWDStyle:(id)arg1 isInTextFrame:(_Bool)arg2;
- (void)addParagraphPropertiesFromStyle;

@end
