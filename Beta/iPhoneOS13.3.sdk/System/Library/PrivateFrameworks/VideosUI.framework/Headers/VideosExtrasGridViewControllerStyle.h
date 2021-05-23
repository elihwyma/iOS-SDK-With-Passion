/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, UIColor, VideosExtrasGridCellStyle, VideosExtrasGridHeaderStyle, VideosExtrasGridSectionHeaderStyle;

__attribute__((visibility("hidden")))
@interface VideosExtrasGridViewControllerStyle : NSObject

{
    _Bool _showsScrollFade;
    _Bool _adjustsContentInsetByBottomNavBar;
    UIColor *_backgroundColor;
    NSString *_detailTextStyle;
    NSDictionary *_detailDefaultFontAttributes;
    UIColor *_detailTextColor;
    VideosExtrasGridHeaderStyle *_headerStyle;
    VideosExtrasGridSectionHeaderStyle *_sectionHeaderStyle;
    VideosExtrasGridCellStyle *_defaultCellStyle;
    VideosExtrasGridCellStyle *_imageCellStyle;
    VideosExtrasGridCellStyle *_videoCellStyle;
    VideosExtrasGridCellStyle *_productCellStyle;
    double _defaultSpacing;
    double _imageSpacing;
    double _videoSpacing;
    double _productSpacing;
    double _cellLineSpacing;
    struct UIEdgeInsets _collectionViewInsets;
    struct UIEdgeInsets _detailInsets;
    struct UIEdgeInsets _defaultCellSectionInsets;
    struct UIEdgeInsets _imageCellSectionInsets;
    struct UIEdgeInsets _videoCellSectionInsets;
    struct UIEdgeInsets _productCellSectionInsets;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets collectionViewInsets;
@property (retain, nonatomic) NSString *detailTextStyle;
@property (retain, nonatomic) NSDictionary *detailDefaultFontAttributes;
@property (retain, nonatomic) UIColor *detailTextColor;
@property (nonatomic) struct UIEdgeInsets detailInsets;
@property (retain, nonatomic) VideosExtrasGridHeaderStyle *headerStyle;
@property (retain, nonatomic) VideosExtrasGridSectionHeaderStyle *sectionHeaderStyle;
@property (retain, nonatomic) VideosExtrasGridCellStyle *defaultCellStyle;
@property (retain, nonatomic) VideosExtrasGridCellStyle *imageCellStyle;
@property (retain, nonatomic) VideosExtrasGridCellStyle *videoCellStyle;
@property (retain, nonatomic) VideosExtrasGridCellStyle *productCellStyle;
@property (nonatomic) double defaultSpacing;
@property (nonatomic) double imageSpacing;
@property (nonatomic) double videoSpacing;
@property (nonatomic) double productSpacing;
@property (nonatomic) struct UIEdgeInsets defaultCellSectionInsets;
@property (nonatomic) struct UIEdgeInsets imageCellSectionInsets;
@property (nonatomic) struct UIEdgeInsets videoCellSectionInsets;
@property (nonatomic) struct UIEdgeInsets productCellSectionInsets;
@property (nonatomic) double cellLineSpacing;
@property (nonatomic) _Bool showsScrollFade;
@property (nonatomic) _Bool adjustsContentInsetByBottomNavBar;

@end
