/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADColor, OADFontReference;

__attribute__((visibility("hidden")))
@interface OADTableTextStyle : NSObject

{
    OADFontReference *mFontReference;
    OADColor *mColor;
    int mBold;
    int mItalic;
}

+ (id)defaultStyle;
+ (id)defaultColor;
+ (id)defaultFontReference;
+ (int)defaultBold;
+ (int)defaultItalic;

- (id)init;
- (id)description;
- (id)color;
- (void)setColor:(id)arg1;
- (void)setBold:(int)arg1;
- (id)shallowCopy;
- (int)bold;
- (int)italic;
- (void)setFontReference:(id)arg1;
- (void)setItalic:(int)arg1;
- (id)fontReference;
- (void)applyOverridesFrom:(id)arg1;

@end
