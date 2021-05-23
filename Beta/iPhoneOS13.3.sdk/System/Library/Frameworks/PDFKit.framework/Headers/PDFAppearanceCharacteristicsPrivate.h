/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface PDFAppearanceCharacteristicsPrivate : NSObject

{
    UIColor *backgroundColor;
    UIColor *borderColor;
    long long rotation;
    long long controlType;
    NSString *caption;
    NSString *rolloverCaption;
    NSString *downCaption;
    struct CGPDFForm *icon;
    int scaleCircumstance;
    _Bool scaleProportional;
}

@end
