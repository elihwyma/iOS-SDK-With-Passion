//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TNPrintProperties : NSObject
{
    double _headerInset;
    double _footerInset;
    CGSize _unscaledPageSize;
    UIEdgeInsets _printMargins;
}

+ (id)legacyExportPrintProperties;
+ (id)letterSizeLandscapeFormPrintProperties;
+ (id)letterSizePortraitFormPrintProperties;
+ (id)a4SizePrintProperties;
+ (id)letterSizePrintProperties;
@property(nonatomic) double footerInset; // @synthesize footerInset=_footerInset;
@property(nonatomic) double headerInset; // @synthesize headerInset=_headerInset;
@property UIEdgeInsets printMargins; // @synthesize printMargins=_printMargins;
@property CGSize unscaledPageSize; // @synthesize unscaledPageSize=_unscaledPageSize;
- (CGAffineTransform)p_transformForContentScale:(double)arg1 portraitOrientation:(BOOL)arg2;
- (CGRect)unscaledPageRectForDisplayForPortraitOrientation:(BOOL)arg1 userViewScale:(double)arg2 atPageCoordinate:(struct TSUCellCoord)arg3 layoutLeftToRight:(BOOL)arg4;
- (CGSize)pageSizeWithGutterForContentScale:(double)arg1 userViewScale:(double)arg2 portraitOrientation:(BOOL)arg3;
- (CGSize)pageSizeForContentScale:(double)arg1 portraitOrientation:(BOOL)arg2;
- (CGRect)pageHeaderFooterRectForContentScale:(double)arg1 portraitOrientation:(BOOL)arg2 footer:(BOOL)arg3 textHeight:(double)arg4;
- (CGRect)contentRectForContentScale:(double)arg1 portraitOrientation:(BOOL)arg2 headerHeight:(double)arg3 footerHeight:(double)arg4;
- (double)contentScaleForIntegralWidthWithContentScale:(double)arg1 portraitOrientation:(BOOL)arg2;
- (CGRect)p_unscaledContentRectForOrientation:(BOOL)arg1 headerHeight:(double)arg2 footerHeight:(double)arg3;
@property(readonly) double pageHeight;
@property(readonly) double pageWidth;
- (id)initWithPageSize:(CGSize)arg1 contentRect:(CGRect)arg2;
- (id)initWithPageSize:(CGSize)arg1 printMargins:(UIEdgeInsets)arg2;
- (id)initWithPageSize:(CGSize)arg1 printMargins:(UIEdgeInsets)arg2 headerInset:(double)arg3 footerInset:(double)arg4;

@end

