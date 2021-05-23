/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, PDFAppearanceCharacteristicsPrivate, UIColor;

@interface PDFAppearanceCharacteristics : NSObject

{
    PDFAppearanceCharacteristicsPrivate *_private;
}

@property (nonatomic) long long controlType;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIColor *borderColor;
@property (nonatomic) long long rotation;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *rolloverCaption;
@property (copy, nonatomic) NSString *downCaption;
@property (copy, nonatomic, readonly) NSDictionary *appearanceCharacteristicsKeyValues;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGPDFForm *)icon;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forControlType:(long long)arg2;
- (struct __CFDictionary *)createDictionaryRef;
- (void)addColor:(id)arg1 forKey:(struct __CFString *)arg2 toDictionaryRef:(struct __CFDictionary *)arg3;
- (_Bool)scaleProportional;

@end
