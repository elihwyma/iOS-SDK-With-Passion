//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString, PDFAppearanceCharacteristicsPrivate, UIColor;

@interface PDFAppearanceCharacteristics : NSObject <NSCopying>
{
    PDFAppearanceCharacteristicsPrivate *_private;
}

// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *appearanceCharacteristicsKeyValues;
@property(copy, nonatomic) NSString *downCaption;
@property(copy, nonatomic) NSString *rolloverCaption;
@property(copy, nonatomic) NSString *caption;
@property(nonatomic) long long controlType;
- (void)addColor:(id)arg1 forKey:(struct __CFString )arg2 toDictionaryRef:(struct __CFDictionary )arg3;
- (struct __CFDictionary )createDictionaryRef;
- (id)initWithAnnotationDictionary:(CGPDFDictionary )arg1 forControlType:(long long)arg2;
- (BOOL)scaleProportional;
- (CGPDFForm )icon;
@property(nonatomic) long long rotation;
@property(copy, nonatomic) UIColor *borderColor;
@property(copy, nonatomic) UIColor *backgroundColor;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

