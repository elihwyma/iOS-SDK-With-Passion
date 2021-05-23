/*
 Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FPUIAuthenticationSectionDescriptor : NSObject

{
    _Bool _shouldHighlightRows;
    _Bool _active;
    double _headerHeight;
    double _footerHeight;
    NSString *_headerTitle;
    Class _headerViewClass;
    NSString *_headerViewReuseIdentifier;
    CDUnknownBlockType _headerViewCustomizationBlock;
    NSString *_footerTitle;
    Class _footerViewClass;
    NSString *_footerViewReuseIdentifier;
    CDUnknownBlockType _footerViewCustomizationBlock;
    Class _rowCellClass;
    NSString *_rowCellReuseIdentifier;
}

@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;
@property (nonatomic) _Bool shouldHighlightRows;
@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) Class headerViewClass;
@property (copy, nonatomic) NSString *headerViewReuseIdentifier;
@property (copy, nonatomic) CDUnknownBlockType headerViewCustomizationBlock;
@property (copy, nonatomic) NSString *footerTitle;
@property (copy, nonatomic) Class footerViewClass;
@property (copy, nonatomic) NSString *footerViewReuseIdentifier;
@property (copy, nonatomic) CDUnknownBlockType footerViewCustomizationBlock;
@property (copy, nonatomic) Class rowCellClass;
@property (copy, nonatomic) NSString *rowCellReuseIdentifier;
@property (nonatomic, getter=isActive) _Bool active;

- (id)init;

@end
