/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

@class NSString, TSUColor;

@interface TSKAnnotationAuthor : TSPObject

{
    NSString *mName;
    TSUColor *mColor;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TSUColor *storageColor;
@property (nonatomic, readonly) TSUColor *textMarkupColor;
@property (nonatomic, readonly) TSUColor *textHighlightColor;
@property (nonatomic, readonly) TSUColor *cellViolatorColor;
@property (nonatomic, readonly) TSUColor *flagStrokeColor;
@property (nonatomic, readonly) TSUColor *flagPressedColor;
@property (nonatomic, readonly) TSUColor *changeAdornmentsColor;
@property (nonatomic, readonly) TSUColor *flagFillColor;
@property (nonatomic, readonly) TSUColor *popoverColor;

+ (unsigned long long)presetColorCount;
+ (id)authorStorageColorForIndex:(unsigned long long)arg1;
+ (id)authorTextMarkupColorForIndex:(unsigned long long)arg1;
+ (id)authorTextHighlightColorForIndex:(unsigned long long)arg1;
+ (id)authorCellViolatorColorForIndex:(unsigned long long)arg1;
+ (id)authorFlagStrokeColorForIndex:(unsigned long long)arg1;
+ (id)authorFlagPressedColorForIndex:(unsigned long long)arg1;
+ (id)authorChangeAdornmentsColorForIndex:(unsigned long long)arg1;
+ (id)authorFlagFillColorForIndex:(unsigned long long)arg1;
+ (id)authorPopoverColorForIndex:(unsigned long long)arg1;
+ (id)authorColorAppearanceNameForIndex:(unsigned long long)arg1;
+ (id)authorColorNameForIndex:(unsigned long long)arg1;
+ (id)defaultAuthorName;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)componentRootObject;
- (_Bool)allowsImplicitComponentOwnership;
- (unsigned long long)p_authorColorIndex;
- (id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3;

@end
